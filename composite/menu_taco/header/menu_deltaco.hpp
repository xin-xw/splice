#ifndef MENU_DELTACO
#define MENU_DELTACO
#include "../../menu_component.hpp"
#include <iostream>

using namespace std;

class menu_deltaco : public menu_component
{
protected:
    string menu_name_deltaco;
    string menu_description_deltaco;
    vector<menu_component *> v_menu_deltaco;

public:
    menu_deltaco(string menu_name_deltaco, string menu_description_deltaco) : menu_component()
    {
        this->menu_name_deltaco = menu_name_deltaco;
        this->menu_description_deltaco = menu_description_deltaco;
    }

    string get_name()
    {
        return this->menu_name_deltaco;
    }

    string get_description()
    {
        return this->menu_description_deltaco;
    }

    void add(menu_component *menu_component)
    {
        v_menu_deltaco.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_deltaco << endl
             << "Menu Description: " << this->menu_description_deltaco << endl
             << endl;
        for (auto m_menu_deltaco : v_menu_deltaco)
        {
            m_menu_deltaco->print();
        }
    }
};

#endif /* MENU_DELTACO */
