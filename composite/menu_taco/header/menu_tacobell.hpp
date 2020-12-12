#ifndef MENU_TACOBELL
#define MENU_TACOBELL
#include "../../menu_component.hpp"
#include <iostream>

using namespace std;

class menu_tacobell : public menu_component
{
protected:
    string menu_name_tacobell;
    string menu_description_tacobell;
    vector<menu_component *> v_menu_tacobell;

public:
    menu_tacobell(string menu_name_tacobell, string menu_description_tacobell) : menu_component()
    {
        this->menu_name_tacobell = menu_name_tacobell;
        this->menu_description_tacobell = menu_description_tacobell;
    }

    string get_name()
    {
        return this->menu_name_tacobell;
    }

    string get_description()
    {
        return this->menu_description_tacobell;
    }

    void add(menu_component *menu_component)
    {
        v_menu_tacobell.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_tacobell << endl
             << "Menu Description: " << this->menu_description_tacobell << endl
             << endl;
        for (auto m_menu_tacobell : v_menu_tacobell)
        {
            m_menu_tacobell->print();
        }
    }
};

#endif /* MENU_TACOBELL */
