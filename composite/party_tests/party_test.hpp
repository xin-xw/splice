#ifndef PARTY_TEST
#define PARTY_TEST
#include "gtest/gtest.h"
#include "../../composite/party/party.hpp"
#include "../../composite/party/user.hpp"

TEST(Party_Test, Create_Party)
{
    party_component *m_party_1 = new party("Party of 3", 3);
    cout << "EXPECTED PARTY NAME: Party of 3" << '\n'
         << "RECEIVED PARTY NAME: " << m_party_1->get_name() << endl;
    EXPECT_EQ(m_party_1->get_name(), "Party of 3");

    cout << endl;

    cout << "EXPECTED PARTY SIZE: 3" << '\n'
         << "RECEIVED PARTY SIZE: " << m_party_1->get_size() << endl;
    EXPECT_EQ(m_party_1->get_size(), 3);

    m_party_1->print();
}

TEST(Party_Test, Create_Parties)
{
    party_component *m_party_1 = new party("Party of 3", 3);
    cout << "EXPECTED PARTY NAME: Party of 3" << '\n'
         << "RECEIVED PARTY NAME: " << m_party_1->get_name() << endl;
    EXPECT_EQ(m_party_1->get_name(), "Party of 3");

    cout << endl;

    cout << "EXPECTED PARTY SIZE: 3" << '\n'
         << "RECEIVED PARTY SIZE: " << m_party_1->get_size() << endl;
    EXPECT_EQ(m_party_1->get_size(), 3);

    party_component *m_party_2 = new party("Party of 8", 8);
    cout << "EXPECTED PARTY NAME: Party of 8" << '\n'
         << "RECEIVED PARTY NAME: " << m_party_2->get_name() << endl;
    EXPECT_EQ(m_party_2->get_name(), "Party of 8");

    cout << endl;

    cout << "EXPECTED PARTY SIZE: 8" << '\n'
         << "RECEIVED PARTY SIZE: " << m_party_2->get_size() << endl;
    EXPECT_EQ(m_party_2->get_size(), 8);
    m_party_2->print();
}

TEST(Party_Test, Create_Party_User)
{
    party_component *m_party_1 = new party("Party of 3", 3);
    EXPECT_EQ(m_party_1->get_name(), "Party of 3");
    EXPECT_EQ(m_party_1->get_size(), 3);
    cout << endl;
    m_party_1->print();

    cout << endl;
    party_component *user_1 = new user("Xin");
    m_party_1->add(user_1);
    cout << "EXPECTED USER NAME: " << user_1->get_name() << endl;
    EXPECT_EQ(user_1->get_name(), "Xin");
    user_1->print();

    cout << endl;
    party_component *user_2 = new user("Jeanette");
    m_party_1->add(user_2);
    cout << "EXPECTED USER NAME: " << user_2->get_name() << endl;
    EXPECT_EQ(user_2->get_name(), "Jeanette");
    user_2->print();

    cout << endl;
    party_component *user_3 = new user("Hongan");
    m_party_1->add(user_3);
    cout << "EXPECTED USER NAME: " << user_3->get_name() << endl;
    EXPECT_EQ(user_3->get_name(), "Hongan");
    user_3->print();

    cout << endl
         << endl;
    m_party_1->print();
}

TEST(Party_Test, Remover_User_1)
{
    party_component *m_party_1 = new party("Party of 3", 3);
    EXPECT_EQ(m_party_1->get_name(), "Party of 3");
    EXPECT_EQ(m_party_1->get_size(), 3);
    cout << endl;
    m_party_1->print();

    cout << endl;
    party_component *user_1 = new user("Xin");
    m_party_1->add(user_1);
    cout << "EXPECTED USER NAME: " << user_1->get_name() << endl;
    EXPECT_EQ(user_1->get_name(), "Xin");
    user_1->print();

    cout << endl;
    party_component *user_2 = new user("Jeanette");
    m_party_1->add(user_2);
    cout << "EXPECTED USER NAME: " << user_2->get_name() << endl;
    EXPECT_EQ(user_2->get_name(), "Jeanette");
    user_2->print();

    cout << endl;
    party_component *user_3 = new user("Hongan");
    m_party_1->add(user_3);
    cout << "EXPECTED USER NAME: " << user_3->get_name() << endl;
    EXPECT_EQ(user_3->get_name(), "Hongan");
    user_3->print();

    cout << endl
         << endl;

    cout << "BEFORE REMOVE: " << endl;

    m_party_1->print();

    m_party_1->remove(user_1);

    cout << endl;

    cout << "AFTER REMOVE: " << endl;
    m_party_1->print();
}

TEST(Party_Test, Remover_User_2)
{
    party_component *m_party_1 = new party("Party of 3", 3);
    EXPECT_EQ(m_party_1->get_name(), "Party of 3");
    EXPECT_EQ(m_party_1->get_size(), 3);
    cout << endl;
    m_party_1->print();

    cout << endl;
    party_component *user_1 = new user("Xin");
    m_party_1->add(user_1);
    cout << "EXPECTED USER NAME: " << user_1->get_name() << endl;
    EXPECT_EQ(user_1->get_name(), "Xin");
    user_1->print();

    cout << endl;
    party_component *user_2 = new user("Jeanette");
    m_party_1->add(user_2);
    cout << "EXPECTED USER NAME: " << user_2->get_name() << endl;
    EXPECT_EQ(user_2->get_name(), "Jeanette");
    user_2->print();

    cout << endl;
    party_component *user_3 = new user("Hongan");
    m_party_1->add(user_3);
    cout << "EXPECTED USER NAME: " << user_3->get_name() << endl;
    EXPECT_EQ(user_3->get_name(), "Hongan");
    user_3->print();

    cout << endl
         << endl;
    
    cout << "BEFORE REMOVE: " << endl;
    m_party_1->print();

    m_party_1->remove(user_2);

    cout << endl;

    cout << "AFTER REMOVE: " << endl;
    m_party_1->print();
}

TEST(Party_Test, Remover_User_3)
{
    party_component *m_party_1 = new party("Party of 1", 1);
    EXPECT_EQ(m_party_1->get_name(), "Party of 1");
    EXPECT_EQ(m_party_1->get_size(), 1);
    cout << endl;
    m_party_1->print();

    cout << endl;
    party_component *user_1 = new user("Xin");
    m_party_1->add(user_1);
    cout << "EXPECTED USER NAME: " << user_1->get_name() << endl;
    EXPECT_EQ(user_1->get_name(), "Xin");
    user_1->print();

    cout << endl;
    party_component *user_2 = new user("Jeanette");
    m_party_1->add(user_2);
    cout << "EXPECTED USER NAME: " << user_2->get_name() << endl;
    EXPECT_EQ(user_2->get_name(), "Jeanette");
    user_2->print();

    cout << endl;
    party_component *user_3 = new user("Hongan");
    m_party_1->add(user_3);
    cout << "EXPECTED USER NAME: " << user_3->get_name() << endl;
    EXPECT_EQ(user_3->get_name(), "Hongan");
    user_3->print();

    cout << endl
         << endl;
    
    cout << "BEFORE REMOVE: " << endl;
    m_party_1->print();

    m_party_1->remove(user_3);

    cout << endl;

    cout << "AFTER REMOVE: " << endl;
    m_party_1->print();
}

#endif /* PARTY_TEST */
