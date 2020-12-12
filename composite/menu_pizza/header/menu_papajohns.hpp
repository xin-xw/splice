#ifndef MENU_PAPAJOHNS
#define MENU_PAPAJOHNS
#include "../../menu_component.hpp"
#include <iostream>
#include <vector>

using namespace std;
class menu_papajohns : public menu_component
{
protected:
    string menu_name_papajohns;
    string menu_description_papajohns;
    vector<menu_component*> v_menu_papajohns;
public:
    menu_papajohns(string menu_name_papajohns, string menu_description_papajohns) : menu_component()
    {
        this->menu_name_papajohns = menu_name_papajohns;
        this->menu_description_papajohns = menu_description_papajohns;
    }

    string get_name()
    {
        return this->menu_name_papajohns;
    }

    string get_description()
    {
        return this->menu_description_papajohns;
    }

    void add(menu_component *menu_component)
    {
        v_menu_papajohns.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_papajohns << endl
             << "Menu Description: " << this->menu_description_papajohns << endl << endl;
        for(auto m_menu_papajohns : v_menu_papajohns)
        {
            m_menu_papajohns->print();
        }
    }
};


#endif /* MENU_PAPAJOHNS */
