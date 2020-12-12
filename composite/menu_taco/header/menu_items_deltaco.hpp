#ifndef MENU_ITEMS_DELTACO
#define MENU_ITEMS_DELTACO
#include "../../menu_component.hpp"

class menu_items_deltaco : public menu_component
{
private:
    string item_name_deltaco;
    string item_description_deltaco;
    double item_price_deltaco;
    int item_number_deltaco;

public:
    menu_items_deltaco(int item_number_deltaco, string item_name_deltaco, string item_description_deltaco, double item_price_deltaco) : menu_component()
    {
        this->item_number_deltaco = item_number_deltaco;
        this->item_name_deltaco = item_name_deltaco;
        this->item_description_deltaco = item_description_deltaco;
        this->item_price_deltaco = item_price_deltaco;
    }

    string get_name()
    {
        return this->item_name_deltaco;
    }

    string get_description()
    {
        return this->item_description_deltaco;
    }

    double get_item_price()
    {
        return this->item_price_deltaco;
    }

    int get_item_number()
    {

        return this->item_number_deltaco;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_deltaco << endl
             << "Item Name: " << this->item_name_deltaco << endl
             << "Item Description: " << this->item_description_deltaco << endl
             << "Item Price: " << this->item_price_deltaco << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_DELTACO */
