#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_category_burger.hpp"
#include "../header/fastfood_category_pizza.hpp"
#include "../header/fastfood_category_taco.hpp"

FastFood *Create(const string &fastfood_store_name, const string &fastfood_store_price, string_view fastfood_type)
{
    if (fastfood_type == "Burger")
    {
        return new Burger(fastfood_store_name);
    }
    else if (fastfood_type == "Taco")
    {
        return new Taco(fastfood_store_name);
    }
    else if (fastfood_type == "Pizza")
    {
        return new Pizza(fastfood_store_name);
    }
    return nullptr;
}