#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;


class Person
{
    public:
        Person();

        Person(string);

        string getName();
        void setName(string);

    protected:
        string m_name;

    private:
};

#endif // PERSON_H
