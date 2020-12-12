#ifndef CART_ITEMS
#define CART_ITEMS
#include "../cart_component.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cart_items : public cart_component
{
private:
    vector<menu_component *> v_mc;
    // USING RIVERSIDE'S TAX RATES
    double tax_rate = 1.0875;

public:
    cart_items(menu_component *mc) : cart_component()
    {
        v_mc.push_back(mc);
    }

    string get_name()
    {
        return "Unable to retrieve name";
    }

    void add(cart_component *cc)
    {

    }

    void add_to_cart(menu_component *mc)
    {
        v_mc.push_back(mc);
    }

    double cart_price()
    {
        unsigned i = 0;
        double total_cart_price = 0.00;
        while(!v_mc.empty())
        {
            for (auto a_cart_price : v_mc)
            {
                // cout << "\nPrice of " << a_cart_price->get_name() << " is: $ " << a_cart_price->get_item_price() << endl; 
                total_cart_price += ((double)a_cart_price->get_item_price());
            }
            break;
            ++i;
        }
        return total_cart_price;
    }

    int get_size()
    {
        return v_mc.size();
    }

    void display()
    {
        unsigned i = 0;
        double total_cart_price = 0.00;
        while(!v_mc.empty())
        {
            // cout << v_mc.size() << endl;
            for(auto a_v_mc : v_mc)
            {
                a_v_mc->print();
            }
            break;
            ++i;
        }

        for (auto a_cart_display : v_mc)
        {
            cout << "Price of " << a_cart_display->get_name() << " is: $" << a_cart_display->get_item_price() << endl;
        }
        cout <<  '\n' << "Total Cart Price is: $" << cart_price();
        cout << '\n' << "Total Cart Price (Including Tax): $" << cart_price() * tax_rate << endl;
    }
};

#endif /* CART_ITEMS */
