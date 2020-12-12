#ifndef RESTAURANT
#define RESTAURANT
#include <iostream>
#include <string>
using namespace std;

// Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype
class Restaurant
{
protected:
    string restaurant_category;
    // string restaurantName;
public:
    Restaurant() = default;

    Restaurant(const string &restaurant_category);

    const string &get_restaurant_category() const;

    void set_restaurant_category(const string &restaurant_category);

    // Restaurant(const string &restaurantName, const string &restaurantCategory)
    // {
    //     this->restaurantName = restaurantName;
    //     this->restaurantCategory = restaurantCategory;
    // }

    // const string &getRestaurantName() const
    // {
    //     return this->restaurantName;
    // }

    // void setRestaurantName(const string &restaurantName)
    // {
    //     this->restaurantName = restaurantName;
    // }

    // virtual Restaurant *clone() = 0;

    // virtual ~Restaurant() = 0;
    // virtual void setRestaurantName(const string &RestaurantName) = 0;
    // virtual void setRestaurantCategory(const string &restaurantCategory) = 0;
    // virtual const string getRestaurantName() = 0;
    // virtual const string getRestaurantCategory() = 0;
    // virtual unique_ptr<Restaurant> clone() = 0;
    // virtual ~Restaurant();
};

#endif /* RESTAURANT */
