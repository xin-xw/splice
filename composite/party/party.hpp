#ifndef PARTY
#define PARTY
#include "../party_component.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class party : public party_component
{
private:
    int party_size;
    string party_name;
    vector<party_component *> v_parties;

public:
    party(const string &party_name, const int &party_size) : party_component()
    {
        this->party_name = party_name;
        this->party_size = party_size;
    }

    string get_name()
    {
        return this->party_name;
    }

    int get_size()
    {
        return this->party_size;
    }

    void add(party_component *party_component)
    {
        v_parties.push_back(party_component);
    }

    void remove(party_component *m_remove)
    {
        vector<party_component *>::iterator it = v_parties.begin();
        while(it != v_parties.end())
        {
            if(*it == m_remove)
            {
                delete m_remove;
                v_parties.erase(it);
                break;
            }
            ++it;
        }
    }

    virtual ~party()
    {
        while (!v_parties.empty())
        {
            vector<party_component *>::iterator it = v_parties.begin();
            delete *it;
            v_parties.erase(it);
        }
    }

    void print()
    {
        unsigned num_users = 1;
        cout << "Party Name: " << this->party_name << '\n'
             << "Party Size: " << this->party_size << endl;
        for (auto m_parties : v_parties)
        {
            cout << "User " << num_users++ << ": ";
            m_parties->print();
            cout << endl;
        }
    }
};

#endif /* PARTY */
