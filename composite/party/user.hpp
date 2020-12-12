#ifndef USER
#define USER
#include "../party_component.hpp"
#include <iostream>

using namespace std;

class user : public party_component
{
private:
    int num_users;
    string user_name;

public:
    user(const string &user_name) : party_component()
    {
        num_users++;
        this->user_name = user_name;
    }

    string get_name()
    {
        return this->user_name;
    }

    int get_size()
    {   
        return num_users;
    }

    void print()
    {
        cout << this->user_name;
    }

    void add(party_component *party_component)
    {
        cout << "Error, cannot perform add" << endl;
    }

    void remove(party_component *m_remove)
    {
        cout << "Error, cannot perform remove" << endl;
    }

    virtual ~user()
    {
        
    }
};

#endif /* USER */
