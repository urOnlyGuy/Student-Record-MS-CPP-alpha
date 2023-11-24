/*
   Program purpose: STUDENT RECORD MANAGEMENT SYSTEM FOR STARLIGHT HIGH SCHOOL
   Programmer	: MUHAMMAD ARIF FARHAN BIN MOHD SAIDINAR (JAI)
   ID			: AM2307014042
   Date			: 21 NOV 2023
   Subprogram	: function displayStudentRecords
   Programmed by: MUHAMMAD ARIF FARHAN
*/

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