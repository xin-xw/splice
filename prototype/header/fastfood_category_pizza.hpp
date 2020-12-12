#ifndef FASTFOOD_CATEGORY_PIZZA
#define FASTFOOD_CATEGORY_PIZZA
#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

class Pizza : public FastFood
{
    using FastFood::FastFood;

public:
    void fastfood_display_store_info() override;
    FastFood *clone() override;
};

#endif /* FASTFOOD_CATEGORY_PIZZA */
