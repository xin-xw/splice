#ifndef FASTFOOD_CATEGORY_TACO
#define FASTFOOD_CATEGORY_TACO
#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

class Taco : public FastFood
{
    using FastFood::FastFood;

public:
    void fastfood_display_store_info() override;
    FastFood *clone() override;
};

#endif /* FASTFOOD_CATEGORY_TACO */
