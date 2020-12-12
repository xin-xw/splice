#ifndef MENU_MCDONALDS_DISPLAY
#define MENU_MCDONALDS_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_burger/header/menu_items_mcdonalds.hpp"
#include "../composite/menu_burger/header/menu_mcdonalds.hpp"

class menu_mcdonalds_display
{
public:
    void display_mcdonalds_customer_favorites()
    {
        menu_component *mcdonalds_menu_customer_favorites = new menu_mcdonalds("McDonald's Menu, Customer Favorites", "Following Options are the Most Popular Items at McDonald's");
        // BIG MAC
        menu_component *big_mac = new menu_items_mcdonalds(1, "Big Mac", "Mouthwatering perfection starts with two 100% pure beef patties and Big Mac sauce sandwiched between a sesame seed bun. It’s topped off with pickles, crisp shredded lettuce, finely chopped onion and American cheese.", 3.99);
        // MCNUGGETS 4 PIECE
        menu_component *mcnuggets_4_piece = new menu_items_mcdonalds(2, "McNuggets 4 Piece", "Our tender, juicy Chicken McNuggets® are made with 100% white meat chicken and no artificial colors, flavors or preservatives.", 1.99);
        menu_component *mcnuggets_10_piece = new menu_items_mcdonalds(3, "McNuggets 10 Piece", "Our tender, juicy Chicken McNuggets® are made with 100% white meat chicken and no artificial colors, flavors or preservatives.", 4.49);
        // ICED COFFEE
        menu_component *iced_coffee_small = new menu_items_mcdonalds(4, "Iced Coffee (Small)", "McCafe Iced Coffee is refreshingly cool and made with 100% Arabica beans, cream and your choice of flavored coffee syrup – caramel, hazelnut, French vanilla and sugar-free French vanilla.", 1.39);
        menu_component *iced_coffee_medium = new menu_items_mcdonalds(5, "Iced Coffee (Medium)", "McCafe Iced Coffee is refreshingly cool and made with 100% Arabica beans, cream and your choice of flavored coffee syrup – caramel, hazelnut, French vanilla and sugar - free French vanilla.", 1.79);
        menu_component *iced_coffee_large = new menu_items_mcdonalds(6, "Iced Coffee (Large)", "McCafe Iced Coffee is refreshingly cool and made with 100% Arabica beans, cream and your choice of flavored coffee syrup – caramel, hazelnut, French vanilla and sugar - free French vanilla.", 1.99);
        //FRIES
        menu_component *fries_small = new menu_items_mcdonalds(7, "Fries Small", "Our World Famous Fries® are made with premium potatoes such as the Russet Burbank and the Shepody. With 0g of trans fat per labeled serving, these epic fries are crispy and golden on the outside and fluffy on the inside.", 1.39);
        menu_component *fries_medium = new menu_items_mcdonalds(8, "Fries Medium", "Our World Famous Fries® are made with premium potatoes such as the Russet Burbank and the Shepody. With 0g of trans fat per labeled serving, these epic fries are crispy and golden on the outside and fluffy on the inside.", 1.79);
        menu_component *fries_large = new menu_items_mcdonalds(9, "Fries Large", "Our World Famous Fries® are made with premium potatoes such as the Russet Burbank and the Shepody. With 0g of trans fat per labeled serving, these epic fries are crispy and golden on the outside and fluffy on the inside.", 1.89);

        mcdonalds_menu_customer_favorites->add(big_mac);

        mcdonalds_menu_customer_favorites->add(mcnuggets_4_piece);
        mcdonalds_menu_customer_favorites->add(mcnuggets_10_piece);

        mcdonalds_menu_customer_favorites->add(iced_coffee_small);
        mcdonalds_menu_customer_favorites->add(iced_coffee_medium);
        mcdonalds_menu_customer_favorites->add(iced_coffee_large);

        mcdonalds_menu_customer_favorites->add(fries_small);
        mcdonalds_menu_customer_favorites->add(fries_medium);
        mcdonalds_menu_customer_favorites->add(fries_large);

        mcdonalds_menu_customer_favorites->print();
    }
};

#endif /* MENU_MCDONALDS_DISPLAY */
