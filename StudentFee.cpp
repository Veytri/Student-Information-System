#include <iostream>
#include "StudentFee.h"


using namespace std;
StudentFee::StudentFee(){        // constructor to set the variable class StudentFee and class Student to 0
	accomadationFee = 0;
	tuitionFee = 0;
	Student();      // constructor of class student
}
StudentFee::StudentFee(double a, double t, string n, string i, string c){ // overloaded constructor to assign value to variable in class StudentFee and class Student
	accomadationFee = a;
	tuitionFee = t;
	Student(n,i,c);           // overloaded constructor in class Student
}
StudentFee::~StudentFee(){       // destructor
	accomadationFee = 0;
	tuitionFee = 0;
}
void StudentFee::setFeeAndStudent(double a, double t, string n, string i, string c){  // mutator, function to assign the value to variable in class StudentFee and class Student
	accomadationFee = a;
	tuitionFee = t;
    setName(n);          // function in class Student, set the value of name
	setID(i);            // function in class Student, set the value of id
	setCourse(c);        // function in class Student, set the value of course
}
void StudentFee::setAccomadationFee(double a){  // mutator, function that assign accomadation ee
    accomadationFee = a;
}
void StudentFee::setTuitionFee(double t) {  // mutator, function that assgin tuition fee
	tuitionFee = t;
}
double StudentFee::getAccomadationFee(){     // accessor, function to return the accomadation fee that should be pay be student
	return accomadationFee;
}
double StudentFee::getTuitionFee(){      // accessor, function to return the tuition fee that should be pay be student
	return tuitionFee;
}
string StudentFee::getName(){      // accssor, function to return the name of student in class Student 
	return name;
}
void StudentFee::print(){      // function to display the variable in class StudentFee and class Student
	Student::print();         // call the function to display the varible in class Student
	cout << "Accomadation Fee: RM" << accomadationFee  << endl;
	cout << "Tuition Fee: RM" << tuitionFee << endl;
}
