#include "Dogs.h"
#include <fstream>

Dogs::Dogs()
{

    ifstream dog("dogs.txt");
    if (!dog.is_open())
        throw "File couldn't open";

    string line;
    while (getline(dog,line))
    {
        size_t pos = line.find(',');
        if (pos != string::npos)
        {
            string country = line.substr(0, pos);
            int pop = stoi(line.substr(pos + 1));
            m_dogs[country] = pop;
        }


    }
    dog.close();


}

int Dogs:: getDogPop()
{
    for(auto it = m_dogs.begin(); it != m_dogs.end(); it++)
    {
        totalPop += it->second;
    }
    return totalPop;
}

int Dogs:: getCountryPop(string c)
{
    auto it = m_dogs.find(c);
    if (it != m_dogs.end())
    {
        m_dogPop = it->second;
        return m_dogPop;
    }
    else
        throw "Country not found.";


}

bool Dogs:: countryAvailable(string c)
{
    return m_dogs.find(c) != m_dogs.end();
}
