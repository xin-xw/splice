#ifndef MENU_PIZZAHUT
#define MENU_PIZZAHUT
#include "../../menu_component.hpp"
#include <iostream>
#include <vector>

using namespace std;
class menu_pizzahut : public menu_component
{
protected:
    string menu_name_pizzahut;
    string menu_description_pizzahut;
    vector<menu_component*> v_menu_pizzahut;
public:
    menu_pizzahut(string menu_name_pizzahut, string menu_description_pizzahut) : menu_component()
    {
        this->menu_name_pizzahut = menu_name_pizzahut;
        this->menu_description_pizzahut = menu_description_pizzahut;
    }

    string get_name()
    {
        return this->menu_name_pizzahut;
    }

    string get_description()
    {
        return this->menu_description_pizzahut;
    }

    void add(menu_component *menu_component)
    {
        v_menu_pizzahut.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_pizzahut << endl
             << "Menu Description: " << this->menu_description_pizzahut << endl << endl;
        for(auto m_menu_pizzahut : v_menu_pizzahut)
        {
            m_menu_pizzahut->print();
        }
    }
};


#endif /* MENU_PIZZAHUT */
