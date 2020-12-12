#ifndef MENU_DELTACO_TESTS
#define MENU_DELTACO_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_taco/header/menu_items_deltaco.hpp"
#include "../../composite/menu_taco/header/menu_deltaco.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, DelTaco_CustomerFavorites)
{
    menu_component *m_deltaco_customer_favorites = new menu_deltaco("Customer Favorites", "Following Options are the Most Popular Items at Del Taco");

    EXPECT_EQ(m_deltaco_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_deltaco_customer_favorites->get_description(), "Following Options are the Most Popular Items at Del Taco");

    menu_component *the_del_taco = new menu_items_deltaco(1, "The Del Taco", "The Del Taco is inspired by the original and loaded with more of everything you love, like more seasoned beef and more hand-grated cheddar cheese, plus crisp lettuce and chopped fresh tomatoes in a crunchy corn shell or warm flour tortilla.", 1.69);
    m_deltaco_customer_favorites->add(the_del_taco);
    cout << "EXPECTED ITEM NUMBER: 1"
        << "\nRECEIVIED: " << the_del_taco->get_item_number() << endl;
    EXPECT_EQ(the_del_taco->get_item_number(), 1);


    menu_component *beyond_taco = new menu_items_deltaco(2, "Beyond Taco", "Layered with 100% plant-based Beyond Meat®, hand-grated cheddar cheese, crisp lettuce, and fresh diced tomatoes in a crunchy corn shell or soft flour tortilla.", 2.49);
    m_deltaco_customer_favorites->add(beyond_taco);
    cout << "EXPECTED ITEM NUMBER: 2"
        << "\nRECEIVIED: " << beyond_taco->get_item_number() << endl;
    EXPECT_EQ(beyond_taco->get_item_number(), 2);

    
    menu_component *al_carbon_taco = new menu_items_deltaco(3, "Al Carbon Taco", "Your choice of freshly grilled carne asada or freshly grilled marinated chicken, topped with diced onions, fresh cilantro, and drizzled with tangy green sauce, wrapped in two warm corn tortillas.", 1.00);
    m_deltaco_customer_favorites->add(al_carbon_taco);
    cout << "EXPECTED ITEM NUMBER: 3"
        << "\nRECEIVIED: " << al_carbon_taco->get_item_number() << endl;
    EXPECT_EQ(al_carbon_taco->get_item_number(), 3);


    menu_component *beer_battered_fish_taco = new menu_items_deltaco(4, "Beer Battered Fish Taco", "Hand-cut Alaska Pollock fillet in a crispy beer batter, topped with crunchy cabbage, savory secret sauce, and handmade pico de gallo, wrapped in two warm corn tortillas and served with a fresh-cut lime wedge.", 2.89);
    m_deltaco_customer_favorites->add(beer_battered_fish_taco);
    cout << "EXPECTED ITEM NUMBER: 4"
        << "\nRECEIVIED: " << beer_battered_fish_taco->get_item_number() << endl;
    EXPECT_EQ(beer_battered_fish_taco->get_item_number(), 4);


    menu_component *epic_cali_bacon_burrito = new menu_items_deltaco(5, "Epic Cali Bacon Burrito", "The Epic Cali Bacon Burrito combines all your favorite loaded baked potato flavors. We layer freshly grilled chicken, carne asada, or Beyond meat, Del Taco's famous Crinkle-Cut Fries, tangy chipotle sauce, crisp bacon, freshly grated cheddar cheese and cool sour cream.", 5.69);
    m_deltaco_customer_favorites->add(epic_cali_bacon_burrito);
    cout << "EXPECTED ITEM NUMBER: 5"
        << "\nRECEIVIED: " << epic_cali_bacon_burrito->get_item_number() << endl;
    EXPECT_EQ(epic_cali_bacon_burrito->get_item_number(), 5);


    menu_component *epic_original_mex_burrito = new menu_items_deltaco(6, "Epic Original Mex Burrito", "This Epic Burrito is loaded with fresh grilled carne asada steak, chicken or Beyond Meat, slow-cooked beans made from scratch, fresca lime rice, fresh guacamole, and handmade pico de gallo salsa, all in a warm, oversized flour tortilla.", 5.49);
    m_deltaco_customer_favorites->add(epic_original_mex_burrito);
    cout << "EXPECTED ITEM NUMBER: 6"
        << "\nRECEIVIED: " << epic_original_mex_burrito->get_item_number() << endl;
    EXPECT_EQ(epic_original_mex_burrito->get_item_number(), 6);


    menu_component *epic_loaded_queso_burrito = new menu_items_deltaco(7, "Epic Loaded Queso Burrito", "This Epic Burrito is loaded with fresh grilled chicken, carne asada steak or Beyond Meat, Del Taco’s famous Crinkle-Cut Fries, creamy Queso Blanco, hand-grated cheddar cheese, and handmade pico de gallo, wrapped in a warm oversized flour tortilla. A Cali burrito with epic queso flavor.", 5.29);
    m_deltaco_customer_favorites->add(epic_loaded_queso_burrito);
    cout << "EXPECTED ITEM NUMBER: 7"
        << "\nRECEIVIED: " << epic_loaded_queso_burrito->get_item_number() << endl;
    EXPECT_EQ(epic_loaded_queso_burrito->get_item_number(), 7);


    menu_component *epic_fresh_avocado_burrito = new menu_items_deltaco(8, "Epic Fresh Avocado Burrito", "This Epic Burrito is loaded with fresh grilled carne asada steak, chicken or Beyond Meat, hand-sliced avocado, handmade pico de gallo, salsa casera, fresca lime rice, and seasoned black beans all in a warm, oversized flour tortilla. Made with fresh, premium ingredients for an Epic burrito experience.", 5.69);
    m_deltaco_customer_favorites->add(epic_fresh_avocado_burrito);
    cout << "EXPECTED ITEM NUMBER: 8"
        << "\nRECEIVIED: " << epic_fresh_avocado_burrito->get_item_number() << endl;
    EXPECT_EQ(epic_fresh_avocado_burrito->get_item_number(), 8);


    menu_component *queso_loaded_nachos = new menu_items_deltaco(9, "Queso Loaded Nachos", "Piled high and loaded with your choice of seasoned beef, fresh grilled chicken, or fresh grilled carne asada steak, house-made chips, slow-cooked beans made from scratch, and creamy Queso Blanco, all topped with sour cream, fresh diced tomatoes, and sliced jalapenos.", 3.99);
    m_deltaco_customer_favorites->add(queso_loaded_nachos);
    cout << "EXPECTED ITEM NUMBER: 9"
        << "\nRECEIVIED: " << queso_loaded_nachos->get_item_number() << endl;
    EXPECT_EQ(queso_loaded_nachos->get_item_number(), 9);


    menu_component *chips_and_queso = new menu_items_deltaco(10, "Chips & Queso", "Creamy Queso Blanco served with a large bag of fresh, house-made tortilla chips. Great for sharing!", 3.29);
    m_deltaco_customer_favorites->add(chips_and_queso);
    cout << "EXPECTED ITEM NUMBER: 10"
        << "\nRECEIVIED: " << chips_and_queso->get_item_number() << endl;
    EXPECT_EQ(chips_and_queso->get_item_number(), 10);


    m_deltaco_customer_favorites->print();
}

#endif /* MENU_DELTACO_TESTS */
