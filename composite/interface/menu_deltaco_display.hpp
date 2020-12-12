#ifndef MENU_DELTACO_DISPLAY
#define MENU_DELTACO_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_taco/header/menu_items_deltaco.hpp"
#include "../composite/menu_taco/header/menu_deltaco.hpp"

class menu_deltacos_display
{
public:
    void display_deltacos_customer_favorites()
    {
        menu_component *deltacos_menu_customer_favorites = new menu_deltaco("Del Taco's Menu, Customer Favorites", "Following Options are the Most Popular Items at Del Taco");
        // THE DEL TACO
        menu_component *the_del_taco = new menu_items_deltaco(1, "The Del Taco", "The Del Taco is inspired by the original and loaded with more of everything you love, like more seasoned beef and more hand-grated cheddar cheese, plus crisp lettuce and chopped fresh tomatoes in a crunchy corn shell or warm flour tortilla.", 1.69);
        // BEYOND TACO
        menu_component *beyond_taco = new menu_items_deltaco(2, "Beyond Taco", "Layered with 100% plant-based Beyond Meat®, hand-grated cheddar cheese, crisp lettuce, and fresh diced tomatoes in a crunchy corn shell or soft flour tortilla.", 2.49);
        //AL CARBON TACO
        menu_component *al_carbon_taco = new menu_items_deltaco(3, "Al Carbon Taco", "Your choice of freshly grilled carne asada or freshly grilled marinated chicken, topped with diced onions, fresh cilantro, and drizzled with tangy green sauce, wrapped in two warm corn tortillas.", 1.00);
        // BEER BATTERED FISH TACO
        menu_component *beer_battered_fish_taco = new menu_items_deltaco(4, "Beer Battered Fish Taco", "Hand-cut Alaska Pollock fillet in a crispy beer batter, topped with crunchy cabbage, savory secret sauce, and handmade pico de gallo, wrapped in two warm corn tortillas and served with a fresh-cut lime wedge.", 2.89);
        //EPIC CALI BACON BURRITO
        menu_component *epic_cali_bacon_burrito = new menu_items_deltaco(5, "Epic Cali Bacon Burrito", "The Epic Cali Bacon Burrito combines all your favorite loaded baked potato flavors. We layer freshly grilled chicken, carne asada, or Beyond meat, Del Taco's famous Crinkle-Cut Fries, tangy chipotle sauce, crisp bacon, freshly grated cheddar cheese and cool sour cream.", 5.69);
        //EPIC ORIGINAL MEX BURRITO
        menu_component *epic_original_mex_burrito = new menu_items_deltaco(6, "Epic Original Mex Burrito", "This Epic Burrito is loaded with fresh grilled carne asada steak, chicken or Beyond Meat, slow-cooked beans made from scratch, fresca lime rice, fresh guacamole, and handmade pico de gallo salsa, all in a warm, oversized flour tortilla.", 5.49);
        //EPIC LOADED QUESO BURRITO
        menu_component *epic_loaded_queso_burrito = new menu_items_deltaco(7, "Epic Loaded Queso Burrito", "This Epic Burrito is loaded with fresh grilled chicken, carne asada steak or Beyond Meat, Del Taco’s famous Crinkle-Cut Fries, creamy Queso Blanco, hand-grated cheddar cheese, and handmade pico de gallo, wrapped in a warm oversized flour tortilla. A Cali burrito with epic queso flavor.", 5.29);
        //EPIC FRESH AVOCADO BURRITO
        menu_component *epic_fresh_avocado_burrito = new menu_items_deltaco(8, "Epic Fresh Avocado Burrito", "This Epic Burrito is loaded with fresh grilled carne asada steak, chicken or Beyond Meat, hand-sliced avocado, handmade pico de gallo, salsa casera, fresca lime rice, and seasoned black beans all in a warm, oversized flour tortilla. Made with fresh, premium ingredients for an Epic burrito experience.", 5.69);
        //QUESO LOADED NACHOS
        menu_component *queso_loaded_nachos = new menu_items_deltaco(9, "Queso Loaded Nachos", "Piled high and loaded with your choice of seasoned beef, fresh grilled chicken, or fresh grilled carne asada steak, house-made chips, slow-cooked beans made from scratch, and creamy Queso Blanco, all topped with sour cream, fresh diced tomatoes, and sliced jalapenos.", 3.99);
        //CHIPS AND QUESO
        menu_component *chips_and_queso = new menu_items_deltaco(10, "Chips & Queso", "Creamy Queso Blanco served with a large bag of fresh, house-made tortilla chips. Great for sharing!", 3.29);

        deltacos_menu_customer_favorites->add(the_del_taco);

        deltacos_menu_customer_favorites->add(beyond_taco);
        deltacos_menu_customer_favorites->add(al_carbon_taco);
        deltacos_menu_customer_favorites->add(beer_battered_fish_taco);
        deltacos_menu_customer_favorites->add(epic_cali_bacon_burrito);
        deltacos_menu_customer_favorites->add(epic_original_mex_burrito);

        deltacos_menu_customer_favorites->add(epic_loaded_queso_burrito);
        deltacos_menu_customer_favorites->add(epic_fresh_avocado_burrito);
        deltacos_menu_customer_favorites->add(queso_loaded_nachos);
        deltacos_menu_customer_favorites->add(chips_and_queso);

        deltacos_menu_customer_favorites->print();
    }
};

#endif /* MENU_DELTACO_DISPLAY */
