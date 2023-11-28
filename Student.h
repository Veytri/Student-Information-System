// header file for class Student

#include <iostream>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student{       //student class, base class for StudentFee class
	private:                 //private variable,can only access by its class
		string id; 
		string course;
	protected:                 //protected variable
		string name;
	public:
		Student();               // default constructor
		Student(string, string, string);  //overloaded constructor
		~Student();         // destructor
		void setName(string);  // Mutator,function to set name of student
		void setID(string);      // Mutator,function to set matric id of student
		void setCourse(string);   // Mutator,function to set course of student
		string getID();      // Accessor,function to get the matric id of student
		string getCourse();  // Accessor,function to get the course of student
		string getName();   // Accessor,function to get the name of student
		void print();     // function to display the id, course and name of student
	
};
#endif
