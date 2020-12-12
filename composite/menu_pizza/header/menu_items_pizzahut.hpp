#ifndef MENU_ITEMS_PIZZAHUT
#define MENU_ITEMS_PIZZAHUT
#include "../../menu_component.hpp"

class menu_items_pizzahut : public menu_component
{
private:
    string item_name_pizzahut;
    string item_description_pizzahut;
    double item_price_pizzahut;
    int item_number_pizzahut;

public:
    menu_items_pizzahut(int item_number_pizzahut, string item_name_pizzahut, string item_description_pizzahut, double item_price_pizzahut) : menu_component()
    {
        this->item_number_pizzahut = item_number_pizzahut;
        this->item_name_pizzahut = item_name_pizzahut;
        this->item_description_pizzahut = item_description_pizzahut;
        this->item_price_pizzahut = item_price_pizzahut;
    }

    string get_name()
    {
        return this->item_name_pizzahut;
    }

    string get_description()
    {
        return this->item_description_pizzahut;
    }

    double get_item_price()
    {
        return this->item_price_pizzahut;
    }

    int get_item_number()
    {
        return this->item_number_pizzahut;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_pizzahut << endl
             << "Item Name: " << this->item_name_pizzahut << endl
             << "Item Description: " << this->item_description_pizzahut << endl
             << "Item Price: " << this->item_price_pizzahut << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_PIZZAHUT */
