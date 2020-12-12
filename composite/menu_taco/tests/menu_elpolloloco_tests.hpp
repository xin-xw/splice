#ifndef MENU_ELPOLLOLOCO_TESTS
#define MENU_ELPOLLOLOCO_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_taco/header/menu_items_elpolloloco.hpp"
#include "../../composite/menu_taco/header/menu_elpolloloco.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, elpolloloco_Customer_Favorites)
{
    menu_component *m_elpolloloco_customer_favorites = new menu_elpolloloco("Customer Favorites", "Following Options are the Most Popular Items at El Pollo Loco");

    EXPECT_EQ(m_elpolloloco_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_elpolloloco_customer_favorites->get_description(), "Following Options are the Most Popular Items at El Pollo Loco");
    menu_component *chicken_avocado_taco = new menu_items_elpolloloco(1, "Chicken Avocado Taco", "Fire-grilled chicken, avocado, shredded lettuce, queso fresco, and pico on a handcrafted tortilla and finished with creamy cilantro dressing.", 2.99);
    m_elpolloloco_customer_favorites->add(chicken_avocado_taco);
    cout << "EXPECTED ITEM NUMBER: 1"
        << "\nRECEIVIED: " << chicken_avocado_taco->get_item_number() << endl;
    EXPECT_EQ(chicken_avocado_taco->get_item_number(), 1);


    menu_component *chickenless_pollo_taco = new menu_items_elpolloloco(2, "Chickenless Pollo Taco", "Tender shreds of plant-based protein cooked in adobo-- a slow simmered sauce of fire roasted peppers, onions and tomatoes then topped with queso fresco, shredded lettuce, and avocado on a handcrafted tortilla.", 2.99);
    m_elpolloloco_customer_favorites->add(chickenless_pollo_taco);
    cout << "EXPECTED ITEM NUMBER: 2"
        << "\nRECEIVIED: " << chickenless_pollo_taco->get_item_number() << endl;
    EXPECT_EQ(chickenless_pollo_taco->get_item_number(), 2);


    menu_component *california_queso_burrito = new menu_items_elpolloloco(3, "Chicken Queso Burrito", "The California Queso Burrito has tender pieces of our famous fire-grilled chicken, signature Tapatio fries, fresh handmade guacamole, pinto beans, queso blanco and house-made pico de gallo. All this goodness comes wrapped in a warm flour tortilla.", 6.99);
    m_elpolloloco_customer_favorites->add(california_queso_burrito);
    cout << "EXPECTED ITEM NUMBER: 3"
        << "\nRECEIVIED: " << california_queso_burrito->get_item_number() << endl;
    EXPECT_EQ(california_queso_burrito->get_item_number(), 3);


    menu_component *chicken_tinga_burrito = new menu_items_elpolloloco(4, "Chicken Tinga Burrito", "The Chicken Tinga Burrito has savory, lightly smoky chicken tinga, seasoned rice, pinto beans, fresh sliced avocado, and is topped with queso fresco and house-made pico de gallo – all wrapped in a warm flour tortilla.", 7.19);
    m_elpolloloco_customer_favorites->add(chicken_tinga_burrito);
    cout << "EXPECTED ITEM NUMBER: 4"
        << "\nRECEIVIED: " << chicken_tinga_burrito->get_item_number() << endl;
    EXPECT_EQ(chicken_tinga_burrito->get_item_number(), 4);


    menu_component *original_pollo_bowl = new menu_items_elpolloloco(5, "Original Pollo Bowl", "Our chicken breast is fire-grilled to perfection then chopped and added to slow-simmered pinto beans, rice, diced onions, fresh cilantro and pico de gallo salsa.", 4.99);
    m_elpolloloco_customer_favorites->add(original_pollo_bowl);
    cout << "EXPECTED ITEM NUMBER: 5"
        << "\nRECEIVIED: " << original_pollo_bowl->get_item_number() << endl;
    EXPECT_EQ(original_pollo_bowl->get_item_number(), 5);


    menu_component *double_chicken_bowl = new menu_items_elpolloloco(6, "Double Chicken Bowl", "Double up on a double portion of delicious citrus-marinated chopped chicken breast on top of authentic pinto beans, rice, cabbage and garnished with sour cream, shredded jack cheese, avocado slices and pico de gallo salsa.", 7.79);
    m_elpolloloco_customer_favorites->add(double_chicken_bowl);
    cout << "EXPECTED ITEM NUMBER: 6"
        << "\nRECEIVIED: " << double_chicken_bowl->get_item_number() << endl;
    EXPECT_EQ(double_chicken_bowl->get_item_number(), 6);

    menu_component *chips_and_guacamole_small = new menu_items_elpolloloco(7, "Small Chips & Guacamole", "Made fresh daily, our new guacamole is loaded with chunks of avocado and paired with our authentic tortilla chips.", 2.49);
    m_elpolloloco_customer_favorites->add(chips_and_guacamole_small);
    cout << "EXPECTED ITEM NUMBER: 7"
        << "\nRECEIVIED: " << chips_and_guacamole_small->get_item_number() << endl;
    EXPECT_EQ(chips_and_guacamole_small->get_item_number(), 7);


    menu_component *chips_and_guacamole_regular = new menu_items_elpolloloco(8, "Regular Chip & Guacamole", "What's better than our white corn tortilla chips, hand salted and made fresh daily? Our tortilla chips with freshly, hand-made guacamole, of course.", 3.99);
    m_elpolloloco_customer_favorites->add(chips_and_guacamole_regular);
    cout << "EXPECTED ITEM NUMBER: 8"
        << "\nRECEIVIED: " << chips_and_guacamole_regular->get_item_number() << endl;
    EXPECT_EQ(chips_and_guacamole_regular->get_item_number(), 8);


    menu_component *drink_regular = new menu_items_elpolloloco(9, "Drink (Regular)", "Refreshing beverage including Coca-cola, Diet Coke, Cherry Coke, Sprite, Dr. Pepper, Strawberry Lemonade, Hi-C Fruit Punch, Fanta Orange, Fuze Raspberry Iced Tea, Passion Fruit Mango Iced Tea, Unsweetened Ice Tea, Barq's Root Beer.", 2.19);
    m_elpolloloco_customer_favorites->add(drink_regular);
    cout << "EXPECTED ITEM NUMBER: 9"
        << "\nRECEIVIED: " << drink_regular->get_item_number() << endl;
    EXPECT_EQ(drink_regular->get_item_number(), 9);   


    menu_component *drink_large = new menu_items_elpolloloco(10, "Drink (Large)", "Refreshing beverage including Coca-cola, Diet Coke, Cherry Coke, Sprite, Dr. Pepper, Strawberry Lemonade, Hi-C Fruit Punch, Fanta Orange, Fuze Raspberry Iced Tea, Passion Fruit Mango Iced Tea, Unsweetened Ice Tea, Barq's Root Beer.", 2.39);
    m_elpolloloco_customer_favorites->add(drink_large);
    cout << "EXPECTED ITEM NUMBER: 10"
        << "\nRECEIVIED: " << drink_large->get_item_number() << endl;
    EXPECT_EQ(drink_large->get_item_number(), 10);

    m_elpolloloco_customer_favorites->print();
}

#endif /* MENU_ELPOLLOLOCO_TESTS */
