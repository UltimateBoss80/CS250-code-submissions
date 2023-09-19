// Description: Using functions to calculate growth rate and population after a certain amount of years.
// Author: Jeremy White
// Date: 9/17/2023

#include <iostream>

using namespace std;


double GrowthRate(double, double);

double EstimatedPop(double, double, double);

int main()
{

    double currentPop;
    double birthR;
    double deathR;
    long long int ePop;
    double gRate;
    int years;

    cout << "Enter starting population: ";
    cin >> currentPop;
    cout << endl;

    cout << "Enter birth rate: ";
    cin >> birthR;
    cout << endl;

    cout << "Enter death rate: ";
    cin >> deathR;
    cout << endl;

    cout << "Enter number of years to project: ";
    cin >> years;
    cout << endl;


    if (birthR < 0 || deathR < 0 || currentPop < 2)
    {
        cout << "Error, invalid output. Birth rate, death rate has to be at least zero, and population has to be at least two, please try again";
        return -1;
    }


    gRate = GrowthRate (birthR, deathR);
    cout << "The population growth rate is: " << gRate << "%" << endl;

    for (int i = 1; i<=years; i++)
    {
        ePop = EstimatedPop (currentPop, birthR, deathR);
        cout << "Population after " << i << " year - " << ePop << endl;
        currentPop = ePop;

    }

    return 0;
}


double GrowthRate(double birthR, double deathR)
{
    double growthR;
    growthR = birthR - deathR;
    return growthR;

}

double EstimatedPop(double currentPop, double birthR, double deathR)
{
    double estimatePop;
    estimatePop = (currentPop + (birthR * currentPop) / 100 - (deathR * currentPop) / 100);
    return estimatePop;


}
