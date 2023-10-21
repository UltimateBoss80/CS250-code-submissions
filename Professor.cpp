#include "Professor.h"

Professor::Professor()
{
    //ctor
}

Professor::Professor(string n, string o)
{
    m_name = n;
    m_office = o;
}

string Professor::getOffice()
{
    return m_office;
}

void Professor::setOffice(string o)
{
    m_office= o;
}
