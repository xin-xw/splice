#ifndef MENU_ITEMS_CHICKFILA
#define MENU_ITEMS_CHICKFILA
#include "../../menu_component.hpp"

class menu_items_chickfila : public menu_component
{
private:
    string item_name_chickfila;
    string item_description_chickfila;
    double item_price_chickfila;
    int item_number_chickfila;

public:
    menu_items_chickfila(int item_number_chickfila, string item_name_chickfila, string item_description_chickfila, double item_price_chickfila) : menu_component()
    {
        this->item_number_chickfila = item_number_chickfila;
        this->item_name_chickfila = item_name_chickfila;
        this->item_description_chickfila = item_description_chickfila;
        this->item_price_chickfila = item_price_chickfila;
    }

    string get_name()
    {
        return this->item_name_chickfila;
    }

    string get_description()
    {
        return this->item_description_chickfila;
    }

    double get_item_price()
    {
        return this->item_price_chickfila;
    }

    int get_item_number()
    {
        
        return this->item_number_chickfila;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_chickfila << endl
             << "Item Name: " << this->item_name_chickfila << endl
             << "Item Description: " << this->item_description_chickfila << endl
             << "Item Price: " << this->item_price_chickfila << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_CHICKFILA */
