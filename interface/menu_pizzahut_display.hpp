#ifndef MENU_PIZZAHUT_DISPLAY
#define MENU_PIZZAHUT_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_pizza/header/menu_items_pizzahut.hpp"
#include "../composite/menu_pizza/header/menu_pizzahut.hpp"

class menu_pizzahut_display
{
public:
    void display_pizzahut_customer_favorites()
    {
        menu_component *pizzahuts_menu_customer_favorites = new menu_pizzahut("Pizza Hut's Menu, Customer Favorites", "Following Options are the Most Popular Items at Pizza Hut");
        //CHEESE PIZZA
        menu_component *cheese_pizza = new menu_items_pizzahut(1, "Cheese Pizza", "Your favorite cheese pizza, with your choice of crust covered in classic marinara sauce and topped with gooey mozzarella cheese. It's anything but 'plain'.",13.99);
        //PEPPERONI PIZZA
        menu_component *pepperoni_pizza = new menu_items_pizzahut(2, "Pepperoni Pizza", "You literally can't go wrong with pepperoni and mozzarella cheese. Classic for a reason.", 15.99);
        //MEAT LOVERS PIZZA
        menu_component *meat_lovers_pizza = new menu_items_pizzahut(3, "Meat Lover's Pizza", "Packed with pepperoni, Italian sausage, ham, bacon, seasoned pork and beef, this pizza is NOT messing around.", 18.99);
        //SUPREME PIZZA
        menu_component *supreme_pizza = new menu_items_pizzahut(4, "Supreme Pizza", "This loaded pizza is the perfect choice for family dinner or a lunch with your crew. Includes pepperoni, seasoned pork, beef, mushrooms, green bell peppers and red onions.", 18.99);
        //VEGGIE LOVERS PIZZA
        menu_component *veggie_lovers_pizza = new menu_items_pizzahut(5, "Veggie Lover's Pizza", "Pizza is officially a vegetable. This garden delight has all the fresh veggie toppings you love: mushrooms, red onions, green bell peppers, Roma tomatoes and black olives.", 18.99);
        //ULTIMATE CHEESE LOVERS PIIZA
        menu_component *ultimate_cheese_lovers_pizza = new menu_items_pizzahut(6, "Ultimate Cheese Lover's Pizza", "With 50% more mozzarella cheese, Garlic Parmesan sauce and a toasted Parmesan crust, it's the cheesiest of our cheese pizzas.", 18.99);
        //HAWAIIAN CHICKEN PIZZA
        menu_component *hawaiian_chicken_pizza = new menu_items_pizzahut(7, "Hawaiian Chicken Pizza", "Give your taste buds a tropical vacation with this amped up Hawaiian pizza. It's got tasty chicken, ham, pineapple AND green peppers.", 18.99);
        //BACKYARD BBQ PIZZA
        menu_component *backyard_bbq_pizza = new menu_items_pizzahut(8, "Backyard BBQ Pizza", "This BBQ pizza comes topped with grilled chicken, bacon and red onion. Who's the grillmaster now?", 18.99);
        //SUPER SUPREME PIZZA
        menu_component *super_supreme_pizza = new menu_items_pizzahut(9, "Super Supreme Pizza", "Pepperoni, ham, beef, seasoned pork, Italian sausage, red onions, mushrooms, green bell peppers and black olives. It's super!", 19.99);
        //PEPPERONI LOVERS PIZZA
        menu_component *pepperoni_lovers_pizza = new menu_items_pizzahut(10, "Pepperoni Lover's Pizza", "Ever wished your pepperoni pizza had more pepperoni? Of course you did. This oven-hot pizza has 50% more pepperoni than our average pizza pie.", 18.99);

        pizzahuts_menu_customer_favorites->add(cheese_pizza);
        pizzahuts_menu_customer_favorites->add(pepperoni_pizza);
        pizzahuts_menu_customer_favorites->add(meat_lovers_pizza);
        pizzahuts_menu_customer_favorites->add(supreme_pizza);
        pizzahuts_menu_customer_favorites->add(veggie_lovers_pizza);
        pizzahuts_menu_customer_favorites->add(ultimate_cheese_lovers_pizza);
        pizzahuts_menu_customer_favorites->add(hawaiian_chicken_pizza);
        pizzahuts_menu_customer_favorites->add(backyard_bbq_pizza);
        pizzahuts_menu_customer_favorites->add(super_supreme_pizza);
        pizzahuts_menu_customer_favorites->add(pepperoni_lovers_pizza);

        pizzahuts_menu_customer_favorites->print();
    }
};

#endif /* MENU_PIZZAHUT_DISPLAY */
