#ifndef FASTFOOD_CATEGORY_BURGER
#define FASTFOOD_CATEGORY_BURGER
#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

class Burger : public FastFood
{
    using FastFood::FastFood;

public:
    void fastfood_display_store_info() override;
    FastFood *clone() override;
};

#endif /* FASTFOOD_CATEGORY_BURGER */
