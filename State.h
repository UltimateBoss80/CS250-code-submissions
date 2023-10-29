#ifndef STATE_H
#define STATE_H
#include <string>
#include <iostream>
using namespace std;



class State
{
    public:
        State();
        State(string, double, long long int);
        void setName(string);
        string getName();
        void setEnergy(double);
        double getEnergy();
        void setSize(long long int);
        long long int getSize();
        void setPercent(double);
        long double findPercent();
        double getPercent();







    protected:

    private:
        string m_name;
        double m_energy;
        long long int m_size;
        double m_percent;
};

#endif // STATE_H
