#ifndef MENU_ELPOLLOLOCO_DISPLAY
#define MENU_ELPOLLOLOCO_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_taco/header/menu_items_elpolloloco.hpp"
#include "../composite/menu_taco/header/menu_elpolloloco.hpp"

class menu_elpollolocos_display
{
public:
    void display_elpollolocos_customer_favorites()
    {
        menu_component *elpollolocos_menu_customer_favorites = new menu_elpolloloco("El Pollo Loco's Menu, Customer Favorites", "Following Options are the Most Popular Items at El Pollo Loco");
        // CHICKEN AVOCADO TACO
        menu_component *chicken_avocado_taco = new menu_items_elpolloloco(1, "Chicken Avocado Taco", "Fire-grilled chicken, avocado, shredded lettuce, queso fresco, and pico on a handcrafted tortilla and finished with creamy cilantro dressing.", 2.99);
        // CHICKENLESS POLLO TACO
        menu_component *chickenless_pollo_taco = new menu_items_elpolloloco(2, "Chickenless Pollo Taco", "Tender shreds of plant-based protein cooked in adobo-- a slow simmered sauce of fire roasted peppers, onions and tomatoes then topped with queso fresco, shredded lettuce, and avocado on a handcrafted tortilla.", 2.99);
        //CALIFORNIA QUESO BURRITO
        menu_component *california_queso_burrito = new menu_items_elpolloloco(3, "Chicken Queso Burrito", "The California Queso Burrito has tender pieces of our famous fire-grilled chicken, signature Tapatio fries, fresh handmade guacamole, pinto beans, queso blanco and house-made pico de gallo. All this goodness comes wrapped in a warm flour tortilla.", 6.99);
        // CHICKEN TINGA BURRITO
        menu_component *chicken_tinga_burrito = new menu_items_elpolloloco(4, "Chicken Tinga Burrito", "The Chicken Tinga Burrito has savory, lightly smoky chicken tinga, seasoned rice, pinto beans, fresh sliced avocado, and is topped with queso fresco and house-made pico de gallo – all wrapped in a warm flour tortilla.", 7.19);
        //ORIGINAL POLLO BOWL
        menu_component *original_pollo_bowl = new menu_items_elpolloloco(5, "Original Pollo Bowl", "Our chicken breast is fire-grilled to perfection then chopped and added to slow-simmered pinto beans, rice, diced onions, fresh cilantro and pico de gallo salsa.", 4.99);
        //DOUBLE CHICKEN BOWL
        menu_component *double_chicken_bowl = new menu_items_elpolloloco(6, "Double Chicken Bowl", "Double up on a double portion of delicious citrus-marinated chopped chicken breast on top of authentic pinto beans, rice, cabbage and garnished with sour cream, shredded jack cheese, avocado slices and pico de gallo salsa.", 7.79);
        //CHIPS AND GUAC
        menu_component *chips_and_guacamole_small = new menu_items_elpolloloco(7, "Small Chips & Guacamole", "Made fresh daily, our new guacamole is loaded with chunks of avocado and paired with our authentic tortilla chips.", 2.49);
        menu_component *chips_and_guacamole_regular = new menu_items_elpolloloco(8, "Regular Chip & Guacamole", "What's better than our white corn tortilla chips, hand salted and made fresh daily? Our tortilla chips with freshly, hand-made guacamole, of course.", 3.99);
        //DRINKS
        menu_component *drink_regular = new menu_items_elpolloloco(9, "Drink (Regular)", "Refreshing beverage including Coca-cola, Diet Coke, Cherry Coke, Sprite, Dr. Pepper, Strawberry Lemonade, Hi-C Fruit Punch, Fanta Orange, Fuze Raspberry Iced Tea, Passion Fruit Mango Iced Tea, Unsweetened Ice Tea, Barq's Root Beer.", 2.19);
        menu_component *drink_large = new menu_items_elpolloloco(10, "Drink (Large)", "Refreshing beverage including Coca-cola, Diet Coke, Cherry Coke, Sprite, Dr. Pepper, Strawberry Lemonade, Hi-C Fruit Punch, Fanta Orange, Fuze Raspberry Iced Tea, Passion Fruit Mango Iced Tea, Unsweetened Ice Tea, Barq's Root Beer.", 2.39);

        elpollolocos_menu_customer_favorites->add(chicken_avocado_taco);

        elpollolocos_menu_customer_favorites->add(chickenless_pollo_taco);
        elpollolocos_menu_customer_favorites->add(california_queso_burrito);
        elpollolocos_menu_customer_favorites->add(chicken_tinga_burrito);
        elpollolocos_menu_customer_favorites->add(original_pollo_bowl);
        elpollolocos_menu_customer_favorites->add(double_chicken_bowl);

        elpollolocos_menu_customer_favorites->add(chips_and_guacamole_small);
        elpollolocos_menu_customer_favorites->add(chips_and_guacamole_regular);
        elpollolocos_menu_customer_favorites->add(drink_regular);
        elpollolocos_menu_customer_favorites->add(drink_large);

        elpollolocos_menu_customer_favorites->print();
    }
};

#endif /* MENU_ELPOLLOLOCO_DISPLAY */
