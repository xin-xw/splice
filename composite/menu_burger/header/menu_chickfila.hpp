#ifndef MENU_CHICKFILA
#define MENU_CHICKFILA
#include "../../menu_component.hpp"
#include <iostream>

using namespace std;

class menu_chickfila : public menu_component
{
protected:
    string menu_name_chickfila;
    string menu_description_chickfila;
    vector<menu_component *> v_menu_chickfila;

public:
    menu_chickfila(string menu_name_chickfila, string menu_description_chickfila) : menu_component()
    {
        this->menu_name_chickfila = menu_name_chickfila;
        this->menu_description_chickfila = menu_description_chickfila;
    }

    string get_name()
    {
        return this->menu_name_chickfila;
    }

    string get_description()
    {
        return this->menu_description_chickfila;
    }

    void add(menu_component *menu_component)
    {
        v_menu_chickfila.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_chickfila << endl
             << "Menu Description: " << this->menu_description_chickfila << endl
             << endl;
        for (auto m_menu_chickfila : v_menu_chickfila)
        {
            m_menu_chickfila->print();
        }
    }
};

#endif /* MENU_CHICKFILA */
