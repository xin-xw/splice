#ifndef MENU_CHICKFILA_DISPLAY
#define MENU_CHICKFILA_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_burger/header/menu_items_chickfila.hpp"
#include "../composite/menu_burger/header/menu_chickfila.hpp"

class menu_chickfilas_display
{
public:
    void display_chickfilas_customer_favorites()
    {
        menu_component *chickfila_menu_customer_favorites = new menu_chickfila("Chick-Fil-A's Menu, Customer Favorites", "Following Options are the Most Popular Items at Chick-Fil-A");
        // REGULAR CHICKEN SANDWICH ENTREE
        menu_component *chicken_sandwhich = new menu_items_chickfila(1, "Chicken Sandwich", "A boneless breast of chicken seasoned to perfection, hand-breaded, pressure cooked in 100% refined peanut oil and served on a toasted, buttered bun with dill pickle chips. Gluten-free bun or multigrain bun also available at an additional cost.", 4.29);
        //SPICY CHICKEN SANDWICH ENTREE
        menu_component *spicy_chicken_sandwhich = new menu_items_chickfila(2, "Spicy Chicken Sandwich", "A boneless breast of chicken seasoned with a spicy blend of peppers, hand-breaded, pressure cooked in 100% refined peanut oil and served on a toasted, buttered bun with dill pickle chips. Gluten-free bun or multigrain bun also available at an additional cost.", 4.65);
        // CHICK FIL A NUGGETS (ORIGINAL) 4 PIECE
        menu_component *chickfila_nuggets_4_piece = new menu_items_chickfila(3, "Chick-fil-a Nuggets 4 Piece","Bite-sized pieces of boneless chicken breast, seasoned to perfection, freshly-breaded and pressure cooked in 100% refined peanut oil. Available with choice of dipping sauce.", 2.20);
        // CHICK FIL A NUGGETS (ORIGINAL) 8 PIECE
        menu_component *chickfila_nuggets_8_piece = new menu_items_chickfila(4, "Chick-fil-a Nuggets 8 Piece","Bite-sized pieces of boneless chicken breast, seasoned to perfection, freshly-breaded and pressure cooked in 100% refined peanut oil. Available with choice of dipping sauce.", 4.39);
        // CHICK FIL A NUGGETS (ORIGINAL) 12 PIECE
        menu_component *chickfila_nuggets_12_piece = new menu_items_chickfila(5, "Chick-fil-a Nuggets 12 Piece", "Bite-sized pieces of boneless chicken breast, seasoned to perfection, freshly-breaded and pressure cooked in 100% refined peanut oil. Available with choice of dipping sauce.", 6.29);
        //WAFFLE FRIES
        menu_component *waffle_fries_small = new menu_items_chickfila(6, "Waffle Potato Fries (Small)", "Waffle-cut potatoes cooked in canola oil until crispy outside and tender inside. Lightly sprinkled with Sea Salt.", 1.95);
        menu_component *waffle_fries_medium = new menu_items_chickfila(7, "Waffle Potato Fries (Medium)", "Waffle-cut potatoes cooked in canola oil until crispy outside and tender inside. Lightly sprinkled with Sea Salt.", 2.25);
        menu_component *waffle_fries_large = new menu_items_chickfila(8, "Waffle Potato Fries (Large)", "Waffle-cut potatoes cooked in canola oil until crispy outside and tender inside. Lightly sprinkled with Sea Salt.", 2.55);
        //MAC & CHEESE
        menu_component *mac_and_cheese_small = new menu_items_chickfila(9, "Mac and Cheese (Small)", "A classic macaroni and cheese recipe featuring a special blend of cheeses including Parmesan, Cheddar, and Romano. Baked in-restaurant to form a crispy top layer of baked cheese.", 2.89);
        menu_component *mac_and_cheese_medium = new menu_items_chickfila(10, "Mac and Cheese (Medium)", "A classic macaroni and cheese recipe featuring a special blend of cheeses including Parmesan, Cheddar, and Romano. Baked in-restaurant to form a crispy top layer of baked cheese.", 3.65);
        chickfila_menu_customer_favorites->add(chicken_sandwhich);

        chickfila_menu_customer_favorites->add(spicy_chicken_sandwhich);
        
        chickfila_menu_customer_favorites->add(chickfila_nuggets_4_piece);
        chickfila_menu_customer_favorites->add(chickfila_nuggets_8_piece);
        chickfila_menu_customer_favorites->add(chickfila_nuggets_12_piece);

        chickfila_menu_customer_favorites->add(waffle_fries_small);
        chickfila_menu_customer_favorites->add(waffle_fries_medium);
        chickfila_menu_customer_favorites->add(waffle_fries_large);
        
        chickfila_menu_customer_favorites->add(mac_and_cheese_small);
        chickfila_menu_customer_favorites->add(mac_and_cheese_medium);
        
        chickfila_menu_customer_favorites->print();
    }
};

#endif /* MENU_CHICKFILA_DISPLAY */
