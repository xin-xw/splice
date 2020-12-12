#ifndef MENU_ITEMS_INNOUT
#define MENU_ITEMS_INNOUT
#include "../../menu_component.hpp"

class menu_items_innout : public menu_component
{
private:
    string item_name_innout;
    string item_description_innout;
    double item_price_innout;
    int item_number_innout;

public:
    menu_items_innout(int item_number_innout, string item_name_innout, string item_description_innout, double item_price_innout) : menu_component()
    {
        this->item_number_innout = item_number_innout;
        this->item_name_innout = item_name_innout;
        this->item_description_innout = item_description_innout;
        this->item_price_innout = item_price_innout;
    }

    string get_name()
    {
        return this->item_name_innout;
    }

    string get_description()
    {
        return this->item_description_innout;
    }

    double get_item_price()
    {
        return this->item_price_innout;
    }

    int get_item_number()
    {

        return this->item_number_innout;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_innout << endl
             << "Item Name: " << this->item_name_innout << endl
             << "Item Description: " << this->item_description_innout << endl
             << "Item Price: " << this->item_price_innout << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_INNOUT */
