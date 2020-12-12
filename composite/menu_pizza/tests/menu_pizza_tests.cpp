#include "gtest/gtest.h"
#include "../../composite/menu_pizza/tests/menu_dominos_tests.hpp"
#include "../../composite/menu_pizza/tests/menu_papajohns_tests.hpp"
#include "../../composite/menu_pizza/tests/menu_pizzahut_tests.hpp"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}