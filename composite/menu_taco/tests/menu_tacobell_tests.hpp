#ifndef MENU_TACOBELL_TESTS
#define MENU_TACOBELL_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_taco/header/menu_items_tacobell.hpp"
#include "../../composite/menu_taco/header/menu_tacobell.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, TacoBell_CustomerFavorites)
{
    menu_component *m_tacobell_customer_favorites = new menu_tacobell("Customer Favorites", "Following Options are the Most Popular Items at Taco Bell");

     EXPECT_EQ(m_tacobell_customer_favorites->get_name(), "Customer Favorites");
     EXPECT_EQ(m_tacobell_customer_favorites->get_description(), "Following Options are the Most Popular Items at Taco Bell");

    menu_component *soft_taco = new menu_items_tacobell(1, "Soft Taco", "Soft Taco has a warm, flour tortilla with seasoned beef, lettuce, and real cheddar cheese", 1.29);
     m_tacobell_customer_favorites->add(soft_taco);
     cout << "EXPECTED ITEM NUMBER: 1"
     << "\nRECEIVIED: " << soft_taco->get_item_number() << endl;
     EXPECT_EQ(soft_taco->get_item_number(), 1);


    menu_component *crunchy_taco = new menu_items_tacobell(2, "Crunchy Taco", "Crunchy Taco has a crunchy corn body and a wicked haymaker with seasoned beef, lettuce, and real cheddar cheese", 1.29);
     m_tacobell_customer_favorites->add(crunchy_taco);
     cout << "EXPECTED ITEM NUMBER: 2"
          << "\nRECEIVIED: " << crunchy_taco->get_item_number() << endl;
     EXPECT_EQ(crunchy_taco->get_item_number(), 2);


    menu_component *nacho_cheese_dorito_locos_taco = new menu_items_tacobell(3, "Nacho Cheese Dorito Locos Taco", "A crunchy taco shell made from Nacho Cheese Doritos® is filled with seasoned beef, crispy lettuce, and shredded cheddar cheese.", 1.89);
     m_tacobell_customer_favorites->add(nacho_cheese_dorito_locos_taco);
     cout << "EXPECTED ITEM NUMBER: 3"
     << "\nRECEIVIED: " << nacho_cheese_dorito_locos_taco->get_item_number() << endl;
     EXPECT_EQ(nacho_cheese_dorito_locos_taco->get_item_number(), 3);


    menu_component *crunchy_taco_supreme = new menu_items_tacobell(4, "Crunchy Taco Supreme", "Crunchy Taco has a crunchy corn body and a wicked haymaker with seasoned beef, lettuce, cheddar cheese, reduced fat sour cream, and diced tomatoes", 1.79);
     m_tacobell_customer_favorites->add(crunchy_taco_supreme);
     cout << "EXPECTED ITEM NUMBER: 4"
     << "\nRECEIVIED: " << crunchy_taco_supreme->get_item_number() << endl;
     EXPECT_EQ(crunchy_taco_supreme->get_item_number(), 4);


    menu_component *bean_burrito = new menu_items_tacobell(5, "Bean Burrito", "Bean Burrito stuffed full of warm refried beans, real cheddar cheese, diced onions, and red sauce still carries on the spirit of old adventuring pioneers today", 1.29);
     m_tacobell_customer_favorites->add(bean_burrito);
     cout << "EXPECTED ITEM NUMBER: 5"
     << "\nRECEIVIED: " << bean_burrito->get_item_number() << endl;
     EXPECT_EQ(bean_burrito->get_item_number(), 5);


    menu_component *quesarito = new menu_items_tacobell(6, "Quesarito", "The Quesarito is a quesadilla that is treated like a burrito, full of seasoned beef, creamy chipotle sauce, reduced fat sour cream, nacho cheese sauce, and seasoned rice", 3.19);
     m_tacobell_customer_favorites->add(quesarito);
     cout << "EXPECTED ITEM NUMBER: 6"
     << "\nRECEIVIED: " << quesarito->get_item_number() << endl;
     EXPECT_EQ(quesarito->get_item_number(), 6);


    menu_component *crunchwrap_supreme = new menu_items_tacobell(7, "Crunchwrap Supreme", "A flour tortilla layered with seasoned beef, warm nacho cheese sauce, a crispy tostada shell, crispy lettuce, ripe tomatoes and topped with cool reduced fat sour cream all wrapped in our signature Crunchwrap fold and grilled to go.", 3.69);
     m_tacobell_customer_favorites->add(crunchwrap_supreme);
     cout << "EXPECTED ITEM NUMBER: 7"
     << "\nRECEIVIED: " << crunchwrap_supreme->get_item_number() << endl;
     EXPECT_EQ(crunchwrap_supreme->get_item_number(), 7);


    menu_component *nachos_bellgrande = new menu_items_tacobell(8, "Nachos Bellgrande", "A portion of crispy tortilla chips topped with warm nacho cheese sauce, refried beans, seasoned beef, ripe tomatoes and cool reduced fat sour cream.", 3.69);
     m_tacobell_customer_favorites->add(nachos_bellgrande);
     cout << "EXPECTED ITEM NUMBER: 8"
     << "\nRECEIVIED: " << nachos_bellgrande->get_item_number() << endl;
     EXPECT_EQ(nachos_bellgrande->get_item_number(), 8);


    menu_component *baja_blast_freeze = new menu_items_tacobell(9, "Baja Blast Freeze", "A sweet, freeze made with Mountain Dew Baja Blast", 2.69);
     m_tacobell_customer_favorites->add(baja_blast_freeze);
     cout << "EXPECTED ITEM NUMBER: 9"
     << "\nRECEIVIED: " << baja_blast_freeze->get_item_number() << endl;
     EXPECT_EQ(baja_blast_freeze->get_item_number(), 9);


    menu_component *dragon_fruit_freeze = new menu_items_tacobell(10, "Dragon Fruit Freeze", "A sweet, tropical freeze that's almost too pretty to drink", 2.69);
     m_tacobell_customer_favorites->add(dragon_fruit_freeze);
     cout << "EXPECTED ITEM NUMBER: 10"
     << "\nRECEIVIED: " << dragon_fruit_freeze->get_item_number() << endl;
     EXPECT_EQ(dragon_fruit_freeze->get_item_number(), 10);


     m_tacobell_customer_favorites->print();
}

#endif /* MENU_TACOBELL_TESTS */
