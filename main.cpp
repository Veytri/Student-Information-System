/*
-This program can calculate each amount of fee that student need to pay, latest cgpa of student, and also print the information of student
such as name of student, matric id of student, course of student, accomadation fee of student, tuition fee of student, cgpa of student,
gpa of student and latest cgpa of student
*/

#include <iostream>
#include <fstream>
#include "StudentCgpa.h"

using namespace std;
int readFile(char fileName[], int testSize){         // function that read the content of file to test the number of line in file
	ifstream myFile;
	testSize = 0;
	myFile.open(fileName);  // open the file call assignment1
    string line;
    while(!myFile.eof()){       // loop for knowing the number of line in file
    	getline(myFile, line);
    	testSize++;    // increment
    }
    
    myFile.close();      // close the file
    return testSize;             // return the number of line in file
}
// function that cin the content of file into array.
void readFile1(char fileName[], string name[], string matric[], string course[], double tuitionFee[], double accomadationFee[], double gpa[], double cgpa[], int SIZE){
	ifstream myFile;
	myFile.open(fileName);      // open the file call assignment1
	for(int i = 0; i < SIZE; i++){  // loop for cin the content in file to each of the array
	   getline(myFile, name[i], '\t');       // cin the name of student 
	   myFile >> matric[i];         // cin the matric id of student
       myFile.ignore();      // to ignore the buffer
       getline(myFile, course[i], '\t');         // cin the course of student
       myFile >> tuitionFee[i];         // cin the tuition fee of student
       myFile >> accomadationFee[i];  // cin the accomadation fee of student
       myFile >> gpa[i];    // cin the gpa of student
       myFile >> cgpa[i];         // cin the cgpa of student
       myFile.ignore(); 
  }
    myFile.close();        // close the file
}
void printNewCgpa(int SIZE, StudentCgpa s1[], string name[]){   // function that display the new cgpa of each of the student
	for(int i = 0; i < SIZE; i++){  // loop for calculate and display
    	s1[i] = s1[i] + s1[i];
    	s1[i] = s1[i] / 2;
    	cout << "New cgpa for " << name[i] << " is " << s1[i].getNewCgpa() << endl;
	}
}
int main(){
    ifstream myFile;
    int size;     // varible int size
    size = readFile("assignment1.txt", size);  // get the the number of line that return from readFile function
    string name[size], matric[size],course[size];       // array for name, matric id, course of student
    double  tuitionFee[size], accomadationFee[size], cgpa[size], gpa[size];   // array for tuition fee, accomadation fee, cgpa and gpa of student
    readFile1("assignment1.txt", name, matric, course, tuitionFee, accomadationFee, gpa, cgpa, size);   // call function readFile1 to cin the content 
       StudentCgpa s1[size];     // object of class StudentCgpa
       for(int i = 0; i < size; i++){    // loop for display the information of each of student
       s1[i].setAll(cgpa[i], gpa[i], accomadationFee[i], tuitionFee[i], name[i], matric[i],course[i]);     // pass the value to setAll function in class StudentCgpa
       s1[i].print();        // display the information
       cout << "The amount fee is RM" << amountFee(s1[i]) << endl;     // to display the amount 
       cout << "-----------------------------------" << endl;
 } 
    cout << "Press enter to see the next part...";
    cin.get();
    system("cls");     // send command cls to clear secreen
    printNewCgpa(size, s1, name);    // call function to display the new cgpa of each of the student
 
	return 0;
}
