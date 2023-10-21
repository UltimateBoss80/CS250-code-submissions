#ifndef STUDENT_H
#define STUDENT_H
#include <string>

#include <Person.h>

using namespace std;


class Student : public Person
{
    public:
        Student();

        Student(string, string[], int);

        string getCourses();
        void setCourses(string);

    protected:

    private:
        int m_taking;
        string m_courses[10];
};

#endif // STUDENT_H
