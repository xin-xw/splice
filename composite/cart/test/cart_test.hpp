#ifndef CART_TEST
#define CART_TEST
#include "gtest/gtest.h"
#include "../../menu_burger/header/menu_mcdonalds.hpp"
#include "../../menu_burger/header/menu_items_mcdonalds.hpp"
#include "../../party/party.hpp"
#include "../../party/user.hpp"
#include "../../../composite/cart_component.hpp"
#include "../user_cart.hpp"
#include "../cart_items.hpp"


TEST(Cart_Test, Cart_Items_Size_Test)
{
     party_component *c_kim_kardashian = new user ("Kim Kardashian");
     party_component *c_kanye_west = new user("Kanye West");

     menu_component *c_mcdonalds_test = new menu_mcdonalds("McDonalds Test", "\nDescription Test");
     menu_component *test_1 = new menu_items_mcdonalds(1, "Test 1", "Description Test 1", 103);
     menu_component *test_2 = new menu_items_mcdonalds(2, "Test 2", "Description Test 2", 200);
     menu_component *test_3 = new menu_items_mcdonalds(3, "Test 3", "Description Test 3", 400.3);

     cart_component *c_kim_kardashian_cart = new user_cart(c_kim_kardashian);
     cart_component *c_kim_kardashian_cart_items = new cart_items(test_1);
     c_kim_kardashian_cart_items->add_to_cart(test_2);
     c_kim_kardashian_cart_items->add_to_cart(test_2);
     c_kim_kardashian_cart_items->add_to_cart(test_3);
     c_kim_kardashian_cart->add(c_kim_kardashian_cart_items);
     c_kim_kardashian_cart->display();

     cout << endl << endl;
     
     cart_component *c_kanye_west_cart = new user_cart(c_kanye_west);
     cart_component *c_kanye_west_cart_items = new cart_items(test_1);
     c_kanye_west_cart->add(c_kanye_west_cart_items);
     c_kanye_west_cart->display();

     EXPECT_EQ(c_kim_kardashian_cart->get_size(), 1);
     EXPECT_EQ(c_kim_kardashian_cart_items->get_size() , 4);
     EXPECT_EQ(c_kanye_west_cart->get_size(), 1);
     EXPECT_EQ(c_kanye_west_cart->get_size(), 1);
}

TEST(Cart_Test, Adding_Items_To_Cart_Test_1)
{
    party_component *c_p = new party("Party1", 2);
    party_component *c_user_xin = new user("Xin");
    party_component *c_user_jeanette = new user("Jeanette");

    c_p->add(c_user_xin);
    c_p->add(c_user_jeanette);

    menu_component *c_mcdonalds_test = new menu_mcdonalds("McDonalds Test", "\nDescription Test");
    menu_component *test_1 = new menu_items_mcdonalds(1, "Test 1", "Description Test 1", 3.99);
    menu_component *test_2 = new menu_items_mcdonalds(2, "Test 2", "Description Test 2", 4.00);
    c_mcdonalds_test->add(test_1);

    cart_component *c_user_xin_cart = new user_cart(c_user_xin);
    cart_component *xin_cart_items = new cart_items(test_1);
    xin_cart_items->add_to_cart(test_2);
    c_user_xin_cart->add(xin_cart_items);
    c_user_xin_cart->display();

    cout << endl
         << endl;
    cout << "EXPECTED # OF CARTS: 1, RECEIVED # OF CARTS: " << c_user_xin_cart->get_size() << endl;
    EXPECT_EQ(c_user_xin_cart->get_size(), 1);

    cout << "EXPECTED # OF ITEMS: 2, RECEIVED # OF ITEMS: " << xin_cart_items->get_size() << endl;
    EXPECT_EQ(xin_cart_items->get_size(), 2);
}

TEST(Cart_Test, Total_Price_Test)
{
    party_component *c_p = new party("Party1", 2);
    party_component *c_user_xin = new user("Xin");
    party_component *c_user_jeanette = new user("Jeanette");

    c_p->add(c_user_xin);
    c_p->add(c_user_jeanette);

    menu_component *c_mcdonalds_test = new menu_mcdonalds("McDonalds Test", "\nDescription Test");
    menu_component *test_1 = new menu_items_mcdonalds(1, "Test 1", "Description Test 1", 1200);
    c_mcdonalds_test->add(test_1);
    menu_component *test_2 = new menu_items_mcdonalds(2, "Test 2", "Description Test 2", 732.84);

    cart_component *c_user_xin_cart_1 = new user_cart(c_user_xin);
    cart_component *xin_cart_items_1 = new cart_items(test_1);
    xin_cart_items_1->add_to_cart(test_2);
    
    c_user_xin_cart_1->add(xin_cart_items_1);

    cout << endl
         << endl;
    cout << "EXPECTED TOTAL PRICE: $ 1932.84, RECEIVED TOTAL PRICE: " << xin_cart_items_1->cart_price() << endl
         << endl;

    c_user_xin_cart_1->display();
    double m_absolute_error = 0.001;
    EXPECT_NEAR(xin_cart_items_1->cart_price(), 1932.84, m_absolute_error);
}

TEST(Cart_Test, Adding_Items_To_Multiple_Carts)
{
     party_component *party_jeanette_xin = new party("Jeanette and Xin", 2);
     party_component *user_xin = new user("Xin");
     party_component *user_jeanette = new user("Jeanette");

     party_jeanette_xin->add(user_xin);
     party_jeanette_xin->add(user_jeanette);
     party_jeanette_xin->print();

     menu_component *c_mcdonalds_test = new menu_mcdonalds("McDonalds Test", "\nDescription Test");
     menu_component *test_1 = new menu_items_mcdonalds(1, "Test 1", "Description Test 1", 6);
     menu_component *test_2 = new menu_items_mcdonalds(2, "Test 2", "Description Test 2", 4.30);
     menu_component *test_3 = new menu_items_mcdonalds(3, "Test 3", "Description Test 3", 2.5);

     cart_component *cart_xin = new user_cart(user_xin);
     cart_component *cart_jeanette = new user_cart(user_jeanette);

     cart_component *cart_items_xin = new cart_items(test_1);
     cart_items_xin->add_to_cart(test_3);
     
     cart_component *cart_items_jeanette = new cart_items(test_2);
     cart_items_jeanette->add_to_cart(test_2);
     cart_items_jeanette->add_to_cart(test_3);

     cart_xin->add(cart_items_xin);
     cart_jeanette->add(cart_items_jeanette);

     cart_xin->display();
     cout << endl
          << endl;
     cart_jeanette->display();


     EXPECT_EQ(cart_items_xin->get_size(), 2);
     EXPECT_EQ(cart_items_jeanette->get_size(), 3);
     double m_absolute_error = 0.001; // 0.1% absolute error allowed for doubles
     EXPECT_NEAR(cart_items_xin->cart_price(), 8.5, m_absolute_error);
     EXPECT_NEAR(cart_items_jeanette->cart_price(), 11.1, m_absolute_error);
}

#endif /* CART_TEST */
