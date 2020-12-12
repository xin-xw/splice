#ifndef INCLUDE
#define INCLUDE

#include "prototype/header/fastfood_client.hpp"
#include "prototype/header/fastfood_creator.hpp"
#include "prototype/header/fastfood_restaurant.hpp"
#include "prototype/header/fastfood_category_burger.hpp"
#include "prototype/header/fastfood_category_taco.hpp"
#include "prototype/header/fastfood_category_pizza.hpp"
#include "interface/fastfood_display.hpp"

/* BURGERS */
#include "composite/menu_component.hpp"
#include "composite/menu_burger/header/menu_mcdonalds.hpp"
#include "composite/menu_burger/header/menu_items_mcdonalds.hpp"
#include "interface/menu_mcdonalds_display.hpp"

#include "composite/menu_burger/header/menu_chickfila.hpp"
#include "composite/menu_burger/header/menu_items_chickfila.hpp"
#include "interface/menu_chickfila_display.hpp"

#include "composite/menu_burger/header/menu_innout.hpp"
#include "composite/menu_burger/header/menu_items_innout.hpp"
#include "interface/menu_innout_display.hpp"
/* TACOS */
#include "composite/menu_taco/header/menu_deltaco.hpp"
#include "composite/menu_taco/header/menu_items_deltaco.hpp"
#include "interface/menu_deltaco_display.hpp"

#include "composite/menu_taco/header/menu_tacobell.hpp"
#include "composite/menu_taco/header/menu_items_tacobell.hpp"
#include "interface/menu_tacobell_display.hpp"

#include "composite/menu_taco/header/menu_elpolloloco.hpp"
#include "composite/menu_taco/header/menu_items_elpolloloco.hpp"
#include "interface/menu_elpolloloco_display.hpp"
/* PIZZAS */
#include "composite/menu_pizza/header/menu_dominos.hpp"
#include "composite/menu_pizza/header/menu_items_dominos.hpp"
#include "interface/menu_dominos_display.hpp"

#include "composite/menu_pizza/header/menu_pizzahut.hpp"
#include "composite/menu_pizza/header/menu_items_pizzahut.hpp"
#include "interface/menu_pizzahut_display.hpp"

#include "composite/menu_pizza/header/menu_papajohns.hpp"
#include "composite/menu_pizza/header/menu_items_papajohns.hpp"
#include "interface/menu_papajohns_display.hpp"


#include "composite/cart_component.hpp"
#include "composite/cart/cart_items.hpp"
#include "composite/cart/user_cart.hpp"

#include "composite/party_component.hpp"
#include "composite/party/party.hpp"
#include "composite/party/user.hpp"

#endif /* INCLUDE */
