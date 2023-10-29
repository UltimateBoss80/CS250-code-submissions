#include "State.h"
#include <cmath>

State::State()
{
    m_name = "";
    m_energy = 0;
    m_size = 0;
}

State::State(string n, double e, long long int s)
{
    m_name = n;
    m_energy = e * 1000000000000;
    m_size = s;

}

void State::setName(string n)
{
    m_name = n;
}

string State::getName()
{
    return m_name;
}

void State::setEnergy(double e)
{
    m_energy = e;
}

double State::getEnergy()
{
    return m_energy;
}

void State::setSize(long long int s)
{
    m_size = s;
}

long long int State::getSize()
{
    return m_size;
}

void State::setPercent(double p)
{
    m_percent = p;
}

long double State::findPercent()
{
    double panelsNeeded = ceil ((m_energy) / 51);
    double panelArea = panelsNeeded * 18;
    m_percent = ceil( (panelArea / m_size) * 100);
}

double State::getPercent()
{
    return m_percent;
}

