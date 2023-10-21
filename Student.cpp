#include "Student.h"

Student::Student()
{
    //ctor
}

Student::Student(string n, string c[], int size)
{
    m_name = n;
    for(int i = 0; i < size && i < 10; i++)
    {
        m_courses[i] = c[i];
    }
    m_taking = size;

}

string Student::getCourses()
{
    string courses;
    for(int i = 0; i < m_taking; i++)
    {
        courses += m_courses[i];
        if(i != m_taking - 1)
        {
            courses += ",";
        }
    }
    return courses;
}

void Student::setCourses(string c)
{
    if(m_taking < 10)
    {
        m_courses[m_taking] = c;
        m_taking++;
    }
}
