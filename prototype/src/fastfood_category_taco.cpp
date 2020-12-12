#include "../header/fastfood_category_taco.hpp"

void Taco::fastfood_display_store_info()
{
    cout << "Restaurant Name: " << get_fastfood_store_name() << "\n"
         << "Restaurant Category: " << get_fastfood_restaurant_category() << "\n"
         << "Restaurant Price (from $ to $$$): " << get_fastfood_store_price() << "\n"
         << endl;
}

FastFood *Taco::clone()
{
    // cout << "Cloning -> " << get_fastfood_store_name() << endl;
    // return shared_ptr<FastFood>(new Taco(*this));
    return new Taco(*this);
}