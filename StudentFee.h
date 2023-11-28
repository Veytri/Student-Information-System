//header file for class StudentFee

#ifndef STUDENTFEE_H
#define STUDENTFEE_H
#include "Student.h"


class StudentFee:public Student{           // derived class for class Student
	private:                   // private varible
		double accomadationFee;
		double tuitionFee;
	public:                // public varible
		StudentFee();                 // constructor
		StudentFee(double, double, string, string, string);    // overloaded constructor
		~StudentFee();       // destructor
		void setFeeAndStudent(double, double, string, string, string);     // mutator, function to set value of variable of class StudentFee and class Student
		void setAccomadationFee(double);   // mutator, function to assign accomadation fee of student
		void setTuitionFee(double);  // mutator, function to assign tuition fee of student
		double getAccomadationFee();      // accessor, function to get the accomadation fee of student
		double getTuitionFee();       // accessor, function to get the tuition fee of student
		string getName();            // accessor, function to get the name of student from class Student
	    void print();         // function display the varible of class StudentFee as well as class Student
	   
};
#endif
