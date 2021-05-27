#include "../interface/fastfood_display.hpp"

void FastFood_Display::display_interface()
{
     cout << "Welcome to SPLICE. Please Select a Restaurant Category: \n";
     cout << "----------------------------------------------------------";
     cout << endl;
     cout << "Press 'Q' to Quit Anytime" << endl
          << endl;

     cout << "Please Select a Restaurant Category\n1. Burger Places\n2. Taco Places\n3. Pizza Places" << endl;

     bool check = true;
     while (check)
     {
          string base_user_option;
          cin >> base_user_option;

          if (base_user_option == "q" || base_user_option == "Q")
          {
               cout << "\nThank You for Using SPLICE" << endl;
               check = false;
               break;
          }
          else
          {
               if (base_user_option == "1")
               {
                    display_burger_places();
               }
               else if (base_user_option == "2")
               {
                    display_taco_places();
               }
               else if (base_user_option == "3")
               {
                    display_pizza_places();
               }
               else
               {
                    cout << "Invalid Input" << endl;
               }
          }
     }
}

void FastFood_Display::display_burger_places()
{
     cout << endl;
     cout << "Burger Places" << endl;
     cout << "------------------------" << endl;
     FastFood_Client BurgerPlaces;
     BurgerPlaces.fastfood_burger_run();
     cout << endl;

     cout << "Please Select a Burger Place: " << endl
          << endl;
     int choice;
     cin >> choice;
     switch (choice)
     {
     case 1:
          menu_mcdonalds_display m_1;
          m_1.display_mcdonalds_customer_favorites();
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