/*
Programmer	: 1.Muhammad Arif Farhan (Jai) - Section 2
ID			: 1. AM2307014042
			  2. AM2307013924
			  3. AM2307013924

must have 4 functions
o main() 
o inputStudentData() 
o calculateAverageScores() 
o displayStudentRecords() 
-all 4 functions need to draw design.

must have 4 arrays
string studentName[]
int studentID[]
double scores[]
int attendance[]

all commented out entry in this version of file [-FINAL (AFTER DATA VALIDATION)] have been removed. 
Refer [2ND-with data validation] for WIP version file.

//this file is to attempt for better display
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int totalStudent; //global variable

//function for user inputt
void inputStudentData(int totalStd, int stdID[], string stdName[], double scores[], int attnd[])
{
	//variable declaration
	int score;//for use in data validation for student scores
	int attendance;//for use of data validation in attendance
	
	for (int i=0; i<totalStudent; i++)
	{
	  	cout << "Student " << i+1 << endl;
	  	
	  	//input and data validation for studentID
		while (true)
    	{
	  		cout << "Student ID : ";
			cin >> stdID[i];
			
        	if (cin.fail()) // If nothing is entered it will be true
        	{   
 				cout<<"Please enter a valid student ID!!\n";  //display error message
            	cin.clear(); // For resetting the bits
            	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            	//ignore() is used to clear the wrong input entered
            	continue; // Loop will run again
        	}
        	//For clearing additional input like: 01abc(here abc is addtional)
        	cin.ignore(numeric_limits<streamsize>::max(), '\n');

        	if (cin.gcount() > 1) // it will return more than 1 if there is something which is not extracted properly
        	{   
				cout<<"Please enter a valid student ID!! >:((( \n";
				continue; // we'll consider this input to be invalid
			}
			
			break;
    	}//end of while loop for data validation of student ID

		//input student name
	  	string name;
	  	cout << "Student Name : ";
	  	getline(cin, name);
		stdName[i] = name;
   	
	  	//input and data validation for student scores using while loop
	  	while(true)
	  	{//start of while loop
	  	    cout << "Student scores : ";
	  	    cin >> score;
	  	    
	    	if( score >=0 && score <= 100)
	  		{//bound for score
				scores[i] = score;
	  		}
	    	else
			{
				cout<<"Your score should be 0 to 100. Try again\n";
				cin.clear();//to clear error due to wrong cin datatype.
			continue;
			}
		  	break;
	  	}//end of while for student scores

		//input and datavalidation for student attendance
	  	while (true)
	  	{//start of while
			cout << "Percentage of student attendance (%) :";
			cin >>attendance;
			
			if (attendance >=0 && attendance <=100)
			{
				attnd[i]=attendance;
			}
			else
			{
				cout<<"The value of your attendance should be 0 to 100. Please try again\n";
				cin.clear();
				continue;
			}
			break;
		}//end of while for student attendance
	  	cout <<"\n";
	
  	}//end of for loop
  	
}//end of inputStudentData

//function to compute average scores
double calculateAverageScores(int ttlStd, double scores[])
{
  	double ttlScores = 0;
  	
	for (int i=0; i<ttlStd; i++)
  	{
	  	ttlScores = ttlScores + scores[i];
  	}
	
	//compute avg for variable ttlScores
  	ttlScores = ttlScores/ttlStd;
  	
  	return ttlScores;
}//end of calculateAverageScores

//function to display result
void displayStudentRecords(string stdName[],int stdID[],double score[],int attendance[])
{	
	//Display header
	cout << "\n===============================================================" << endl;
	cout << setw(40) << "LIST OF ALL STUDENTS" << endl;
	cout << "===============================================================" << endl;
	cout << setw(4) << "No";
    cout << setw(12) << "Student ID";
    cout << setw(25) << "Name ";
    cout << setw(6) << "Score";
    cout << setw(15) << "Attendance(%)" << endl;
    cout << "===============================================================" <<endl;
    
    //start of data display using for loop
	for (int i=0;i<totalStudent;i++)
	{//list out data in array
		cout<<setw(4)<< i+1;
		cout<<setw(12)<< stdID[i];
		cout<<setw(25)<< stdName[i];
		cout<<setw(6)<< score[i];
		cout<<setw(15)<< attendance[i]<<endl;
		/*
		cout << "\n===============================" << endl;	
		cout << "Student " <<i+1<<endl;
		cout << "Student ID \t: " << stdID[i]<<endl;
		cout << "Student Name \t: " << stdName[i]<<endl;
		cout << "Student Score \t: "<< score[i]<<endl;
		cout << "Attendance (%) \t: "<<  attendance[i]<<endl;
		*/
	}//end of for loop
	
	//closing line
	cout<<"===============================================================" <<endl;
}//end of display function

int main() {
    // int totalStudent; //local variable //comment out for testing, compare line 20
    cout << "Welcome to Starlight Student Record Management System\n\n";
    cout << "Please enter the total number of student (at least 50 students): \n";
    cin >> totalStudent;

	//declaration of arrays
    int studentID[totalStudent];
    string studentName[totalStudent];
    double scores[totalStudent];
    int attendance[totalStudent];
    
    cout << "Please enter the student details below:" << endl;
    // call the first function inputStudentData()
    inputStudentData(totalStudent, studentID, studentName, scores, attendance);
    
    //display avg and function call calculateAverageScores
    cout << "\nAverage scores of all students: "<< calculateAverageScores(totalStudent, scores) <<endl;
    
	//display by function call displayStudentRecords 
    displayStudentRecords(studentName,studentID, scores, attendance);
    
    //extra function for user to amend data
    //cout <<"Do you wish to proceed? Type Y.\n"<<"If you have any amendment, type N\n"
	//amendStudentRecords(parameter1,parameter2)
    //
    return 0;
}