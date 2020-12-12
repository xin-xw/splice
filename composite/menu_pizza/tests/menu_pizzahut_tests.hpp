#ifndef MENU_PIZZAHUT_TESTS
#define MENU_PIZZAHUT_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_pizza/header/menu_items_pizzahut.hpp"
#include "../../composite/menu_pizza/header/menu_pizzahut.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, pizzahut_Customer_Favorites)
{
    menu_component *m_pizzahut_customer_favorites = new menu_pizzahut("Customer Favorites", "Following Options are the Most Popular Items at Pizza Hut");

    EXPECT_EQ(m_pizzahut_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_pizzahut_customer_favorites->get_description(), "Following Options are the Most Popular Items at Pizza Hut");
    menu_component *cheese_pizza = new menu_items_pizzahut(1, "Cheese Pizza", "Your favorite cheese pizza, with your choice of crust covered in classic marinara sauce and topped with gooey mozzarella cheese. It's anything but 'plain'.",13.99);
    m_pizzahut_customer_favorites->add(cheese_pizza);
    cout << "EXPECTED ITEM NUMBER: 1"
        << "\nRECEIVIED: " << cheese_pizza->get_item_number() << endl;
    EXPECT_EQ(cheese_pizza->get_item_number(), 1);


    menu_component *pepperoni_pizza = new menu_items_pizzahut(2, "Pepperoni Pizza", "You literally can't go wrong with pepperoni and mozzarella cheese. Classic for a reason.", 15.99);
    m_pizzahut_customer_favorites->add(pepperoni_pizza);
    cout << "EXPECTED ITEM NUMBER: 2"
        << "\nRECEIVIED: " << pepperoni_pizza->get_item_number() << endl;
    EXPECT_EQ(pepperoni_pizza->get_item_number(), 2);


    menu_component *meat_lovers_pizza = new menu_items_pizzahut(3, "Meat Lover's Pizza", "Packed with pepperoni, Italian sausage, ham, bacon, seasoned pork and beef, this pizza is NOT messing around.", 18.99);
    m_pizzahut_customer_favorites->add(meat_lovers_pizza);
    cout << "EXPECTED ITEM NUMBER: 3"
        << "\nRECEIVIED: " << meat_lovers_pizza->get_item_number() << endl;
    EXPECT_EQ(meat_lovers_pizza->get_item_number(), 3);


    menu_component *supreme_pizza = new menu_items_pizzahut(4, "Supreme Pizza", "This loaded pizza is the perfect choice for family dinner or a lunch with your crew. Includes pepperoni, seasoned pork, beef, mushrooms, green bell peppers and red onions.", 18.99);
    m_pizzahut_customer_favorites->add(supreme_pizza);
    cout << "EXPECTED ITEM NUMBER: 4"
        << "\nRECEIVIED: " << supreme_pizza->get_item_number() << endl;
    EXPECT_EQ(supreme_pizza->get_item_number(), 4);


    menu_component *veggie_lovers_pizza = new menu_items_pizzahut(5, "Veggie Lover's Pizza", "Pizza is officially a vegetable. This garden delight has all the fresh veggie toppings you love: mushrooms, red onions, green bell peppers, Roma tomatoes and black olives.", 18.99);
        //BUFFALO CHICKEN
    m_pizzahut_customer_favorites->add(veggie_lovers_pizza);
    cout << "EXPECTED ITEM NUMBER: 5"
        << "\nRECEIVIED: " << veggie_lovers_pizza->get_item_number() << endl;
    EXPECT_EQ(veggie_lovers_pizza->get_item_number(), 5);


    menu_component *ultimate_cheese_lovers_pizza = new menu_items_pizzahut(6, "Ultimate Cheese Lover's Pizza", "With 50% more mozzarella cheese, Garlic Parmesan sauce and a toasted Parmesan crust, it's the cheesiest of our cheese pizzas.", 18.99);
    m_pizzahut_customer_favorites->add(ultimate_cheese_lovers_pizza);
    cout << "EXPECTED ITEM NUMBER: 6"
        << "\nRECEIVIED: " << ultimate_cheese_lovers_pizza->get_item_number() << endl;
    EXPECT_EQ(ultimate_cheese_lovers_pizza->get_item_number(), 6);

    menu_component *hawaiian_chicken_pizza = new menu_items_pizzahut(7, "Hawaiian Chicken Pizza", "Give your taste buds a tropical vacation with this amped up Hawaiian pizza. It's got tasty chicken, ham, pineapple AND green peppers.", 18.99);
    m_pizzahut_customer_favorites->add(hawaiian_chicken_pizza);
    cout << "EXPECTED ITEM NUMBER: 7"
        << "\nRECEIVIED: " << hawaiian_chicken_pizza->get_item_number() << endl;
    EXPECT_EQ(hawaiian_chicken_pizza->get_item_number(), 7);


    menu_component *backyard_bbq_pizza = new menu_items_pizzahut(8, "Backyard BBQ Pizza", "This BBQ pizza comes topped with grilled chicken, bacon and red onion. Who's the grillmaster now?", 18.99);
    m_pizzahut_customer_favorites->add(backyard_bbq_pizza);
    cout << "EXPECTED ITEM NUMBER: 8"
        << "\nRECEIVIED: " << backyard_bbq_pizza->get_item_number() << endl;
    EXPECT_EQ(backyard_bbq_pizza->get_item_number(), 8);


    menu_component *super_supreme_pizza = new menu_items_pizzahut(9, "Super Supreme Pizza", "Pepperoni, ham, beef, seasoned pork, Italian sausage, red onions, mushrooms, green bell peppers and black olives. It's super!", 19.99);
    m_pizzahut_customer_favorites->add(super_supreme_pizza);
    cout << "EXPECTED ITEM NUMBER: 9"
        << "\nRECEIVIED: " << super_supreme_pizza->get_item_number() << endl;
    EXPECT_EQ(super_supreme_pizza->get_item_number(), 9);   


    menu_component *pepperoni_lovers_pizza = new menu_items_pizzahut(10, "Pepperoni Lover's Pizza", "Ever wished your pepperoni pizza had more pepperoni? Of course you did. This oven-hot pizza has 50% more pepperoni than our average pizza pie.", 18.99);
    m_pizzahut_customer_favorites->add(pepperoni_lovers_pizza);
    cout << "EXPECTED ITEM NUMBER: 10"
        << "\nRECEIVIED: " << pepperoni_lovers_pizza->get_item_number() << endl;
    EXPECT_EQ(pepperoni_lovers_pizza->get_item_number(), 10);

    m_pizzahut_customer_favorites->print();
}

#endif /* MENU_PIZZAHUT_TESTS */
