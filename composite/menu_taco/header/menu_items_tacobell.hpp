#ifndef MENU_ITEMS_TACOBELL
#define MENU_ITEMS_TACOBELL
#include "../../menu_component.hpp"

class menu_items_tacobell : public menu_component
{
private:
    string item_name_tacobell;
    string item_description_tacobell;
    double item_price_tacobell;
    int item_number_tacobell;

public:
    menu_items_tacobell(int item_number_tacobell, string item_name_tacobell, string item_description_tacobell, double item_price_tacobell) : menu_component()
    {
        this->item_number_tacobell = item_number_tacobell;
        this->item_name_tacobell = item_name_tacobell;
        this->item_description_tacobell = item_description_tacobell;
        this->item_price_tacobell = item_price_tacobell;
    }

    string get_name()
    {
        return this->item_name_tacobell;
    }

    string get_description()
    {
        return this->item_description_tacobell;
    }

    double get_item_price()
    {
        return this->item_price_tacobell;
    }

    int get_item_number()
    {

        return this->item_number_tacobell;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_tacobell << endl
             << "Item Name: " << this->item_name_tacobell << endl
             << "Item Description: " << this->item_description_tacobell << endl
             << "Item Price: " << this->item_price_tacobell << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_TACOBELL */
