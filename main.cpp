#include "include.hpp"

using namespace std;

string display_burger_places()
{
    cout << "\nBurger Places\n===============" << endl;
    FastFood_Client i_burger_places;
    i_burger_places.fastfood_burger_run();
    cout << endl;

    cout << "Choose a selection from the above restaurants!" << endl;

    int choice = 0;
    cin >> choice;
    int burger_choice = 0;
    string restaurant_name = "";
    if (choice == 1)
    {
        menu_mcdonalds_display i_mcdonalds;
        i_mcdonalds.display_mcdonalds_customer_favorites();
        restaurant_name = "McDonalds";
        return restaurant_name;
    }
    else if (choice == 2)
    {
        menu_chickfilas_display i_chickfila;
        i_chickfila.display_chickfilas_customer_favorites();
        restaurant_name = "Chick Fil A";
        return restaurant_name;
    }
    else if (choice == 3)
    {
        menu_innouts_display i_innout;
        i_innout.display_innouts_customer_favorites();
        restaurant_name = "In N Out";
        return restaurant_name;
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }
}

string display_taco_places()
{
    cout << "\nTaco Places\n===============" << endl;
    FastFood_Client i_taco_places;
    i_taco_places.fastfood_taco_run();
    cout << endl;
    
    cout << "Choose a selection from the above restaurants!" << endl;
    int choice = 0;
    cin >> choice;
    int taco_choice = 0;
    string restaurant_name = "";
    
    if (choice == 1)
    {
        menu_tacobell_display i_tacobell;
        i_tacobell.display_tacobells_customer_favorites();
        restaurant_name = "Taco Bell";
        return restaurant_name;

    }
    else if (choice == 2)
    {
        menu_deltacos_display i_deltaco;
        i_deltaco.display_deltacos_customer_favorites();
        restaurant_name = "Del Taco";
        return restaurant_name;
    }
    else if (choice == 3)
    {
        menu_elpollolocos_display i_elpolloloco;
        i_elpolloloco.display_elpollolocos_customer_favorites();
        restaurant_name = "El Pollo Loco";
        return restaurant_name;
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }
}

string display_pizza_places()
{
    cout << "\nPizza Places\n===============" << endl;
    FastFood_Client PizzaPlaces;
    PizzaPlaces.fastfood_pizza_run();
    cout << endl;

    cout << "Choose a selection from the above restaurants!" << endl;
    int choice = 0;
    cin >> choice;
    int pizza_choice = 0;
    string restaurant_name = "";
    
    if (choice == 1)
    {
        menu_dominos_display i_dominos;
        i_dominos.display_dominos_customer_favorites();
        restaurant_name = "Dominos";
        return restaurant_name;
    }
    else if (choice == 2)
    {
        menu_pizzahut_display i_pizzahut;
        i_pizzahut.display_pizzahut_customer_favorites();
        restaurant_name = "Pizza Hut";
        return restaurant_name;
    }
    else if (choice == 3)
    {
        menu_papajohns_display i_papajohns;
        i_papajohns.display_papajohns_customer_favorites();
        restaurant_name = "Papa John's";
        return restaurant_name;
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }
}

