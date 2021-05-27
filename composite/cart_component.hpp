#ifndef CART
#define CART
#include "menu_component.hpp"
#include "party_component.hpp"

class menu_component;
class party_component;

class cart_component
{
private:
public:
    virtual void add(cart_component *cc) = 0;
    virtual void add_to_cart(menu_component *mc) = 0;
    virtual void display() = 0;
    virtual string get_name() = 0;
    virtual int get_size() = 0;
    virtual double cart_price() = 0;
};

#endif /* CART */
