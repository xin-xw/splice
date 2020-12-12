#ifndef MENU_MCDONALDS
#define MENU_MCDONALDS
#include "../../menu_component.hpp"
#include <iostream>
#include <vector>

using namespace std;
class menu_mcdonalds : public menu_component
{
protected:
    string menu_name_mcdonalds;
    string menu_description_mcdonalds;
    vector<menu_component*> v_menu_mcdonalds;
public:
    menu_mcdonalds(string menu_name_mcdonalds, string menu_description_mcdonalds) : menu_component()
    {
        this->menu_name_mcdonalds = menu_name_mcdonalds;
        this->menu_description_mcdonalds = menu_description_mcdonalds;
    }

    string get_name()
    {
        return this->menu_name_mcdonalds;
    }

    string get_description()
    {
        return this->menu_description_mcdonalds;
    }

    void add(menu_component *menu_component)
    {
        v_menu_mcdonalds.push_back(menu_component);
    }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_mcdonalds << endl
             << "Menu Description: " << this->menu_description_mcdonalds << endl << endl;
        for(auto m_menu_mcdonalds : v_menu_mcdonalds)
        {
            m_menu_mcdonalds->print();
        }
    }
};


#endif /* MENU_MCDONALDS */
