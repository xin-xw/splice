#ifndef MENU_TACOBELL_DISPLAY
#define MENU_TACOBELL_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_taco/header/menu_items_tacobell.hpp"
#include "../composite/menu_taco/header/menu_tacobell.hpp"

class menu_tacobell_display
{
public:
    void display_tacobells_customer_favorites()
    {
        menu_component *tacobells_menu_customer_favorites = new menu_tacobell("Taco Bell's Menu, Customer Favorites", "Following Options are the Most Popular Items at Taco Bell");
        // SOFT TACO
        menu_component *soft_taco = new menu_items_tacobell(1, "Soft Taco", "Soft Taco has a warm, flour tortilla with seasoned beef, lettuce, and real cheddar cheese", 1.29);
        // CRUNCHY TACO
        menu_component *crunchy_taco = new menu_items_tacobell(2, "Crunchy Taco", "Crunchy Taco has a crunchy corn body and a wicked haymaker with seasoned beef, lettuce, and real cheddar cheese", 1.29);
        //NACHO CHEESE DORITOS LOCOS TACO
        menu_component *nacho_cheese_dorito_locos_taco = new menu_items_tacobell(3, "Nacho Cheese Dorito Locos Taco", "A crunchy taco shell made from Nacho Cheese Doritos® is filled with seasoned beef, crispy lettuce, and shredded cheddar cheese.", 1.89);
        // CRUNCHY TACO SUPREME
        menu_component *crunchy_taco_supreme = new menu_items_tacobell(4, "Crunchy Taco Supreme", "Crunchy Taco has a crunchy corn body and a wicked haymaker with seasoned beef, lettuce, cheddar cheese, reduced fat sour cream, and diced tomatoes", 1.79);
        //BEAN BURRITO
        menu_component *bean_burrito = new menu_items_tacobell(5, "Bean Burrito", "Bean Burrito stuffed full of warm refried beans, real cheddar cheese, diced onions, and red sauce still carries on the spirit of old adventuring pioneers today", 1.29);
        //QUESARITO
        menu_component *quesarito = new menu_items_tacobell(6, "Quesarito", "The Quesarito is a quesadilla that is treated like a burrito, full of seasoned beef, creamy chipotle sauce, reduced fat sour cream, nacho cheese sauce, and seasoned rice", 3.19);
        //CRUNCH WRAP SUPREME
        menu_component *crunchwrap_supreme = new menu_items_tacobell(7, "Crunchwrap Supreme", "A flour tortilla layered with seasoned beef, warm nacho cheese sauce, a crispy tostada shell, crispy lettuce, ripe tomatoes and topped with cool reduced fat sour cream all wrapped in our signature Crunchwrap fold and grilled to go.", 3.69);
        //NACHOS BELLGRANDE
        menu_component *nachos_bellgrande = new menu_items_tacobell(8, "Nachos Bellgrande", "A portion of crispy tortilla chips topped with warm nacho cheese sauce, refried beans, seasoned beef, ripe tomatoes and cool reduced fat sour cream.", 3.69);
        //BAJA BLAST FREEZE
        menu_component *baja_blast_freeze = new menu_items_tacobell(9, "Baja Blast Freeze", "A sweet, freeze made with Mountain Dew Baja Blast", 2.69);
        //DRAGON FRUIT FREEZE
        menu_component *dragon_fruit_freeze = new menu_items_tacobell(10, "Dragon Fruit Freeze", "A sweet, tropical freeze that's almost too pretty to drink", 2.69);

        tacobells_menu_customer_favorites->add(soft_taco);
        tacobells_menu_customer_favorites->add(crunchy_taco);
        tacobells_menu_customer_favorites->add(nacho_cheese_dorito_locos_taco);
        tacobells_menu_customer_favorites->add(crunchy_taco_supreme);
        tacobells_menu_customer_favorites->add(bean_burrito);
        tacobells_menu_customer_favorites->add(quesarito);
        tacobells_menu_customer_favorites->add(crunchwrap_supreme);
        tacobells_menu_customer_favorites->add(nachos_bellgrande);
        tacobells_menu_customer_favorites->add(baja_blast_freeze);
        tacobells_menu_customer_favorites->add(dragon_fruit_freeze);

        tacobells_menu_customer_favorites->print();
    }
};

#endif /* MENU_TACOBELL_DISPLAY */
