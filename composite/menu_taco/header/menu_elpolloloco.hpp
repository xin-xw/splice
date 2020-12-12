#ifndef MENU_ELPOLLOLOCO
#define MENU_ELPOLLOLOCO
#include "../../menu_component.hpp"
#include <iostream>

using namespace std;

class menu_elpolloloco : public menu_component
{
protected:
    string menu_name_elpolloloco;
    string menu_description_elpolloloco;
    vector<menu_component *> v_menu_elpolloloco;

public:
    menu_elpolloloco(string menu_name_elpolloloco, string menu_description_elpolloloco) : menu_component()
    {
        this->menu_name_elpolloloco = menu_name_elpolloloco;
        this->menu_description_elpolloloco = menu_description_elpolloloco;
    }

    string get_name()
    {
        return this->menu_name_elpolloloco;
    }

    string get_description()
    {
        return this->menu_description_elpolloloco;
    }

    void add(menu_component *menu_component)
    {
        v_menu_elpolloloco.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_elpolloloco << endl
             << "Menu Description: " << this->menu_description_elpolloloco << endl
             << endl;
        for (auto m_menu_elpolloloco : v_menu_elpolloloco)
        {
            m_menu_elpolloloco->print();
        }
    }
};

#endif /* MENU_TELPOLLOLOCO */
