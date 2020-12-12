#include "../header/fastfood_category_burger.hpp"

void Burger::fastfood_display_store_info()
{
    cout << "Restaurant Name: " << get_fastfood_store_name() << "\n"
         << "Restaurant Category: " << get_fastfood_restaurant_category() << "\n" 
         << "Restaurant Price (from $ to $$$): " << get_fastfood_store_price() << "\n"
         << endl;
}

FastFood *Burger::clone()
{
    // cout << "Cloning -> " << get_fastfood_store_name() << endl;
    // return shared_ptr<FastFood>(new Burger(*this));
    return new Burger(*this);
}