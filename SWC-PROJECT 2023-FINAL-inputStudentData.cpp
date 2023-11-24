/*
   Program purpose: STUDENT RECORD MANAGEMENT SYSTEM FOR STARLIGHT HIGH SCHOOL
   Programmer	: MUHAMMAD ARIF FARHAN BIN MOHD SAIDINAR (JAI)
   ID			: AM2307014042
   Date			: 21 NOV 2023
   Subprogram	: function inputStudentData
   Programmed by: MUHAMMAD ARIF FARHAN
*/

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