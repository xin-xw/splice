#ifndef MENU_DOMINOS
#define MENU_DOMINOS
#include "../../menu_component.hpp"
#include <iostream>
#include <vector>

using namespace std;
class menu_dominos : public menu_component
{
protected:
    string menu_name_dominos;
    string menu_description_dominos;
    vector<menu_component*> v_menu_dominos;
public:
    menu_dominos(string menu_name_dominos, string menu_description_dominos) : menu_component()
    {
        this->menu_name_dominos = menu_name_dominos;
        this->menu_description_dominos = menu_description_dominos;
    }

    string get_name()
    {
        return this->menu_name_dominos;
    }

    string get_description()
    {
        return this->menu_description_dominos;
    }

    void add(menu_component *menu_component)
    {
        v_menu_dominos.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_dominos << endl
             << "Menu Description: " << this->menu_description_dominos << endl << endl;
        for(auto m_menu_dominos : v_menu_dominos)
        {
            m_menu_dominos->print();
        }
    }
};


#endif /* MENU_DOMINOS */
