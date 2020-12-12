#ifndef USER_CART
#define USER_CART
#include "../cart_component.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class user_cart : public cart_component
{
private:
    party_component *pc;
    vector<cart_component*> v_carts;
    string user_cart_name;

public:
    user_cart(party_component* pc) : cart_component()
    {
        this->pc = pc;
        this->user_cart_name = pc->get_name();
    }

    void add(cart_component *cc)
    {
        v_carts.push_back(cc);
    }

    void add_to_cart(menu_component *mc)
    {

    }

    string get_name()
    {
        return this->user_cart_name;
    }

    double cart_price()
    {
        return 1;
    }

    int get_size()
    {
        return v_carts.size();
    }

    void display()
    {
        cout << "Displaying " << this->user_cart_name << "'s Cart" << endl;
        cout << "---------------------------------" << endl;

        for(auto a_cart : v_carts)
        {
            // cout << v_carts.size() << endl;
            a_cart->display();
        }
    }
};

#endif /* USER_CART */
