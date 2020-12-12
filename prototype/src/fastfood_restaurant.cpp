#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

FastFood::FastFood(const string &fastfood_store_name)
{
    this->fastfood_store_name = fastfood_store_name;
    m_Restaurant = new Restaurant("Fast Food");
}

const string &FastFood::get_fastfood_store_name() const
{
    return this->fastfood_store_name;
}

void FastFood::set_fastfood_store_name(const string &fastfood_store_name)
{
    this->fastfood_store_name = fastfood_store_name;
}

FastFood::~FastFood()
{
    delete m_Restaurant;
}

FastFood &FastFood::operator=(const FastFood &other)
{
    if (this != &other)
    {
        fastfood_store_name = other.fastfood_store_name;
        m_Restaurant->set_restaurant_category(other.get_fastfood_restaurant_category());
    }
    return *this;
}

FastFood::FastFood(const FastFood &other) : fastfood_store_name{other.fastfood_store_name}
{
    m_Restaurant = new Restaurant{};
    m_Restaurant->set_restaurant_category(other.get_fastfood_restaurant_category());
}

void FastFood::set_fastfood_restaurant_category(const string &fastfood_store_category)
{
    m_Restaurant->set_restaurant_category(fastfood_store_name);
}

const string &FastFood::get_fastfood_restaurant_category() const
{
    return m_Restaurant->get_restaurant_category();
}

void FastFood::set_fastfood_store_price(const string &fastfood_store_price)
{
    this->fastfood_store_price = fastfood_store_price;
}

const string &FastFood::get_fastfood_store_price() const
{
    return this->fastfood_store_price;
}