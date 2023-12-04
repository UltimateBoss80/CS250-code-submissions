/*
    This program illustrates the use of hash tables and files"
    Jeremy White
    12/3/2023
*/

#include <iostream>
#include "Dogs.h"


using namespace std;

int main()
{
    try

    {
        int choice;


        Dogs dogs;
        do
        {
            cout << "Select 1 to see total number of dogs in the world."<< endl;
            cout << "Select 2 to find out how many dogs are in a specific country." << endl;
            cout << "Select 3 to quit." << endl;
            cin >> choice;

            switch (choice)
            {

                case 1:
                    cout << dogs.getDogPop() << " dogs in the world" << endl;
                    break;

                case 2:
                    string country;
                    cout << "Enter country: ";
                    cin >> country;

                    if (dogs.countryAvailable(country))
                    {
                        cout << dogs.getCountryPop(country) << " dogs in " << country << endl;
                    }
                    else
                    {
                        throw "Country not found";
                    }
                    break;
                case 3:
                    break;

                default:
                    cout << "Invalid choice" << endl;

            }

        }while (choice != 3);



    }

    catch (const char *msg)
    {
        cout << msg << endl;
    }


    return 0;



}
