#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/restaurant.hpp"

void FastFood_Client::fastfood_burger_run()
{
    int burgerCount{1};

    m_Burger.push_back(Create("McDonald's", "$", "Burger"));
    m_Burger.at(0)->set_fastfood_store_price("$");
    
    auto ChickFilA = m_Burger[0]->clone();
    ChickFilA->set_fastfood_store_name("Chick-Fil-A");
    ChickFilA->set_fastfood_store_price("$$");
    m_Burger.push_back(ChickFilA);

    auto InNOut = m_Burger[0]->clone();
    InNOut->set_fastfood_store_name("In-N-Out");
    InNOut->set_fastfood_store_price("$");
    m_Burger.push_back(InNOut);

    int listBurger = 1;
    while(burgerCount != 0)
    {
        for (auto FastFood : m_Burger)
        {
            cout << listBurger++ << ". ";
            FastFood->fastfood_display_store_info();
        }
    --burgerCount;
    }
}

void FastFood_Client::fastfood_pizza_run()
{
    int pizzaCount{1};

    m_Pizza.push_back(Create("Domino's Pizza", "$", "Pizza"));
    m_Pizza.at(0)->set_fastfood_store_price("$");

    auto PizzaHut = m_Pizza[0]->clone();
    PizzaHut->set_fastfood_store_name("Pizza Hut");
    PizzaHut->set_fastfood_store_price("$");
    m_Pizza.push_back(PizzaHut);

    auto PapaJohns = m_Pizza[0]->clone();
    PapaJohns->set_fastfood_store_name("Papa John's Pizza");
    PapaJohns->set_fastfood_store_price("$");
    m_Pizza.push_back(PapaJohns);

    int listPizza = 1;
    while (pizzaCount != 0)
    {
        for (auto FastFood : m_Pizza)
        {
            cout << listPizza++ << ". ";
            FastFood->fastfood_display_store_info();
        }
        --pizzaCount;
    }
}

void FastFood_Client::fastfood_taco_run()
{
    int tacoCount{1};

    m_Taco.push_back(Create("Taco Bell", "$", "Taco"));
    m_Taco.at(0)->set_fastfood_store_price("$");

    auto DelTaco = m_Taco[0]->clone();
    DelTaco->set_fastfood_store_name("Del Taco");
    DelTaco->set_fastfood_store_price("$");
    m_Taco.push_back(DelTaco);

    auto ElPolloLoco = m_Taco[0]->clone();
    ElPolloLoco->set_fastfood_store_name("El Pollo Loco");
    ElPolloLoco->set_fastfood_store_price("$");
    m_Taco.push_back(ElPolloLoco);

    int listTaco = 1;
    while (tacoCount != 0)
    {
        for (auto FastFood : m_Taco)
        {
            cout << listTaco++ << ". ";
            FastFood->fastfood_display_store_info();
        }
        --tacoCount;
    }
}

FastFood_Client::~FastFood_Client()
{
    for (auto FastFood : m_Burger)
    {
        delete FastFood;
    }

    for (auto FastFood : m_Taco)
    {
        delete FastFood;
    }

    for (auto FastFood : m_Pizza)
    {
        delete FastFood;
    }
}