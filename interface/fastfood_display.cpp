#include "../interface/fastfood_display.hpp"

void FastFood_Display::display_burger_places()
{
     cout << "\nBurger Places\n===============" << endl;
     FastFood_Client i_burger_places;
     i_burger_places.fastfood_burger_run();
     cout << endl;

     cout << "Choose a selection from the above restaurants!" << endl;

     int choice = 0;
     cin >> choice;
     int burger_choice = 0;
     if (choice == 1)
     {
          menu_mcdonalds_display i_mcdonalds;
          i_mcdonalds.display_mcdonalds_customer_favorites();
          burger_choice = 1;
     }
     else if (choice == 2)
     {
          menu_chickfilas_display i_chickfila;
          i_chickfila.display_chickfilas_customer_favorites();
          burger_choice = 2;
     }
     else if (choice == 3)
     {
          menu_innouts_display i_innout;
          i_innout.display_innouts_customer_favorites();
          burger_choice = 3;
     }
     else
     {
          cout << "Invalid Input!" << endl;
     }
}

void FastFood_Display::display_taco_places()
{
     cout << endl;
     cout << "Taco Places" << endl;
     cout << "------------------------" << endl;
     FastFood_Client TacoPlaces;
     TacoPlaces.fastfood_taco_run();
     cout << endl;
}

void FastFood_Display::display_pizza_places()
{
     cout << endl;
     cout << "Pizza Places" << endl;
     cout << "------------------------" << endl;
     FastFood_Client PizzaPlaces;
     PizzaPlaces.fastfood_pizza_run();
     cout << endl;
}