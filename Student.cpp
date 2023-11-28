#include <iostream>
#include "Student.h"
using namespace std;


Student::Student(){        // defailt constructor, every variable set to "" 
	name = "";
	id = "";
	course = "";
}
Student::Student(string n, string i, string c){            // overloaded constructor, assign the value of variabke by using the value pass by parameter
	name = n;
	id = i;
	course = c;
}
Student::~Student(){       // destructor
	name = "";
	id = "";
	course = "";
}
void Student::setName(string n){          // mutator,function assign variable name by using value pass by parameter string n.
	name = n;
}
void Student::setID(string i){        // mutator,function assign variable id by using value pass by parameter string i.
	id = i;
}
void Student::setCourse(string c){   // mutator,function assign variable course by using value pass by parameter string c.
	course = c;
}
string Student::getID(){            // accesor,function to return id of student  
	return id;
}
string Student::getCourse(){             // accesor,function to return course of student
	return course;
}
string Student::getName(){            // accesor,function to return name of student 
	return name;
}
void Student::print(){                       //  function display the id, course and name of student
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Course: " << course << endl;
}
