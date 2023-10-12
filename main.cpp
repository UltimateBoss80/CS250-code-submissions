//Description: Project 2
//Author: Jeremy White
//Date: 10/9/2023

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"



using namespace std;

int main()
{
    Person myPerson
    myPerson("Marc");

    myCourses[]= {"CS250", "CS301", "CS270", "CS302", "Philosophy";}
    Student cStudent;
    cStudent("Jeremy White", myCourses, 5);

    Professor myProfessor("Robert Vermilyer", "SG 4D")


    cout << "What's your name and courses you take?" << endl << "Me: " << myStudent.getName() << ", " << myStudent.getCourses() << endl << endl;
    cout << "Counselor: Do you have a friend with the name starting with 'm'?" << endl << "Me: Yes I do actually, the name is " << myPerson.getName()
    << endl << endl;
    cout << "Counselor: What's the name and office location of one of your college professors?" << endl << "Me: " << myProfessor.getName() << ", " <<
    myProfessor.getOffice() << endl << endl;

    myStudent.setCourses("Real Estate");
    cout << "Updated courses: " << myStudent.getCourses();

    return 0;
}

