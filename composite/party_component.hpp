#ifndef PARTY_COMPONENT
#define PARTY_COMPONENT
#include <string>

using namespace std;

class party_component
{
public:
    virtual void add(party_component *party_component) = 0;
    virtual void remove(party_component *m_remove) = 0;
    virtual string get_name() = 0;
    virtual int get_size() = 0;
    virtual void print() = 0;
    virtual ~party_component()
    {
        
    }
};



#endif /* PARTY_COMPONENT */
