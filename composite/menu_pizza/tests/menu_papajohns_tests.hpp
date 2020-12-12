#ifndef MENU_PAPAJOHNS_TESTS
#define MENU_PAPAJOHNS_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_pizza/header/menu_items_papajohns.hpp"
#include "../../composite/menu_pizza/header/menu_papajohns.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, papajohns_Customer_Favorites)
{
    menu_component *m_papajohns_customer_favorites = new menu_papajohns("Customer Favorites", "Following Options are the Most Popular Items at Papa John's");

    EXPECT_EQ(m_papajohns_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_papajohns_customer_favorites->get_description(), "Following Options are the Most Popular Items at Papa John's");
    menu_component *papajohns_pepperoni_pizza = new menu_items_papajohns(1, "Pepperoni Pizza", "Your choice of crust covered with our signature pizza sauce, real cheese made from mozzarella, and pepperoni. With a pepperoni in almost every bite, it's one of our most popular pizzas.", 14.24);
    m_papajohns_customer_favorites->add(papajohns_pepperoni_pizza);
    cout << "EXPECTED ITEM NUMBER: 1"
        << "\nRECEIVIED: " << papajohns_pepperoni_pizza->get_item_number() << endl;
    EXPECT_EQ(papajohns_pepperoni_pizza->get_item_number(), 1);


    menu_component *papajohns_sausage_pizza = new menu_items_papajohns(2, "Sausage Pizza", "Our signature pizza sauce layered with sausage and real cheese made from mozzarella for a taste you’ll crave. Your choice of crust.", 14.24);
    m_papajohns_customer_favorites->add(papajohns_sausage_pizza);
    cout << "EXPECTED ITEM NUMBER: 2"
        << "\nRECEIVIED: " << papajohns_sausage_pizza->get_item_number() << endl;
    EXPECT_EQ(papajohns_sausage_pizza->get_item_number(), 2);


    menu_component *papajohns_cheese_pizza = new menu_items_papajohns(3, "Cheese Pizza", "Simple, yet simply delicious. Real cheese made from mozzarella on top of our signature pizza sauce with your choice of crust, then baked to a golden brown. It has just what you want, and nothing you don’t.", 11.99);
    m_papajohns_customer_favorites->add(papajohns_cheese_pizza);
    cout << "EXPECTED ITEM NUMBER: 3"
        << "\nRECEIVIED: " << papajohns_cheese_pizza->get_item_number() << endl;
    EXPECT_EQ(papajohns_cheese_pizza->get_item_number(), 3);


    menu_component *papajohns_the_works = new menu_items_papajohns(4, "The Works", "It’s everything you want on a pizza – and then some. A heaping helping of pepperoni, julienne-cut Canadian bacon, spicy Italian sausage, fresh-cut onions, crisp green peppers, mushrooms, ripe black olives, and real cheese made from mozzarella. When you’re hungry for a hearty pizza, the Works always works.", 17.99);
    m_papajohns_customer_favorites->add(papajohns_the_works);
    cout << "EXPECTED ITEM NUMBER: 4"
        << "\nRECEIVIED: " << papajohns_the_works->get_item_number() << endl;
    EXPECT_EQ(papajohns_the_works->get_item_number(), 4);


    menu_component *papajohns_the_meats = new menu_items_papajohns(5, "The Meats", "A masterpiece of hearty, high-quality meats including pepperoni, savory sausage, real beef, hickory-smoked bacon, and julienne-cut Canadian bacon, all topped with real cheese made from mozzarella.", 17.99);
        //BUFFALO CHICKEN
    m_papajohns_customer_favorites->add(papajohns_the_meats);
    cout << "EXPECTED ITEM NUMBER: 5"
        << "\nRECEIVIED: " << papajohns_the_meats->get_item_number() << endl;
    EXPECT_EQ(papajohns_the_meats->get_item_number(), 5);


    menu_component *papajohns_meatball_pepperoni = new menu_items_papajohns(6, "Meatball Pepperoni", "Savory meatballs and pepperoni make for a tasty combination, especially when we add a three-cheese blend, and real cheese made from mozzarella on our original crust, then sprinkle it all with classic Italian seasoning for an extra dash of flavor.", 17.99);
    m_papajohns_customer_favorites->add(papajohns_meatball_pepperoni);
    cout << "EXPECTED ITEM NUMBER: 6"
        << "\nRECEIVIED: " << papajohns_meatball_pepperoni->get_item_number() << endl;
    EXPECT_EQ(papajohns_meatball_pepperoni->get_item_number(), 6);

    menu_component *papajohns_super_hawaiian = new menu_items_papajohns(7, "Super Hawaiian", "Get a taste of the tropics. This super delicious pizza is loaded with sweet, juicy pineapple tidbits, julienne-cut Canadian bacon, hickory-smoked bacon, a three-cheese blend, and real cheese made from mozzarella on our signature sauce and original fresh dough.", 17.99);
    m_papajohns_customer_favorites->add(papajohns_super_hawaiian);
    cout << "EXPECTED ITEM NUMBER: 7"
        << "\nRECEIVIED: " << papajohns_super_hawaiian->get_item_number() << endl;
    EXPECT_EQ(papajohns_super_hawaiian->get_item_number(), 7);


    menu_component *papajohns_extra_cheesy_alfredo = new menu_items_papajohns(8, "Extra Cheesy Alfredo", "Calling all cheese lovers! Your choice of crust covered in rich, creamy two-cheese Alfredo sauce topped with a blend of provolone, Asiago, Fontina, and real cheese made from mozzarella.", 17.99);
    m_papajohns_customer_favorites->add(papajohns_extra_cheesy_alfredo);
    cout << "EXPECTED ITEM NUMBER: 8"
        << "\nRECEIVIED: " << papajohns_extra_cheesy_alfredo->get_item_number() << endl;
    EXPECT_EQ(papajohns_extra_cheesy_alfredo->get_item_number(), 8);


    menu_component *papajohns_garden_fresh = new menu_items_papajohns(9, "Garden Fresh", "All your favorite veggies together on a delightfully delicious pizza. Loaded with crisp green peppers, fresh-cut onions, mushrooms, ripe black olives, vine-ripened Roma tomatoes, and real cheese made from mozzarella.", 17.99);
    m_papajohns_customer_favorites->add(papajohns_garden_fresh);
    cout << "EXPECTED ITEM NUMBER: 9"
        << "\nRECEIVIED: " << papajohns_garden_fresh->get_item_number() << endl;
    EXPECT_EQ(papajohns_garden_fresh->get_item_number(), 9);   


    menu_component *papajohns_tuscan_six_cheese = new menu_items_papajohns(10, "Tuscan Six Cheese", "Experience the authentic taste of Italy! Layered with signature pizza sauce and an authentic blend of Parmesan, Romano, Asiago, Fontina, provolone, and real cheese made from mozzarella. Baked hot and fresh then finished with classic Italian seasoning.", 17.99);
    m_papajohns_customer_favorites->add(papajohns_tuscan_six_cheese);
    cout << "EXPECTED ITEM NUMBER: 10"
        << "\nRECEIVIED: " << papajohns_tuscan_six_cheese->get_item_number() << endl;
    EXPECT_EQ(papajohns_tuscan_six_cheese->get_item_number(), 10);

    m_papajohns_customer_favorites->print();
}

#endif /* MENU_PAPAJOHNS_TESTS */
