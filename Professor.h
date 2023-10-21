#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>

#include <Person.h>

using namespace std;



class Professor : public Person
{
    public:
        Professor();
        Professor(string, string);
        string getOffice();
        void setOffice(string);

    protected:

    private:
        string m_office;
};

#endif // PROFESSOR_H
