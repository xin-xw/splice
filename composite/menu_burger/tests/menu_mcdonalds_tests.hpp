#ifndef MENU_MCDONALDS_TEST
#define MENU_MCDONALDS_TEST
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_burger/header/menu_items_mcdonalds.hpp"
#include "../../composite/menu_burger/header/menu_mcdonalds.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, McDonalds_CustomerFavorites)
{
    menu_component *m_mcdonalds_customer_favorites = new menu_mcdonalds("Customer Favorites", "Following Options are the Most Popular Items at McDonald's");

     EXPECT_EQ(m_mcdonalds_customer_favorites->get_name(), "Customer Favorites");
     EXPECT_EQ(m_mcdonalds_customer_favorites->get_description(), "Following Options are the Most Popular Items at McDonald's");

    menu_component *big_mac = new menu_items_mcdonalds(1, "Big Mac", "Mouthwatering perfection starts with two 100% pure beef patties and Big Mac sauce sandwiched between a sesame seed bun. It’s topped off with pickles, crisp shredded lettuce, finely chopped onion and American cheese.", 3.99);
     m_mcdonalds_customer_favorites->add(big_mac);
     cout << "EXPECTED ITEM NUMBER: 1"
          << "\nRECEIVIED: " << big_mac->get_item_number() << endl;
     EXPECT_EQ(big_mac->get_item_number(), 1);


    menu_component *mcnuggets_4_piece = new menu_items_mcdonalds(2, "4 Piece Chicken McNuggets", "Our tender, juicy Chicken McNuggets® are made with 100% white meat chicken and no artificial colors, flavors or preservatives.", 1.99);
     m_mcdonalds_customer_favorites->add(mcnuggets_4_piece);
     cout << "EXPECTED ITEM NUMBER: 2"
          << "\nRECEIVIED: " << mcnuggets_4_piece->get_item_number() << endl;
     EXPECT_EQ(mcnuggets_4_piece->get_item_number(), 2);


     menu_component *mcnuggets_10_piece = new menu_items_mcdonalds(3, "10 Piece Chicken McNuggets", "Our tender, juicy Chicken McNuggets® are made with 100% white meat chicken and no artificial colors, flavors or preservatives.", 4.49);
     m_mcdonalds_customer_favorites->add(mcnuggets_10_piece);
     cout << "EXPECTED ITEM NUMBER: 3"
          << "\nRECEIVIED: " << mcnuggets_10_piece->get_item_number() << endl;   
     EXPECT_EQ(mcnuggets_10_piece->get_item_number(), 3);


     menu_component *iced_coffee_small = new menu_items_mcdonalds(4, "Iced Coffee (Small)", "McCafe Iced Coffee is refreshingly cool and made with 100% Arabica beans, cream and your choice of flavored coffee syrup – caramel, hazelnut, French vanilla and sugar-free French vanilla.", 1.39);
     m_mcdonalds_customer_favorites->add(iced_coffee_small);
     cout << "EXPECTED ITEM NUMBER: 4"
          << "\nRECEIVIED: " << iced_coffee_small->get_item_number() << endl;   
     EXPECT_EQ(iced_coffee_small->get_item_number(), 4);


     menu_component *iced_coffee_medium = new menu_items_mcdonalds(5, "Iced Coffee (Medium)", "McCafe Iced Coffee is refreshingly cool and made with 100% Arabica beans, cream and your choice of flavored coffee syrup – caramel, hazelnut, French vanilla and sugar - free French vanilla.", 1.79);
     m_mcdonalds_customer_favorites->add(iced_coffee_medium);
     cout << "EXPECTED ITEM NUMBER: 5"
          << "\nRECEIVIED: " << iced_coffee_medium->get_item_number() << endl;   
     EXPECT_EQ(iced_coffee_medium->get_item_number(), 5);


     menu_component *iced_coffee_large = new menu_items_mcdonalds(6, "Iced Coffee (Large)", "McCafe Iced Coffee is refreshingly cool and made with 100% Arabica beans, cream and your choice of flavored coffee syrup – caramel, hazelnut, French vanilla and sugar - free French vanilla.", 1.99);
     m_mcdonalds_customer_favorites->add(iced_coffee_large);
     cout << "EXPECTED ITEM NUMBER: 6"
          << "\nRECEIVIED: " << iced_coffee_large->get_item_number() << endl;   
     EXPECT_EQ(iced_coffee_large->get_item_number(), 6);


     menu_component *fries_small = new menu_items_mcdonalds(7, "Fries Small", "Our World Famous Fries® are made with premium potatoes such as the Russet Burbank and the Shepody. With 0g of trans fat per labeled serving, these epic fries are crispy and golden on the outside and fluffy on the inside.", 1.39);
     m_mcdonalds_customer_favorites->add(fries_small);
     cout << "EXPECTED ITEM NUMBER: 7"
          << "\nRECEIVIED: " << fries_small->get_item_number() << endl;   
     EXPECT_EQ(fries_small->get_item_number(), 7);


     menu_component *fries_medium = new menu_items_mcdonalds(8, "Fries Medium", "Our World Famous Fries® are made with premium potatoes such as the Russet Burbank and the Shepody. With 0g of trans fat per labeled serving, these epic fries are crispy and golden on the outside and fluffy on the inside.", 1.79);
     m_mcdonalds_customer_favorites->add(fries_medium);
     cout << "EXPECTED ITEM NUMBER: 8"
          << "\nRECEIVIED: " << fries_medium->get_item_number() << endl;   
     EXPECT_EQ(fries_medium->get_item_number(), 8);


     menu_component *fries_large = new menu_items_mcdonalds(9, "Fries Large", "Our World Famous Fries® are made with premium potatoes such as the Russet Burbank and the Shepody. With 0g of trans fat per labeled serving, these epic fries are crispy and golden on the outside and fluffy on the inside.", 1.89);
     m_mcdonalds_customer_favorites->add(fries_large);
     cout << "EXPECTED ITEM NUMBER: 9"
          << "\nRECEIVIED: " << fries_large->get_item_number() << endl;   
     EXPECT_EQ(fries_large->get_item_number(), 9);
     m_mcdonalds_customer_favorites->print();
}

#endif /* MENU_MCDONALDS_TEST */
