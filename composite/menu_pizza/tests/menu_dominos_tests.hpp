#ifndef MENU_DOMIMOS_TESTS
#define MENU_DOMIMOS_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_pizza/header/menu_items_dominos.hpp"
#include "../../composite/menu_pizza/header/menu_dominos.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, dominos_Customer_Favorites)
{
    menu_component *m_dominos_customer_favorites = new menu_dominos("Customer Favorites", "Following Options are the Most Popular Items at Dominos");

    EXPECT_EQ(m_dominos_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_dominos_customer_favorites->get_description(), "Following Options are the Most Popular Items at Dominos");
    menu_component *extravaganzza_pizza = new menu_items_dominos(1, "ExtravaganZZa (Large)", "The ExtravaganZZa includes pepperoni, ham, Italian sausage, beef, fresh onions, fresh green peppers, fresh mushrooms and black olives, all sandwiched between two layers of cheese made with 100% real mozzarella.", 19.99);
    m_dominos_customer_favorites->add(extravaganzza_pizza);
    cout << "EXPECTED ITEM NUMBER: 1"
        << "\nRECEIVIED: " << extravaganzza_pizza->get_item_number() << endl;
    EXPECT_EQ(extravaganzza_pizza->get_item_number(), 1);


    menu_component *meatzza_pizza = new menu_items_dominos(2, "MeatZZa (Large)", "The MeatZZa includes pepperoni, ham, Italian sausage and beef, all sandwiched between two layers of cheese made with 100% real mozzarella.", 19.99);
    m_dominos_customer_favorites->add(meatzza_pizza);
    cout << "EXPECTED ITEM NUMBER: 2"
        << "\nRECEIVIED: " << meatzza_pizza->get_item_number() << endl;
    EXPECT_EQ(meatzza_pizza->get_item_number(), 2);


    menu_component *pacific_veggie_pizza = new menu_items_dominos(3, "Pacific Veggie (Large)", "The Pacific Veggie includes roasted red peppers, fresh baby spinach, fresh onions, fresh mushrooms, tomatoes, black olives, feta, provolone, cheese made with 100% real mozzarella and sprinkled with a garlic herb seasoning.", 19.99);
    m_dominos_customer_favorites->add(pacific_veggie_pizza);
    cout << "EXPECTED ITEM NUMBER: 3"
        << "\nRECEIVIED: " << pacific_veggie_pizza->get_item_number() << endl;
    EXPECT_EQ(pacific_veggie_pizza->get_item_number(), 3);


    menu_component *honolulu_hawaiian_pizza = new menu_items_dominos(4, "Honolulu Hawaiian (Large)", "The Honolulu Hawaiian includes sliced ham, smoked bacon, pineapple, roasted red peppers, provolone and cheese made with 100% real mozzarella.", 19.99);
    m_dominos_customer_favorites->add(honolulu_hawaiian_pizza);
    cout << "EXPECTED ITEM NUMBER: 4"
        << "\nRECEIVIED: " << honolulu_hawaiian_pizza->get_item_number() << endl;
    EXPECT_EQ(honolulu_hawaiian_pizza->get_item_number(), 4);


    menu_component *deluxe_pizza = new menu_items_dominos(5, "Deluxe (Large)", "The Deluxe pizza includes pepperoni, Italian sausage, fresh green peppers, fresh mushrooms, fresh onions and cheese made with 100% real mozzarella.", 19.99);
    m_dominos_customer_favorites->add(deluxe_pizza);
    cout << "EXPECTED ITEM NUMBER: 5"
        << "\nRECEIVIED: " << deluxe_pizza->get_item_number() << endl;
    EXPECT_EQ(deluxe_pizza->get_item_number(), 5);


    menu_component *buffalo_chicken_pizza = new menu_items_dominos(6, "Buffalo Chicken (Large)", "The Buffalo Chicken includes grilled chicken breast, fresh onions, provolone, American cheese, cheddar, cheese made with 100% real mozzarella and drizzled with a hot buffalo sauce.", 19.99);
    m_dominos_customer_favorites->add(buffalo_chicken_pizza);
    cout << "EXPECTED ITEM NUMBER: 6"
        << "\nRECEIVIED: " << buffalo_chicken_pizza->get_item_number() << endl;
    EXPECT_EQ(buffalo_chicken_pizza->get_item_number(), 6);

    menu_component *ultimate_pepperoni_pizza = new menu_items_dominos(7, "Ultimate Pepperoni (Large)", "The Ultimate Pepperoni includes two layers of pepperoni sandwiched between provolone, Parmesan-Asiago and cheese made with 100% real mozzarella then sprinkled with oregano.", 19.99);
    m_dominos_customer_favorites->add(ultimate_pepperoni_pizza);
    cout << "EXPECTED ITEM NUMBER: 7"
        << "\nRECEIVIED: " << ultimate_pepperoni_pizza->get_item_number() << endl;
    EXPECT_EQ(ultimate_pepperoni_pizza->get_item_number(), 7);


    menu_component *memphis_bbq_chicken_pizza = new menu_items_dominos(8, "Memphis BBQ Chicken (Large)", "The Memphis BBQ Chicken includes grilled chicken breast, honey BBQ sauce, fresh onions, cheddar, provolone and cheese made with 100% real mozzarella.", 19.99);
    m_dominos_customer_favorites->add(memphis_bbq_chicken_pizza);
    cout << "EXPECTED ITEM NUMBER: 8"
        << "\nRECEIVIED: " << memphis_bbq_chicken_pizza->get_item_number() << endl;
    EXPECT_EQ(memphis_bbq_chicken_pizza->get_item_number(), 8);


    menu_component *spinach_and_feta_pizza = new menu_items_dominos(9, "Spinach and Feta (Large)", "The Spinach and feta pizza includes creamy Alfredo sauce, fresh spinach, fresh onions, feta, Parmesan-Asiago, provolone and cheese made with 100% real mozzarella.", 19.99);
    m_dominos_customer_favorites->add(spinach_and_feta_pizza);
    cout << "EXPECTED ITEM NUMBER: 9"
        << "\nRECEIVIED: " << spinach_and_feta_pizza->get_item_number() << endl;
    EXPECT_EQ(spinach_and_feta_pizza->get_item_number(), 9);   


    menu_component *cheeseburger_pizza = new menu_items_dominos(10, "Cheeseburger Pizza (Large)", "The Cheeseburger pizza includes American cheese, ketchup-mustard sauce, beef, fresh onions, and diced tomatoes, topped with shredded provolone and cheddar cheeses.", 19.99);
    m_dominos_customer_favorites->add(cheeseburger_pizza);
    cout << "EXPECTED ITEM NUMBER: 10"
        << "\nRECEIVIED: " << cheeseburger_pizza->get_item_number() << endl;
    EXPECT_EQ(cheeseburger_pizza->get_item_number(), 10);

    m_dominos_customer_favorites->print();
}

#endif /* MENU_DOMIMOS_TESTS */
