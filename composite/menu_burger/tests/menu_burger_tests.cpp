#include "gtest/gtest.h"
#include "../../composite/menu_burger/tests/menu_mcdonalds_tests.hpp"
#include "../../composite/menu_burger/tests/menu_chickfila_tests.hpp"
#include "../../composite/menu_burger/tests/menu_innout_tests.hpp"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
