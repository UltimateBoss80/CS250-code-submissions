#ifndef STUDENT_H
#define STUDENT_H

#include <Person.h>


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
        string[]  m_courses;
};

#endif // STUDENT_H
