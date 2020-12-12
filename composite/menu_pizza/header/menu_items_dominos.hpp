#ifndef MENU_ITEMS_DOMINOS
#define MENU_ITEMS_DOMINOS
#include "../../menu_component.hpp"

class menu_items_dominos : public menu_component
{
private:
    string item_name_dominos;
    string item_description_dominos;
    double item_price_dominos;
    int item_number_dominos;

public:
    menu_items_dominos(int item_number_dominos, string item_name_dominos, string item_description_dominos, double item_price_dominos) : menu_component()
    {
        this->item_number_dominos = item_number_dominos;
        this->item_name_dominos = item_name_dominos;
        this->item_description_dominos = item_description_dominos;
        this->item_price_dominos = item_price_dominos;
    }

    string get_name()
    {
        return this->item_name_dominos;
    }

    string get_description()
    {
        return this->item_description_dominos;
    }

    double get_item_price()
    {
        return this->item_price_dominos;
    }

    int get_item_number()
    {
        return this->item_number_dominos;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_dominos << endl
             << "Item Name: " << this->item_name_dominos << endl
             << "Item Description: " << this->item_description_dominos << endl
             << "Item Price: " << this->item_price_dominos << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_DOMINOS */
