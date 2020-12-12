#include "../header/restaurant.hpp"

Restaurant::Restaurant(const string &restaurant_category)
{
    this->restaurant_category = restaurant_category;
}

const string &Restaurant::get_restaurant_category() const
{
    return this->restaurant_category;
}

void Restaurant::set_restaurant_category(const string &restaurant_category)
{
    this->restaurant_category = restaurant_category;
}
