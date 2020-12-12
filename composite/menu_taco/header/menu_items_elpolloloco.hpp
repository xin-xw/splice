#ifndef MENU_ITEMS_ELPOLLOLOCO
#define MENU_ITEMS_ELPOLLOLOCO
#include "../../menu_component.hpp"

class menu_items_elpolloloco : public menu_component
{
private:
    string item_name_elpolloloco;
    string item_description_elpolloloco;
    double item_price_elpolloloco;
    int item_number_elpolloloco;

public:
    menu_items_elpolloloco(int item_number_elpolloloco, string item_name_elpolloloco, string item_description_elpolloloco, double item_price_elpolloloco) : menu_component()
    {
        this->item_number_elpolloloco = item_number_elpolloloco;
        this->item_name_elpolloloco = item_name_elpolloloco;
        this->item_description_elpolloloco = item_description_elpolloloco;
        this->item_price_elpolloloco = item_price_elpolloloco;
    }

    string get_name()
    {
        return this->item_name_elpolloloco;
    }

    string get_description()
    {
        return this->item_description_elpolloloco;
    }

    double get_item_price()
    {
        return this->item_price_elpolloloco;
    }

    int get_item_number()
    {

        return this->item_number_elpolloloco;
    }

    void print()
    {
        cout << "Item Number: " << this->item_number_elpolloloco << endl
             << "Item Name: " << this->item_name_elpolloloco << endl
             << "Item Description: " << this->item_description_elpolloloco << endl
             << "Item Price: " << this->item_price_elpolloloco << endl
             << endl;
    }
};

#endif /* MENU_ITEMS_ELPOLLOLOCO */
