// header file for class StudentCgpa
#ifndef STUDENTCGPA_H
#define STUDENTCGPA_H
#include "StudentFee.h"


class StudentCgpa{       // class StudentCgpa
	private:            // private variable
		double cgpa;
		double gpa;
		StudentFee fee;     // composition of class StudentFee
	public:         // public member 
		StudentCgpa();        // constructor
		StudentCgpa(double, double, double, double, string, string, string); // overloaded constructor
		~StudentCgpa();           // destructor
		void setAll(double, double, double, double, string, string, string);   // mutator, function that assign value to varible in all the class
		void setCgpa(double);   // mutator, function that assign value to cgpa
		void setGpa(double);  // mutator, function that assign value to gpa
		void print();      // function to display variable in all the class
		double getAccomadationFee();  // accessor, function to get the accomadation fee of student from class StudentFee
		double getTuitionFee();      // accessor, function to get the tuition fee of student from class StudentFee
		double getCgpa();     // accessor, function to get the cgpa of student
		double getGpa();      // accessor, function to get the gpa of student
		double getNewCgpa();        // accessor, function to get the new cgpa of student
		friend double amountFee(StudentCgpa); // friend function
		StudentCgpa operator+ (StudentCgpa);  // operator overloading
		StudentCgpa operator/ (double);  // operator overloading
		
};

#endif
