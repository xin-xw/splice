#ifndef MENU_PAPAJOHNS_DISPLAY
#define MENU_PAPAJOHNS_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_pizza/header/menu_items_papajohns.hpp"
#include "../composite/menu_pizza/header/menu_papajohns.hpp"

class menu_papajohns_display
{
public:
    void display_papajohns_customer_favorites()
    {
        menu_component *papajohns_menu_customer_favorites = new menu_papajohns("Papa John's Menu, Customer Favorites", "Following Options are the Most Popular Items at Papa John's");
        //PAPA JOHNS PEPPERONI PIZZA
        menu_component *papajohns_pepperoni_pizza = new menu_items_papajohns(1, "Pepperoni Pizza", "Your choice of crust covered with our signature pizza sauce, real cheese made from mozzarella, and pepperoni. With a pepperoni in almost every bite, it's one of our most popular pizzas.", 14.24);
        //PAPA JOHNS SAUSAGE PIZZA
        menu_component *papajohns_sausage_pizza = new menu_items_papajohns(2, "Sausage Pizza", "Our signature pizza sauce layered with sausage and real cheese made from mozzarella for a taste you’ll crave. Your choice of crust.",14.24);
        //PAPA JOHNS CHEESE PIZZA
        menu_component *papajohns_cheese_pizza = new menu_items_papajohns(3, "Cheese Pizza", "Simple, yet simply delicious. Real cheese made from mozzarella on top of our signature pizza sauce with your choice of crust, then baked to a golden brown. It has just what you want, and nothing you don’t.", 11.99);
        //PAPA JOHNS THE WORKS
        menu_component *papajohns_the_works = new menu_items_papajohns(4, "The Works", "It’s everything you want on a pizza – and then some. A heaping helping of pepperoni, julienne-cut Canadian bacon, spicy Italian sausage, fresh-cut onions, crisp green peppers, mushrooms, ripe black olives, and real cheese made from mozzarella. When you’re hungry for a hearty pizza, the Works always works.", 17.99);
        //PAPA JOHNS THE MEATS
        menu_component *papajohns_the_meats = new menu_items_papajohns(5, "The Meats", "A masterpiece of hearty, high-quality meats including pepperoni, savory sausage, real beef, hickory-smoked bacon, and julienne-cut Canadian bacon, all topped with real cheese made from mozzarella.", 17.99);
        //PAPA JOHNS MEATBALL PEPPERONI
        menu_component *papajohns_meatball_pepperoni = new menu_items_papajohns(6, "Meatball Pepperoni", "Savory meatballs and pepperoni make for a tasty combination, especially when we add a three-cheese blend, and real cheese made from mozzarella on our original crust, then sprinkle it all with classic Italian seasoning for an extra dash of flavor.", 17.99);
        //PAPA JOHNS SUPER HAWAIIAN
        menu_component *papajohns_super_hawaiian = new menu_items_papajohns(7, "Super Hawaiian", "Get a taste of the tropics. This super delicious pizza is loaded with sweet, juicy pineapple tidbits, julienne-cut Canadian bacon, hickory-smoked bacon, a three-cheese blend, and real cheese made from mozzarella on our signature sauce and original fresh dough.", 17.99);
        //PAPA JOHNS EXTRA CHEESY ALFREDO
        menu_component *papajohns_extra_cheesy_alfredo = new menu_items_papajohns(8, "Extra Cheesy Alfredo", "Calling all cheese lovers! Your choice of crust covered in rich, creamy two-cheese Alfredo sauce topped with a blend of provolone, Asiago, Fontina, and real cheese made from mozzarella.", 17.99);
        //PAPA JOHNS GARDEN FRESH
        menu_component *papajohns_garden_fresh = new menu_items_papajohns(9, "Garden Fresh", "All your favorite veggies together on a delightfully delicious pizza. Loaded with crisp green peppers, fresh-cut onions, mushrooms, ripe black olives, vine-ripened Roma tomatoes, and real cheese made from mozzarella.", 17.99);
        //PAPA JOHNS TUSCAN SIX CHEESE
        menu_component *papajohns_tuscan_six_cheese = new menu_items_papajohns(10, "Tuscan Six Cheese", "Experience the authentic taste of Italy! Layered with signature pizza sauce and an authentic blend of Parmesan, Romano, Asiago, Fontina, provolone, and real cheese made from mozzarella. Baked hot and fresh then finished with classic Italian seasoning.", 17.99);

        papajohns_menu_customer_favorites->add(papajohns_pepperoni_pizza);
        papajohns_menu_customer_favorites->add(papajohns_sausage_pizza);
        papajohns_menu_customer_favorites->add(papajohns_cheese_pizza);
        papajohns_menu_customer_favorites->add(papajohns_the_works);
        papajohns_menu_customer_favorites->add(papajohns_the_meats);
        papajohns_menu_customer_favorites->add(papajohns_meatball_pepperoni);
        papajohns_menu_customer_favorites->add(papajohns_super_hawaiian);
        papajohns_menu_customer_favorites->add(papajohns_extra_cheesy_alfredo);
        papajohns_menu_customer_favorites->add(papajohns_garden_fresh);
        papajohns_menu_customer_favorites->add(papajohns_tuscan_six_cheese);
        papajohns_menu_customer_favorites->print();
    }
};

#endif /* MENU_PAPAJOHNS_DISPLAY */
