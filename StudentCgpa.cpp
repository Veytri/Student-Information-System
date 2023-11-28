#include <iostream>
#include "StudentCgpa.h"

using namespace std;
double amountFee(StudentCgpa c){    // friend function of class StudentCgpa, calculate the total of accomadation and tuition fee
	double amount;        // double variable amount
	amount = c.getAccomadationFee() + c.getTuitionFee();  // calculate amount
	return amount;       // return the amount
}
StudentCgpa::StudentCgpa(){        // constructor to give the inital value
	cgpa = 0;
	gpa = 0;
//	fee = StudentFee();        // constructor of class StudentFee
}
StudentCgpa::StudentCgpa(double cgpa, double g, double a, double t, string n, string i, string c){   // overloaded constructor assign the value to all varible in these three classes
	this->cgpa = cgpa;
	gpa = g;
	fee = StudentFee(a,t,n,i,c);     // overloaded constructor in class StudentFee
}
StudentCgpa::~StudentCgpa(){      // destructor
    cgpa = 0;
    gpa = 0;
}
void StudentCgpa::setAll(double cgpa, double g, double a, double t, string n, string i, string c){  // mutator, function that assign value to all the varible in three classes 
	this->cgpa = cgpa;
	gpa = g;
	fee.setFeeAndStudent(a,t,n,i,c);  // mutator, set function in class StudentFee
}
void StudentCgpa::setCgpa(double cgpa){  // mutator, function that assign cgpa
	this->cgpa = cgpa;
}
void StudentCgpa::setGpa(double g) {  // mutator, function that assgin gpa
	gpa = g;
}
double StudentCgpa::getAccomadationFee(){      // accessor, function to get the accodamation fee from class StudentFee
	return fee.getAccomadationFee(); 
}
double StudentCgpa::getTuitionFee(){ // accessor, function to get the tuition fee from class StudentFee
	return fee.getTuitionFee();
}
double StudentCgpa::getCgpa(){ // accessor, function to get the cgpa of student
	return cgpa;
}
double StudentCgpa::getGpa(){        // accessor, function to get the current gpa of student
	return gpa;
}
double StudentCgpa::getNewCgpa(){               // accessor, function to get the new cgpa of student  
	return cgpa;
}
void StudentCgpa::print(){           // display all the varible
	fee.print();
	cout << "Current Cgpa: " << cgpa << endl;
    cout << "Current gpa: " << gpa << endl;
}
StudentCgpa StudentCgpa::operator+(StudentCgpa a){  // operator overloading + to do addition between cgpa and gpa
	StudentCgpa thisfunc;
	thisfunc.cgpa = cgpa + a.gpa;            // calculate 
	return thisfunc;
}
StudentCgpa StudentCgpa::operator/(double c){         // operator overloading / to do division between cgpa and double variable c
	cgpa = cgpa / c;       // calculate
    return *this;
}
