#ifndef FASTFOOD_CREATOR
#define FASTFOOD_CREATOR
#include <iostream>
#include <string>
#include <string_view>

using namespace std;
class FastFood;
FastFood *Create(const string &fastfood_store_name, const string &fastfood_store_price, string_view fastfood_type);

#endif /* FASTFOOD_CREATOR */
