#ifndef FASTFOOD_RESTAURANT
#define FASTFOOD_RESTAURANT
#include "../header/restaurant.hpp"
#include <iostream>
#include <string>

using namespace std;
class Restaurant;
class FastFood
{
protected:
    string fastfood_store_price;
    string fastfood_store_name;
    Restaurant *m_Restaurant;
public:
    FastFood(){};
    FastFood(const string &fastfood_store_name);
    
    const string &get_fastfood_store_name() const;
    void set_fastfood_store_name(const string &fastfood_store_name);
    
    const string &get_fastfood_restaurant_category() const;
    void set_fastfood_restaurant_category(const string &fastfood_store_category);

    const string &get_fastfood_store_price() const;
    void set_fastfood_store_price(const string &fastfood_store_price);

    virtual void fastfood_display_store_info() = 0;
    virtual FastFood* clone() = 0;
    
    /* Rule of three */
    virtual ~FastFood();
    FastFood(const FastFood &other);
    FastFood &operator=(const FastFood &other);
};

#endif /* FASTFOOD_RESTAURANT */
