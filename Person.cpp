#include "Person.h"
#include <string>

Person::Person()
{
    //ctor
}

Person::Person(string n)
{
    m_name = n;
}

string Person::getName()
{
    return m_name;
}

void Person::setName(string n)
{
    m_name = n;
}
