#ifndef DOGS_H
#define DOGS_H
#include <string>
#include <unordered_map>

using namespace std;


class Dogs
{
    public:
        Dogs();
        int getDogPop();
        int getCountryPop(string);
        bool countryAvailable(string); // may or may not need

    protected:

    private:
        int m_dogPop = 0;
        long int totalPop = 0;
        unordered_map <string,int> m_dogs;
};

#endif // DOGS_H
