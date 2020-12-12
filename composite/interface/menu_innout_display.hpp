#ifndef MENU_INNOUT_DISPLAY
#define MENU_INNOUT_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_burger/header/menu_items_innout.hpp"
#include "../composite/menu_burger/header/menu_innout.hpp"

class menu_innouts_display
{
public:
    void display_innouts_customer_favorites()
    {
        menu_component *innouts_menu_customer_favorites = new menu_innout("In-N-Out's Menu, Customer Favorites", "Following Options are the Most Popular Items at In-N-Out");
        // DOUBLE DOUBLE
        menu_component *double_double_burger = new menu_items_innout(1, "Double Double", "Two 100% pure beef patties, hand lettuce, tomato, spread, two slices of american cheese, with or without onions, stacked high on a freshly baked bun.", 3.45);
        // CHEESEBURGER
        menu_component *cheeseburger = new menu_items_innout(2, "Cheeseburger", "100% Pure beef patty, lettuce, tomato, spread, one slice of american cheese, with or without onions, on a freshly baked bun.", 2.40);
        //HAMBURGER
        menu_component *hamburger = new menu_items_innout(3, "Hamburger", "100% Pure patty, lettuce, tomato, spread, with or without onions, on a freshly baked bun.", 2.10);
        // FRENCH FRIES
        menu_component *french_fries = new menu_items_innout(4, "French Fries", "Fresh cut potatoes prepared in 100% vegetable oil.", 1.60);
        //SHAKES
        menu_component *shake_strawberry = new menu_items_innout(5, "Strawberry Shake", "Strawberry Shake made with 100% real ice cream.", 2.15);
        menu_component *shake_chocolate = new menu_items_innout(6, "Chocolate Shake", "Chocolate Shake made with 100% real ice cream.", 2.15);
        menu_component *shake_vanilla = new menu_items_innout(7, "Vanilla Shake", "Vanilla Shake made with 100% real ice cream.", 2.15);
        //COFFEE
        menu_component *coffee = new menu_items_innout(8, "Coffee", "Hot Brewed Coffee", 1.35);
        //MILK
        menu_component *milk = new menu_items_innout(9, "Milk", "Refreshing Milk", 0.99);
        //SOFT DRINK MEDIUM
        menu_component *soft_drink_medium = new menu_items_innout(10, "Soft Drink (Medium)", "Refreshing selctions include Coca-Cola, Diet Coke, 7UP, Dr. Pepper, Root Beer, Lemonade, Minute Maid Light Lemonade, and Iced Tea ", 1.65);

        innouts_menu_customer_favorites->add(double_double_burger);
        innouts_menu_customer_favorites->add(cheeseburger);
        innouts_menu_customer_favorites->add(hamburger);
        
        innouts_menu_customer_favorites->add(french_fries);

        innouts_menu_customer_favorites->add(shake_strawberry);
        innouts_menu_customer_favorites->add(shake_chocolate);
        innouts_menu_customer_favorites->add(shake_vanilla);
        
        innouts_menu_customer_favorites->add(coffee);
        innouts_menu_customer_favorites->add(milk);
        innouts_menu_customer_favorites->add(soft_drink_medium);

        innouts_menu_customer_favorites->print();
    }
};

#endif /* MENU_INNOUT_DISPLAY */
