# project(SPLICE)
cmake_minimum_required(VERSION 3.1)
add_subdirectory(googletest)
set(CMAKE_CXX_STANDARD 17)
add_executable(fastfood_test
    prototype/tests/restaurant_unit_test.cpp
    
    prototype/src/fastfood_category_burger.cpp
    prototype/src/fastfood_category_pizza.cpp
    prototype/src/fastfood_category_taco.cpp
    prototype/src/restaurant.cpp
    prototype/src/fastfood_client.cpp
    prototype/src/fastfood_creator.cpp
    prototype/src/fastfood_restaurant.cpp
    interface/fastfood_display.cpp
)
add_executable(menu_burger_test
    composite/menu_burger/tests/menu_burger_tests.cpp
)
add_executable(menu_taco_test
    composite/menu_taco/tests/menu_taco_tests.cpp
)
add_executable(menu_pizza_test
    composite/menu_pizza/tests/menu_pizza_tests.cpp
)
add_executable(c_party_test
    composite/party_tests/party_test.cpp
)
add_executable(c_cart_test
    composite/cart/test/cart_test.cpp
)
add_executable(main
    main.cpp
    prototype/src/fastfood_category_burger.cpp
    prototype/src/fastfood_category_pizza.cpp
    prototype/src/fastfood_category_taco.cpp
    prototype/src/restaurant.cpp
    prototype/src/fastfood_client.cpp
    prototype/src/fastfood_creator.cpp
    prototype/src/fastfood_restaurant.cpp
    interface/fastfood_display.cpp
)


target_link_libraries(fastfood_test gtest)
target_compile_definitions(fastfood_test PRIVATE gtest_disable_pthreads=ON)
target_link_libraries(menu_burger_test gtest)
target_compile_definitions(menu_burger_test PRIVATE gtest_disable_pthreads=ON)
target_link_libraries(menu_taco_test gtest)
target_compile_definitions(menu_taco_test PRIVATE gtest_disable_pthreads=ON)
target_link_libraries(menu_pizza_test gtest)
target_compile_definitions(menu_pizza_test PRIVATE gtest_disable_pthreads=ON)
target_link_libraries(c_party_test gtest)
target_compile_definitions(c_party_test PRIVATE gtest_disable_pthreads=ON)
target_link_libraries(c_cart_test gtest)
target_compile_definitions(c_cart_test PRIVATE gtest_disable_pthreads=ON)