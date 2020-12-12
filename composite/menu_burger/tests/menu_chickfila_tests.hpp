#ifndef MENU_CHICKFILA_TESTS
#define MENU_CHICKFILA_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_burger/header/menu_items_chickfila.hpp"
#include "../../composite/menu_burger/header/menu_chickfila.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, ChickFilA_CustomerFavorites)
{
    menu_component *m_chickfila_customer_favorites = new menu_chickfila("Customer Favorites", "Following Options are the Most Popular Items at Chick-Fil-A");

     EXPECT_EQ(m_chickfila_customer_favorites->get_name(), "Customer Favorites");
     EXPECT_EQ(m_chickfila_customer_favorites->get_description(), "Following Options are the Most Popular Items at Chick-Fil-A");

    menu_component *chicken_sandwhich = new menu_items_chickfila(1, "Chicken Sandwich", "A boneless breast of chicken seasoned to perfection, hand-breaded, pressure cooked in 100% refined peanut oil and served on a toasted, buttered bun with dill pickle chips. Gluten-free bun or multigrain bun also available at an additional cost.", 4.29);
     m_chickfila_customer_favorites->add(chicken_sandwhich);
     cout << "EXPECTED ITEM NUMBER: 1"
          << "\nRECEIVIED: " << chicken_sandwhich->get_item_number() << endl;
     EXPECT_EQ(chicken_sandwhich->get_item_number(), 1);


    menu_component *spicy_chicken_sandwhich = new menu_items_chickfila(2, "Spicy Chicken Sandwich", "A boneless breast of chicken seasoned with a spicy blend of peppers, hand-breaded, pressure cooked in 100% refined peanut oil and served on a toasted, buttered bun with dill pickle chips. Gluten-free bun or multigrain bun also available at an additional cost.", 4.65);
     m_chickfila_customer_favorites->add(spicy_chicken_sandwhich);
     cout << "EXPECTED ITEM NUMBER: 2"
          << "\nRECEIVIED: " << spicy_chicken_sandwhich->get_item_number() << endl;
     EXPECT_EQ(spicy_chicken_sandwhich->get_item_number(), 2);


    menu_component *chickfila_nuggets_4_piece = new menu_items_chickfila(3, "Chick-fil-a Nuggets 4 Piece","Bite-sized pieces of boneless chicken breast, seasoned to perfection, freshly-breaded and pressure cooked in 100% refined peanut oil. Available with choice of dipping sauce.", 2.20);
     m_chickfila_customer_favorites->add(chickfila_nuggets_4_piece);
     cout << "EXPECTED ITEM NUMBER: 3"
          << "\nRECEIVIED: " << chickfila_nuggets_4_piece->get_item_number() << endl;
     EXPECT_EQ(chickfila_nuggets_4_piece->get_item_number(), 3);


    menu_component *chickfila_nuggets_8_piece = new menu_items_chickfila(4, "Chick-fil-a Nuggets 8 Piece","Bite-sized pieces of boneless chicken breast, seasoned to perfection, freshly-breaded and pressure cooked in 100% refined peanut oil. Available with choice of dipping sauce.", 4.39);
     m_chickfila_customer_favorites->add(chickfila_nuggets_8_piece);
     cout << "EXPECTED ITEM NUMBER: 4"
          << "\nRECEIVIED: " << chickfila_nuggets_8_piece->get_item_number() << endl;
     EXPECT_EQ(chickfila_nuggets_8_piece->get_item_number(), 4);


    menu_component *chickfila_nuggets_12_piece = new menu_items_chickfila(5, "Chick-fil-a Nuggets 12 Piece", "Bite-sized pieces of boneless chicken breast, seasoned to perfection, freshly-breaded and pressure cooked in 100% refined peanut oil. Available with choice of dipping sauce.", 6.29);
     m_chickfila_customer_favorites->add(chickfila_nuggets_12_piece);
     cout << "EXPECTED ITEM NUMBER: 5"
          << "\nRECEIVIED: " << chickfila_nuggets_12_piece->get_item_number() << endl;
     EXPECT_EQ(chickfila_nuggets_12_piece->get_item_number(), 5);


    menu_component *waffle_fries_small = new menu_items_chickfila(6, "Waffle Potato Fries (Small)", "Waffle-cut potatoes cooked in canola oil until crispy outside and tender inside. Lightly sprinkled with Sea Salt.", 1.95);
     m_chickfila_customer_favorites->add(waffle_fries_small);
     cout << "EXPECTED ITEM NUMBER: 6"
          << "\nRECEIVIED: " << waffle_fries_small->get_item_number() << endl;
     EXPECT_EQ(waffle_fries_small->get_item_number(), 6);


    menu_component *waffle_fries_medium = new menu_items_chickfila(7, "Waffle Potato Fries (Medium)", "Waffle-cut potatoes cooked in canola oil until crispy outside and tender inside. Lightly sprinkled with Sea Salt.", 2.25);
     cout << "EXPECTED ITEM NUMBER: 7"
          << "\nRECEIVIED: " << waffle_fries_medium->get_item_number() << endl;
     EXPECT_EQ(waffle_fries_medium->get_item_number(), 7);


    menu_component *waffle_fries_large = new menu_items_chickfila(8, "Waffle Potato Fries (Large)", "Waffle-cut potatoes cooked in canola oil until crispy outside and tender inside. Lightly sprinkled with Sea Salt.", 2.55);
     m_chickfila_customer_favorites->add(waffle_fries_large);
     cout << "EXPECTED ITEM NUMBER: 8"
          << "\nRECEIVIED: " << waffle_fries_large->get_item_number() << endl;
     EXPECT_EQ(waffle_fries_large->get_item_number(), 8);


    menu_component *mac_and_cheese_small = new menu_items_chickfila(9, "Mac and Cheese (Small)", "A classic macaroni and cheese recipe featuring a special blend of cheeses including Parmesan, Cheddar, and Romano. Baked in-restaurant to form a crispy top layer of baked cheese.", 2.89);
     m_chickfila_customer_favorites->add(mac_and_cheese_small);
     cout << "EXPECTED ITEM NUMBER: 9"
          << "\nRECEIVIED: " << mac_and_cheese_small->get_item_number() << endl;
     EXPECT_EQ(mac_and_cheese_small->get_item_number(), 9);


    menu_component *mac_and_cheese_medium = new menu_items_chickfila(10, "Mac and Cheese (Medium)", "A classic macaroni and cheese recipe featuring a special blend of cheeses including Parmesan, Cheddar, and Romano. Baked in-restaurant to form a crispy top layer of baked cheese.", 3.65);
     m_chickfila_customer_favorites->add(mac_and_cheese_medium);
     cout << "EXPECTED ITEM NUMBER: 10"
          << "\nRECEIVIED: " << mac_and_cheese_medium->get_item_number() << endl;
     EXPECT_EQ(mac_and_cheese_medium->get_item_number(), 10);


     m_chickfila_customer_favorites->print();
}

#endif /* MENU_CHICKFILA_TESTS */