int main()
{
    bool condition = true;
    string user_option = "";
    int user_fastfood_option = 0;
    int user_fastfood_option_choice = 0;
    string rest_type = "";
    string user1 = "";
    string user2 = "";
    string user3 = "";
    string i_party_name = "";
    int i_party_size = 0;

    cout << "Hello! Welcome to SPLICE. Remember, you can press 'q' to quit!!" << endl;
    cout << "Give your party a name (without spaces!).  Press 'Enter' when you are done!" << endl;
    cin >> i_party_name;
    if (i_party_name == "q" || i_party_name == "Q")
    {
        return 0;
    }

    cout << "How many people are in your party? We can only support up to 3 people." << endl;
    cin >> i_party_size;

    if (i_party_size <= 0 || i_party_size > 3)
    {
        cout << "Invalid input! Did you make sure your party is less than the size of 3?" << endl;
        return 0;
    } 
    else if(i_party_size == 1)
    {
        cout << "Give User #1 a name!" << endl;
        cin >> user1;
    }
    else if(i_party_size == 2)
    {
        cout << "Give User #1 a name!" << endl;
        cin >> user1;
        cout << "Give User 2 a name!" << endl;
        cin >> user2;
    } 
    else if(i_party_size == 3)
    {
        cout << "Give User 1 a name!" << endl;
        cin >> user1;
        cout << "Give User 2 a name!" << endl;
        cin >> user2;
        cout << "Give User 3 a name!" << endl;
        cin >> user3;
    }

    party_component *i_party = new party(i_party_name, i_party_size);

    cout << "\nDid your party eat at...\n1. Burger Places\n2. Taco Places\n3. Pizza Places" << endl;
    cin >> user_fastfood_option;

    while (condition)
    {
        if (user_option == "q" || user_option == "Q")
        {
            cout << "Thank you for using SPLICE." << endl;
            condition = false;
            break;
        }
        else
        {
            if (user_fastfood_option == 1) // BURGER SELECTED
            {
                //display_burger_places();
                rest_type = display_burger_places();
                break;
            }
            else if (user_fastfood_option == 2) // TACO SELECTED
            {
                rest_type = display_taco_places();
                break;
            }
            else if (user_fastfood_option == 3) // PIZZA SELECTED
            {
                rest_type = display_pizza_places();
                break;
            }
            else
            {
                cout << "Invalid Input!" << endl;
                condition = false;
                break;
            }
            
        }
    }

    if (rest_type == "McDonalds"){
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

        vector<menu_component*> i_mcdonalds_cart;
        i_mcdonalds_cart.push_back(big_mac);
        i_mcdonalds_cart.push_back(mcnuggets_4_piece);
        i_mcdonalds_cart.push_back(mcnuggets_10_piece);
        i_mcdonalds_cart.push_back(iced_coffee_small);
        i_mcdonalds_cart.push_back(iced_coffee_medium);
        i_mcdonalds_cart.push_back(iced_coffee_large);
        i_mcdonalds_cart.push_back(fries_small);
        i_mcdonalds_cart.push_back(fries_large);

        int mcdonalds_item_number = 0;
        int mcdonalds_item_number_1 = 0;

        if(i_party_size == 1)
        {
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> mcdonalds_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_mcdonalds_cart.at(mcdonalds_item_number - 1));

            bool mcdonalds_condition = true;
            while (mcdonalds_condition)
            {
                cin >> mcdonalds_item_number_1;
                if (mcdonalds_item_number_1 == 0)
                {
                    mcdonalds_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_mcdonalds_cart.at(mcdonalds_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> mcdonalds_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_mcdonalds_cart.at(mcdonalds_item_number - 1));

            bool mcdonalds_condition = true;
            while (mcdonalds_condition)
            {
                cin >> mcdonalds_item_number_1;
                if (mcdonalds_item_number_1 == 0)
                {
                    mcdonalds_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_mcdonalds_cart.at(mcdonalds_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> mcdonalds_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_mcdonalds_cart.at(mcdonalds_item_number - 1));
            while (mcdonalds_condition)
            {
                cin >> mcdonalds_item_number_1;
                if (mcdonalds_item_number_1 == 0)
                {
                    mcdonalds_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_mcdonalds_cart.at(mcdonalds_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> mcdonalds_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_mcdonalds_cart.at(mcdonalds_item_number - 1));

            bool mcdonalds_condition = true;
            while (mcdonalds_condition)
            {
                cin >> mcdonalds_item_number_1;
                if (mcdonalds_item_number_1 == 0)
                {
                    mcdonalds_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_mcdonalds_cart.at(mcdonalds_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> mcdonalds_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_mcdonalds_cart.at(mcdonalds_item_number - 1));
            while (mcdonalds_condition)
            {
                cin >> mcdonalds_item_number_1;
                if (mcdonalds_item_number_1 == 0)
                {
                    mcdonalds_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_mcdonalds_cart.at(mcdonalds_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> mcdonalds_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_mcdonalds_cart.at(mcdonalds_item_number - 1));
            while (mcdonalds_condition)
            {
                cin >> mcdonalds_item_number_1;
                if (mcdonalds_item_number_1 == 0)
                {
                    mcdonalds_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_mcdonalds_cart.at(mcdonalds_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();

        }
    }
    else if (rest_type == "Chick Fil A"){
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

        vector<menu_component*> i_chickfila_cart;
        i_chickfila_cart.push_back(chicken_sandwhich);
        i_chickfila_cart.push_back(spicy_chicken_sandwhich);
        i_chickfila_cart.push_back(chickfila_nuggets_4_piece);
        i_chickfila_cart.push_back(chickfila_nuggets_8_piece);
        i_chickfila_cart.push_back(chickfila_nuggets_12_piece);
        i_chickfila_cart.push_back(waffle_fries_small);
        i_chickfila_cart.push_back(waffle_fries_medium);
        i_chickfila_cart.push_back(waffle_fries_large);
        i_chickfila_cart.push_back(mac_and_cheese_small);
        i_chickfila_cart.push_back(mac_and_cheese_medium);

        int chickfila_item_number = 0;
        int chickfila_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> chickfila_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_chickfila_cart.at(chickfila_item_number - 1));

            bool chickfila_condition = true;
            while (chickfila_condition)
            {
                cin >> chickfila_item_number_1;
                if (chickfila_item_number_1 == 0)
                {
                    chickfila_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_chickfila_cart.at(chickfila_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> chickfila_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_chickfila_cart.at(chickfila_item_number - 1));

            bool chickfila_condition = true;
            while (chickfila_condition)
            {
                cin >> chickfila_item_number_1;
                if (chickfila_item_number_1 == 0)
                {
                    chickfila_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_chickfila_cart.at(chickfila_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> chickfila_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_chickfila_cart.at(chickfila_item_number - 1));
            while (chickfila_condition)
            {
                cin >> chickfila_item_number_1;
                if (chickfila_item_number_1 == 0)
                {
                    chickfila_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_chickfila_cart.at(chickfila_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> chickfila_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_chickfila_cart.at(chickfila_item_number - 1));

            bool chickfila_condition = true;
            while (chickfila_condition)
            {
                cin >> chickfila_item_number_1;
                if (chickfila_item_number_1 == 0)
                {
                    chickfila_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_chickfila_cart.at(chickfila_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> chickfila_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_chickfila_cart.at(chickfila_item_number - 1));
            while (chickfila_condition)
            {
                cin >> chickfila_item_number_1;
                if (chickfila_item_number_1 == 0)
                {
                    chickfila_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_chickfila_cart.at(chickfila_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> chickfila_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_chickfila_cart.at(chickfila_item_number - 1));
            while (chickfila_condition)
            {
                cin >> chickfila_item_number_1;
                if (chickfila_item_number_1 == 0)
                {
                    chickfila_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_chickfila_cart.at(chickfila_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }
    }
    else if (rest_type == "In N Out"){
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

        vector<menu_component*> i_innout_cart;
        i_innout_cart.push_back(double_double_burger);
        i_innout_cart.push_back(cheeseburger);
        i_innout_cart.push_back(hamburger);
        i_innout_cart.push_back(french_fries);
        i_innout_cart.push_back(shake_strawberry);
        i_innout_cart.push_back(shake_chocolate);
        i_innout_cart.push_back(shake_vanilla);
        i_innout_cart.push_back(coffee);
        i_innout_cart.push_back(milk);
        i_innout_cart.push_back(soft_drink_medium);

        int innout_item_number = 0;
        int innout_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> innout_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_innout_cart.at(innout_item_number - 1));

            bool innout_condition = true;
            while (innout_condition)
            {
                cin >> innout_item_number_1;
                if (innout_item_number_1 == 0)
                {
                    innout_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_innout_cart.at(innout_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> innout_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_innout_cart.at(innout_item_number - 1));

            bool innout_condition = true;
            while (innout_condition)
            {
                cin >> innout_item_number_1;
                if (innout_item_number_1 == 0)
                {
                    innout_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_innout_cart.at(innout_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> innout_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_innout_cart.at(innout_item_number - 1));
            while (innout_condition)
            {
                cin >> innout_item_number_1;
                if (innout_item_number_1 == 0)
                {
                    innout_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_innout_cart.at(innout_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> innout_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_innout_cart.at(innout_item_number - 1));

            bool innout_condition = true;
            while (innout_condition)
            {
                cin >> innout_item_number_1;
                if (innout_item_number_1 == 0)
                {
                    innout_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_innout_cart.at(innout_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> innout_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_innout_cart.at(innout_item_number - 1));
            while (innout_condition)
            {
                cin >> innout_item_number_1;
                if (innout_item_number_1 == 0)
                {
                    innout_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_innout_cart.at(innout_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> innout_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_innout_cart.at(innout_item_number - 1));
            while (innout_condition)
            {
                cin >> innout_item_number_1;
                if (innout_item_number_1 == 0)
                {
                    innout_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_innout_cart.at(innout_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }

    }
    else if (rest_type == "Taco Bell"){
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

        vector<menu_component*> i_tacobell_cart;
        i_tacobell_cart.push_back(soft_taco);
        i_tacobell_cart.push_back(crunchy_taco);
        i_tacobell_cart.push_back(nacho_cheese_dorito_locos_taco);
        i_tacobell_cart.push_back(crunchy_taco_supreme);
        i_tacobell_cart.push_back(bean_burrito);
        i_tacobell_cart.push_back(quesarito);
        i_tacobell_cart.push_back(crunchwrap_supreme);
        i_tacobell_cart.push_back(nachos_bellgrande);
        i_tacobell_cart.push_back(baja_blast_freeze);
        i_tacobell_cart.push_back(dragon_fruit_freeze);

        int tacobell_item_number = 0;
        int tacobell_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> tacobell_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_tacobell_cart.at(tacobell_item_number - 1));

            bool tacobell_condition = true;
            while (tacobell_condition)
            {
                cin >> tacobell_item_number_1;
                if (tacobell_item_number_1 == 0)
                {
                    tacobell_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_tacobell_cart.at(tacobell_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> tacobell_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_tacobell_cart.at(tacobell_item_number - 1));

            bool tacobell_condition = true;
            while (tacobell_condition)
            {
                cin >> tacobell_item_number_1;
                if (tacobell_item_number_1 == 0)
                {
                    tacobell_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_tacobell_cart.at(tacobell_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> tacobell_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_tacobell_cart.at(tacobell_item_number - 1));
            while (tacobell_condition)
            {
                cin >> tacobell_item_number_1;
                if (tacobell_item_number_1 == 0)
                {
                    tacobell_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_tacobell_cart.at(tacobell_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> tacobell_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_tacobell_cart.at(tacobell_item_number - 1));

            bool tacobell_condition = true;
            while (tacobell_condition)
            {
                cin >> tacobell_item_number_1;
                if (tacobell_item_number_1 == 0)
                {
                    tacobell_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_tacobell_cart.at(tacobell_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> tacobell_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_tacobell_cart.at(tacobell_item_number - 1));
            while (tacobell_condition)
            {
                cin >> tacobell_item_number_1;
                if (tacobell_item_number_1 == 0)
                {
                    tacobell_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_tacobell_cart.at(tacobell_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> tacobell_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_tacobell_cart.at(tacobell_item_number - 1));
            while (tacobell_condition)
            {
                cin >> tacobell_item_number_1;
                if (tacobell_item_number_1 == 0)
                {
                    tacobell_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_tacobell_cart.at(tacobell_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }

    }
    else if (rest_type == "El Pollo Loco"){
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

        vector<menu_component*> i_elpolloloco_cart;
        i_elpolloloco_cart.push_back(chicken_avocado_taco);
        i_elpolloloco_cart.push_back(chickenless_pollo_taco);
        i_elpolloloco_cart.push_back(california_queso_burrito);
        i_elpolloloco_cart.push_back(chicken_tinga_burrito);
        i_elpolloloco_cart.push_back(original_pollo_bowl);
        i_elpolloloco_cart.push_back(double_chicken_bowl);
        i_elpolloloco_cart.push_back(chips_and_guacamole_small);
        i_elpolloloco_cart.push_back(chips_and_guacamole_regular);
        i_elpolloloco_cart.push_back(drink_regular);
        i_elpolloloco_cart.push_back(drink_large);

        int elpolloloco_item_number = 0;
        int elpolloloco_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> elpolloloco_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_elpolloloco_cart.at(elpolloloco_item_number - 1));

            bool elpolloloco_condition = true;
            while (elpolloloco_condition)
            {
                cin >> elpolloloco_item_number_1;
                if (elpolloloco_item_number_1 == 0)
                {
                    elpolloloco_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_elpolloloco_cart.at(elpolloloco_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> elpolloloco_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_elpolloloco_cart.at(elpolloloco_item_number - 1));

            bool elpolloloco_condition = true;
            while (elpolloloco_condition)
            {
                cin >> elpolloloco_item_number_1;
                if (elpolloloco_item_number_1 == 0)
                {
                    elpolloloco_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_elpolloloco_cart.at(elpolloloco_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> elpolloloco_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_elpolloloco_cart.at(elpolloloco_item_number - 1));
            while (elpolloloco_condition)
            {
                cin >> elpolloloco_item_number_1;
                if (elpolloloco_item_number_1 == 0)
                {
                    elpolloloco_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_elpolloloco_cart.at(elpolloloco_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> elpolloloco_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_elpolloloco_cart.at(elpolloloco_item_number - 1));

            bool elpolloloco_condition = true;
            while (elpolloloco_condition)
            {
                cin >> elpolloloco_item_number_1;
                if (elpolloloco_item_number_1 == 0)
                {
                    elpolloloco_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_elpolloloco_cart.at(elpolloloco_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> elpolloloco_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_elpolloloco_cart.at(elpolloloco_item_number - 1));
            while (elpolloloco_condition)
            {
                cin >> elpolloloco_item_number_1;
                if (elpolloloco_item_number_1 == 0)
                {
                    elpolloloco_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_elpolloloco_cart.at(elpolloloco_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> elpolloloco_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_elpolloloco_cart.at(elpolloloco_item_number - 1));
            while (elpolloloco_condition)
            {
                cin >> elpolloloco_item_number_1;
                if (elpolloloco_item_number_1 == 0)
                {
                    elpolloloco_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_elpolloloco_cart.at(elpolloloco_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }

    }
    else if (rest_type == "Del Taco"){
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

        vector<menu_component*> i_deltaco_cart;
        i_deltaco_cart.push_back(the_del_taco);
        i_deltaco_cart.push_back(beyond_taco);
        i_deltaco_cart.push_back(al_carbon_taco);
        i_deltaco_cart.push_back(beer_battered_fish_taco);
        i_deltaco_cart.push_back(epic_cali_bacon_burrito);
        i_deltaco_cart.push_back(epic_original_mex_burrito);
        i_deltaco_cart.push_back(epic_loaded_queso_burrito);
        i_deltaco_cart.push_back(epic_fresh_avocado_burrito);
        i_deltaco_cart.push_back(queso_loaded_nachos);
        i_deltaco_cart.push_back(chips_and_queso);

        int deltaco_item_number = 0;
        int deltaco_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> deltaco_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_deltaco_cart.at(deltaco_item_number - 1));

            bool deltaco_condition = true;
            while (deltaco_condition)
            {
                cin >> deltaco_item_number_1;
                if (deltaco_item_number_1 == 0)
                {
                    deltaco_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_deltaco_cart.at(deltaco_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> deltaco_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_deltaco_cart.at(deltaco_item_number - 1));

            bool deltaco_condition = true;
            while (deltaco_condition)
            {
                cin >> deltaco_item_number_1;
                if (deltaco_item_number_1 == 0)
                {
                    deltaco_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_deltaco_cart.at(deltaco_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> deltaco_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_deltaco_cart.at(deltaco_item_number - 1));
            while (deltaco_condition)
            {
                cin >> deltaco_item_number_1;
                if (deltaco_item_number_1 == 0)
                {
                    deltaco_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_deltaco_cart.at(deltaco_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> deltaco_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_deltaco_cart.at(deltaco_item_number - 1));

            bool deltaco_condition = true;
            while (deltaco_condition)
            {
                cin >> deltaco_item_number_1;
                if (deltaco_item_number_1 == 0)
                {
                    deltaco_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_deltaco_cart.at(deltaco_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> deltaco_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_deltaco_cart.at(deltaco_item_number - 1));
            while (deltaco_condition)
            {
                cin >> deltaco_item_number_1;
                if (deltaco_item_number_1 == 0)
                {
                    deltaco_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_deltaco_cart.at(deltaco_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> deltaco_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_deltaco_cart.at(deltaco_item_number - 1));
            while (deltaco_condition)
            {
                cin >> deltaco_item_number_1;
                if (deltaco_item_number_1 == 0)
                {
                    deltaco_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_deltaco_cart.at(deltaco_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }

    }
    else if (rest_type == "Pizza Hut"){
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

        vector<menu_component*> i_pizzahut_cart;
        i_pizzahut_cart.push_back(cheese_pizza);
        i_pizzahut_cart.push_back(pepperoni_pizza);
        i_pizzahut_cart.push_back(meat_lovers_pizza);
        i_pizzahut_cart.push_back(supreme_pizza);
        i_pizzahut_cart.push_back(veggie_lovers_pizza);
        i_pizzahut_cart.push_back(ultimate_cheese_lovers_pizza);
        i_pizzahut_cart.push_back(hawaiian_chicken_pizza);
        i_pizzahut_cart.push_back(backyard_bbq_pizza);
        i_pizzahut_cart.push_back(super_supreme_pizza);
        i_pizzahut_cart.push_back(pepperoni_lovers_pizza);

        int pizzahut_item_number = 0;
        int pizzahut_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> pizzahut_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_pizzahut_cart.at(pizzahut_item_number - 1));

            bool pizzahut_condition = true;
            while (pizzahut_condition)
            {
                cin >> pizzahut_item_number_1;
                if (pizzahut_item_number_1 == 0)
                {
                    pizzahut_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_pizzahut_cart.at(pizzahut_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> pizzahut_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_pizzahut_cart.at(pizzahut_item_number - 1));

            bool pizzahut_condition = true;
            while (pizzahut_condition)
            {
                cin >> pizzahut_item_number_1;
                if (pizzahut_item_number_1 == 0)
                {
                    pizzahut_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_pizzahut_cart.at(pizzahut_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> pizzahut_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_pizzahut_cart.at(pizzahut_item_number - 1));
            while (pizzahut_condition)
            {
                cin >> pizzahut_item_number_1;
                if (pizzahut_item_number_1 == 0)
                {
                    pizzahut_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_pizzahut_cart.at(pizzahut_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> pizzahut_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_pizzahut_cart.at(pizzahut_item_number - 1));

            bool pizzahut_condition = true;
            while (pizzahut_condition)
            {
                cin >> pizzahut_item_number_1;
                if (pizzahut_item_number_1 == 0)
                {
                    pizzahut_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_pizzahut_cart.at(pizzahut_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> pizzahut_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_pizzahut_cart.at(pizzahut_item_number - 1));
            while (pizzahut_condition)
            {
                cin >> pizzahut_item_number_1;
                if (pizzahut_item_number_1 == 0)
                {
                    pizzahut_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_pizzahut_cart.at(pizzahut_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> pizzahut_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_pizzahut_cart.at(pizzahut_item_number - 1));
            while (pizzahut_condition)
            {
                cin >> pizzahut_item_number_1;
                if (pizzahut_item_number_1 == 0)
                {
                    pizzahut_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_pizzahut_cart.at(pizzahut_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }

    }
    else if (rest_type == "Dominos"){
        menu_component *dominos_menu_customer_favorites = new menu_dominos("Dominos' Menu, Customer Favorites", "Following Options are the Most Popular Items at Dominos");
        // EXTRAVAGANZZA
        menu_component *extravaganzza_pizza = new menu_items_dominos(1, "ExtravaganZZa (Large)", "The ExtravaganZZa includes pepperoni, ham, Italian sausage, beef, fresh onions, fresh green peppers, fresh mushrooms and black olives, all sandwiched between two layers of cheese made with 100% real mozzarella.", 19.99);
        // MEATZZA
        menu_component *meatzza_pizza = new menu_items_dominos(2, "MeatZZa (Large)", "The MeatZZa includes pepperoni, ham, Italian sausage and beef, all sandwiched between two layers of cheese made with 100% real mozzarella.", 19.99);
        //PACIFIC VEGGIE
        menu_component *pacific_veggie_pizza = new menu_items_dominos(3, "Pacific Veggie (Large)", "The Pacific Veggie includes roasted red peppers, fresh baby spinach, fresh onions, fresh mushrooms, tomatoes, black olives, feta, provolone, cheese made with 100% real mozzarella and sprinkled with a garlic herb seasoning.", 19.99);
        // HONOLULU HAWAIIAN
        menu_component *honolulu_hawaiian_pizza = new menu_items_dominos(4, "Honolulu Hawaiian (Large)", "The Honolulu Hawaiian includes sliced ham, smoked bacon, pineapple, roasted red peppers, provolone and cheese made with 100% real mozzarella.", 19.99);
        //DELUXE
        menu_component *deluxe_pizza = new menu_items_dominos(5, "Deluxe (Large)", "The Deluxe pizza includes pepperoni, Italian sausage, fresh green peppers, fresh mushrooms, fresh onions and cheese made with 100% real mozzarella.", 19.99);
        //BUFFALO CHICKEN
        menu_component *buffalo_chicken_pizza = new menu_items_dominos(6, "Buffalo Chicken (Large)", "The Buffalo Chicken includes grilled chicken breast, fresh onions, provolone, American cheese, cheddar, cheese made with 100% real mozzarella and drizzled with a hot buffalo sauce.", 19.99);
        //ULTIMATE PEPPERONI
        menu_component *ultimate_pepperoni_pizza = new menu_items_dominos(7, "Ultimate Pepperoni (Large)", "The Ultimate Pepperoni includes two layers of pepperoni sandwiched between provolone, Parmesan-Asiago and cheese made with 100% real mozzarella then sprinkled with oregano.", 19.99);
        //MEMPHIIS BBQ CHICKEN
        menu_component *memphis_bbq_chicken_pizza = new menu_items_dominos(8, "Memphis BBQ Chicken (Large)", "The Memphis BBQ Chicken includes grilled chicken breast, honey BBQ sauce, fresh onions, cheddar, provolone and cheese made with 100% real mozzarella.", 19.99);
        //SPINACH AND FETA
        menu_component *spinach_and_feta_pizza = new menu_items_dominos(9, "Spinach and Feta (Large)", "The Spinach and feta pizza includes creamy Alfredo sauce, fresh spinach, fresh onions, feta, Parmesan-Asiago, provolone and cheese made with 100% real mozzarella.", 19.99);
        //CHEESEBURGER PIZZA
        menu_component *cheeseburger_pizza = new menu_items_dominos(10, "Cheeseburger Pizza (Large)", "The Cheeseburger pizza includes American cheese, ketchup-mustard sauce, beef, fresh onions, and diced tomatoes, topped with shredded provolone and cheddar cheeses.", 19.99);

        vector<menu_component*> i_dominos_cart;
        i_dominos_cart.push_back(extravaganzza_pizza);
        i_dominos_cart.push_back(meatzza_pizza);
        i_dominos_cart.push_back(pacific_veggie_pizza);
        i_dominos_cart.push_back(honolulu_hawaiian_pizza);
        i_dominos_cart.push_back(deluxe_pizza);
        i_dominos_cart.push_back(buffalo_chicken_pizza);
        i_dominos_cart.push_back(ultimate_pepperoni_pizza);
        i_dominos_cart.push_back(memphis_bbq_chicken_pizza);
        i_dominos_cart.push_back(spinach_and_feta_pizza);
        i_dominos_cart.push_back(cheeseburger_pizza);

        int dominos_item_number = 0;
        int dominos_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> dominos_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_dominos_cart.at(dominos_item_number - 1));

            bool dominos_condition = true;
            while (dominos_condition)
            {
                cin >> dominos_item_number_1;
                if (dominos_item_number_1 == 0)
                {
                    dominos_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_dominos_cart.at(dominos_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> dominos_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_dominos_cart.at(dominos_item_number - 1));

            bool dominos_condition = true;
            while (dominos_condition)
            {
                cin >> dominos_item_number_1;
                if (dominos_item_number_1 == 0)
                {
                    dominos_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_dominos_cart.at(dominos_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> dominos_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_dominos_cart.at(dominos_item_number - 1));
            while (dominos_condition)
            {
                cin >> dominos_item_number_1;
                if (dominos_item_number_1 == 0)
                {
                    dominos_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_dominos_cart.at(dominos_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> dominos_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_dominos_cart.at(dominos_item_number - 1));

            bool dominos_condition = true;
            while (dominos_condition)
            {
                cin >> dominos_item_number_1;
                if (dominos_item_number_1 == 0)
                {
                    dominos_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_dominos_cart.at(dominos_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> dominos_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_dominos_cart.at(dominos_item_number - 1));
            while (dominos_condition)
            {
                cin >> dominos_item_number_1;
                if (dominos_item_number_1 == 0)
                {
                    dominos_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_dominos_cart.at(dominos_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> dominos_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_dominos_cart.at(dominos_item_number - 1));
            while (dominos_condition)
            {
                cin >> dominos_item_number_1;
                if (dominos_item_number_1 == 0)
                {
                    dominos_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_dominos_cart.at(dominos_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }

    }
    else if (rest_type == "Papa John's"){
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

        vector<menu_component*> i_papajohns_cart;
        i_papajohns_cart.push_back(papajohns_pepperoni_pizza);
        i_papajohns_cart.push_back(papajohns_sausage_pizza);
        i_papajohns_cart.push_back(papajohns_cheese_pizza);
        i_papajohns_cart.push_back(papajohns_the_works);
        i_papajohns_cart.push_back(papajohns_the_meats);
        i_papajohns_cart.push_back(papajohns_meatball_pepperoni);
        i_papajohns_cart.push_back(papajohns_super_hawaiian);
        i_papajohns_cart.push_back(papajohns_extra_cheesy_alfredo);
        i_papajohns_cart.push_back(papajohns_garden_fresh);
        i_papajohns_cart.push_back(papajohns_tuscan_six_cheese);

        int papajohns_item_number = 0;
        int papajohns_item_number_1 = 0;

        if(i_party_size == 1)
        {
            
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;

            cin >> papajohns_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_papajohns_cart.at(papajohns_item_number - 1));

            bool papajohns_condition = true;
            while (papajohns_condition)
            {
                cin >> papajohns_item_number_1;
                if (papajohns_item_number_1 == 0)
                {
                    papajohns_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_papajohns_cart.at(papajohns_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
        }
        else if(i_party_size == 2)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> papajohns_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_papajohns_cart.at(papajohns_item_number - 1));

            bool papajohns_condition = true;
            while (papajohns_condition)
            {
                cin >> papajohns_item_number_1;
                if (papajohns_item_number_1 == 0)
                {
                    papajohns_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_papajohns_cart.at(papajohns_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> papajohns_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_papajohns_cart.at(papajohns_item_number - 1));
            while (papajohns_condition)
            {
                cin >> papajohns_item_number_1;
                if (papajohns_item_number_1 == 0)
                {
                    papajohns_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_papajohns_cart.at(papajohns_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();
        }

        else if (i_party_size == 3)
        {
            //USER 1 CART FOR PARTY OF 2
            party_component *i_user1 = new user(user1);
            cart_component *i_user1_cart = new user_cart(i_user1);
            cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            
            cin >> papajohns_item_number;
            cart_component *i_user1_cart_items = new cart_items(i_papajohns_cart.at(papajohns_item_number - 1));

            bool papajohns_condition = true;
            while (papajohns_condition)
            {
                cin >> papajohns_item_number_1;
                if (papajohns_item_number_1 == 0)
                {
                    papajohns_item_number_1 = false;
                    break;
                }
                i_user1_cart_items->add_to_cart(i_papajohns_cart.at(papajohns_item_number_1 - 1));
            }
            i_user1_cart->add(i_user1_cart_items);
            i_user1_cart->display();
            
            //USER 2 CART FOR PARTY OF 2
            party_component *i_user2 = new user(user2);
            cart_component *i_user2_cart = new user_cart(i_user2);
            cout << "For " << user2 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> papajohns_item_number;
            cart_component *i_user2_cart_items = new cart_items(i_papajohns_cart.at(papajohns_item_number - 1));
            while (papajohns_condition)
            {
                cin >> papajohns_item_number_1;
                if (papajohns_item_number_1 == 0)
                {
                    papajohns_item_number_1 = false;
                    break;
                }
                i_user2_cart_items->add_to_cart(i_papajohns_cart.at(papajohns_item_number_1 - 1));
            }
            i_user2_cart->add(i_user2_cart_items);
            i_user2_cart->display();

            //USER 3 CART FOR PARTY OF 3
            party_component *i_user3 = new user(user3);
            cart_component *i_user3_cart = new user_cart(i_user3);
            cout << "For " << user3 << ", what would you like to add to their cart?" << endl;
            cout << "Please enter the item number from the restaurant you have selected." << endl;
            cout << "After all items have been added, press '0'." << endl;
            cin >> papajohns_item_number;
            cart_component *i_user3_cart_items = new cart_items(i_papajohns_cart.at(papajohns_item_number - 1));
            while (papajohns_condition)
            {
                cin >> papajohns_item_number_1;
                if (papajohns_item_number_1 == 0)
                {
                    papajohns_item_number_1 = false;
                    break;
                }
                i_user3_cart_items->add_to_cart(i_papajohns_cart.at(papajohns_item_number_1 - 1));
            }
            i_user3_cart->add(i_user3_cart_items);
            i_user3_cart->display();
        }

    }
    else{
        cout << "THERE IS AN ERROR MF IN REST TYPE LOOP" << endl;
    }


    return 0;
}