#ifndef FASTFOOD_CLIENT
#define FASTFOOD_CLIENT
#include "../header/fastfood_category_burger.hpp"
#include "../header/fastfood_category_pizza.hpp"
#include "../header/fastfood_category_taco.hpp"
#include <iostream>
#include <string>
#include <vector>

/* Factory that manages prorotype instances and produces their clones. */
using namespace std;
class FastFood;
class FastFood_Client
{
    vector<FastFood*> m_Burger;
    vector<FastFood*> m_Taco;
    vector<FastFood*> m_Pizza;
public:
    // void fastfood_test_run();
    void fastfood_burger_run();
    void fastfood_taco_run();
    void fastfood_pizza_run();
    ~FastFood_Client();
};

#endif /* FASTFOOD_CLIENT */
