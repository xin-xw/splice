#ifndef MENU_ITEMS_PAPAJOHNS
#define MENU_ITEMS_PAPAJOHNS
#include "../../menu_component.hpp"

class menu_items_papajohns : public menu_component
{
private:
    string item_name_papajohns;
    string item_description_papajohns;
    double item_price_papajohns;
    int item_number_papajohns;

public:
    menu_items_papajohns(int item_number_papajohns, string item_name_papajohns, string item_description_papajohns, double item_price_papajohns) : menu_component()
    {
        this->item_number_papajohns = item_number_papajohns;
        this->item_name_papajohns = item_name_papajohns;
        this->item_description_papajohns = item_description_papajohns;
        this->item_price_papajohns = item_price_papajohns;
    }

    string get_name()
    {
        return this->item_name_papajohns;
    }

    string get_description()
    {
        return this->item_description_papajohns;
    }

    double get_item_price()
    {
        return this->item_price_papajohns;
    }

    int get_item_number()
    {
        return this->item_number_papajohns;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_papajohns << endl
             << "Item Name: " << this->item_name_papajohns << endl
             << "Item Description: " << this->item_description_papajohns << endl
             << "Item Price: " << this->item_price_papajohns << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_PAPAJOHNS */
