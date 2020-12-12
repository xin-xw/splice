#ifndef FASTFOOD_TESTS
#define FASTFOOD_TESTS
#include "gtest/gtest.h"
#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/fastfood_category_burger.hpp"
#include "../header/fastfood_category_pizza.hpp"
#include "../header/fastfood_category_taco.hpp"

TEST(FastFood_Tests, SizeTest)
{
    vector<FastFood *> m_sizeTest;
    m_sizeTest.push_back(new Pizza("Domino's Pizza"));
    m_sizeTest.push_back(new Taco("Taco Bell"));
    m_sizeTest.push_back(new Burger("McDonald's"));
    ASSERT_EQ(m_sizeTest.size(), 3);
}

TEST(FastFood_Tests, StringTest)
{
    vector<FastFood *> m_stringTest;
    m_stringTest.push_back(new Pizza("Domino's Pizza"));
    m_stringTest.push_back(new Taco("Taco Bell"));
    m_stringTest.push_back(new Burger("McDonald's"));
    for (auto FastFood : m_stringTest)
    {
        EXPECT_EQ(m_stringTest.at(0)->get_fastfood_store_name(), "Domino's Pizza");
        EXPECT_EQ(m_stringTest.at(1)->get_fastfood_store_name(), "Taco Bell");
        EXPECT_EQ(m_stringTest.at(2)->get_fastfood_store_name(), "McDonald's");
    }
}

TEST(FastFood_Tests, Clone_McDonalds_FiveGuys)
{
    vector<FastFood *> m_Burgers;
    m_Burgers.push_back(new Burger("McDonald's")); //Clone this

    cout << "Cloning from -> " << m_Burgers.at(0)->get_fastfood_store_name() << endl;
    m_Burgers.at(0)->set_fastfood_store_price("$");
    
    auto FastFood = m_Burgers[0]->clone();
    FastFood->set_fastfood_store_name("Five Guys");
    FastFood->set_fastfood_store_price("$$");
    m_Burgers.push_back(FastFood);
    
    cout << "Cloned object is: " << m_Burgers.at(1)->get_fastfood_store_name() << endl;
    cout << endl;
    
    for(auto FastFood: m_Burgers)
    {
        FastFood->fastfood_display_store_info();
    }

    EXPECT_EQ(m_Burgers.at(0)->get_fastfood_store_name(), "McDonald's");
    EXPECT_EQ(m_Burgers.at(1)->get_fastfood_store_name(), "Five Guys");
}

#endif /* FASTFOOD_TESTS */
