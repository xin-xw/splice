#ifndef MENU_INNOUT
#define MENU_INNOUT
#include "../../menu_component.hpp"
#include <iostream>

using namespace std;

class menu_innout : public menu_component
{
protected:
    string menu_name_innout;
    string menu_description_innout;
    vector<menu_component *> v_menu_innout;

public:
    menu_innout(string menu_name_innout, string menu_description_innout) : menu_component()
    {
        this->menu_name_innout = menu_name_innout;
        this->menu_description_innout = menu_description_innout;
    }

    string get_name()
    {
        return this->menu_name_innout;
    }

    string get_description()
    {
        return this->menu_description_innout;
    }

    void add(menu_component *menu_component)
    {
        v_menu_innout.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_innout << endl
             << "Menu Description: " << this->menu_description_innout << endl
             << endl;
        for (auto m_menu_innout : v_menu_innout)
        {
            m_menu_innout->print();
        }
    }
};

#endif /* MENU_INNOUT */
