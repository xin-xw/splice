#ifndef MENU_INNOUT_TESTS
#define MENU_INNOUT_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_burger/header/menu_items_innout.hpp"
#include "../../composite/menu_burger/header/menu_innout.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, InNOut_Customer_Favorites)
{
    menu_component *m_innout_customer_favorites = new menu_innout("Customer Favorites", "Following Options are the Most Popular Items at In-N-Out");
     EXPECT_EQ(m_innout_customer_favorites->get_name(), "Customer Favorites");
     EXPECT_EQ(m_innout_customer_favorites->get_description(), "Following Options are the Most Popular Items at In-N-Out");
    menu_component *double_double_burger = new menu_items_innout(1, "Double Double", "Two 100% pure beef patties, hand lettuce, tomato, spread, two slices of american cheese, with or without onions, stacked high on a freshly baked bun.", 3.45);

     m_innout_customer_favorites->add(double_double_burger);
     cout << "EXPECTED ITEM NUMBER: 1"
          << "\nRECEIVIED: " << double_double_burger->get_item_number() << endl;
     EXPECT_EQ(double_double_burger->get_item_number(), 1);


    menu_component *cheeseburger = new menu_items_innout(2, "Cheeseburger", "100% Pure beef patty, lettuce, tomato, spread, one slice of american cheese, with or without onions, on a freshly baked bun.", 2.40);
     m_innout_customer_favorites->add(cheeseburger);
     cout << "EXPECTED ITEM NUMBER: 2"
          << "\nRECEIVIED: " << cheeseburger->get_item_number() << endl;
     EXPECT_EQ(cheeseburger->get_item_number(), 2);

     menu_component *hamburger = new menu_items_innout(3, "Hamburger", "100% Pure patty, lettuce, tomato, spread, with or without onions, on a freshly baked bun.", 2.10);
     m_innout_customer_favorites->add(hamburger);
     cout << "EXPECTED ITEM NUMBER: 3"
          << "\nRECEIVIED: " << hamburger->get_item_number() << endl;
     EXPECT_EQ(hamburger->get_item_number(), 3);


     menu_component *french_fries = new menu_items_innout(4, "French Fries", "Fresh cut potatoes prepared in 100% vegetable oil.", 1.60);
     m_innout_customer_favorites->add(french_fries);
     cout << "EXPECTED ITEM NUMBER: 4"
          << "\nRECEIVIED: " << french_fries->get_item_number() << endl;
     EXPECT_EQ(french_fries->get_item_number(), 4);


     menu_component *shake_strawberry = new menu_items_innout(5, "Strawberry Shake", "Strawberry Shake made with 100% real ice cream.", 2.15);
     m_innout_customer_favorites->add(shake_strawberry);
     cout << "EXPECTED ITEM NUMBER: 5"
          << "\nRECEIVIED: " << shake_strawberry->get_item_number() << endl;
     EXPECT_EQ(shake_strawberry->get_item_number(), 5);


     menu_component *shake_chocolate = new menu_items_innout(6, "Chocolate Shake", "Chocolate Shake made with 100% real ice cream.", 2.15);
     m_innout_customer_favorites->add(shake_chocolate);
     cout << "EXPECTED ITEM NUMBER: 6"
          << "\nRECEIVIED: " << shake_chocolate->get_item_number() << endl;
     EXPECT_EQ(shake_chocolate->get_item_number(), 6);


     menu_component *shake_vanilla = new menu_items_innout(7, "Vanilla Shake", "Vanilla Shake made with 100% real ice cream.", 2.15);
     m_innout_customer_favorites->add(shake_vanilla);
     cout << "EXPECTED ITEM NUMBER: 7"
          << "\nRECEIVIED: " << shake_vanilla->get_item_number() << endl;
     EXPECT_EQ(shake_vanilla->get_item_number(), 7);


     menu_component *coffee = new menu_items_innout(8, "Coffee", "Hot Brewed Coffee", 1.35);
     m_innout_customer_favorites->add(coffee);
     cout << "EXPECTED ITEM NUMBER: 8"
          << "\nRECEIVIED: " << coffee->get_item_number() << endl;
     EXPECT_EQ(coffee->get_item_number(), 8);


     menu_component *milk = new menu_items_innout(9, "Milk", "Refreshing Milk", 0.99);
     m_innout_customer_favorites->add(milk);
     cout << "EXPECTED ITEM NUMBER: 9"
          << "\nRECEIVIED: " << milk->get_item_number() << endl;
     EXPECT_EQ(milk->get_item_number(), 9);


     menu_component *soft_drink_medium = new menu_items_innout(10, "Soft Drink (Medium)", "Refreshing selctions include Coca-Cola, Diet Coke, 7UP, Dr. Pepper, Root Beer, Lemonade, Minute Maid Light Lemonade, and Iced Tea ", 1.65);
     m_innout_customer_favorites->add(soft_drink_medium);
     cout << "EXPECTED ITEM NUMBER: 10"
          << "\nRECEIVIED: " << soft_drink_medium->get_item_number() << endl;
     EXPECT_EQ(soft_drink_medium->get_item_number(), 10);

     m_innout_customer_favorites->print();
}

#endif /* MENU_INNOUT_TESTS */
