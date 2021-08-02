#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<cstring>

using namespace std;

double admission ( string );
string password ();
int test ( string, int );
void answers ();


void answers ()
{
	int count = 0;
	char ans ,ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10;
	
	cout<<endl;
	cout<<"ENTER YOUR ANSWERS"<<endl;
	cout<<"( Enter A, B, C or D to mark your answers"<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 1"<<endl;
	//cin.ignore();
	//cin.clear();
	//cin.get();
	
	cin>>ans1;
	
	if ( ans1 == 'A' || ans1 == 'a' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 2"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans2;
	
	if ( ans2 == 'B' || ans2 == 'b' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 3"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans3;
	
	if ( ans3 == 'C' || ans3 == 'c' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 4"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans4;
	
	if ( ans4 == 'D' || ans4 == 'd' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 5"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans5;
	
	if ( ans5 == 'C' || ans5 == 'c' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 6"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans6;
	
	if ( ans6 == 'B' || ans6 == 'b' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 7"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans7;
	
	if ( ans7 == 'B' || ans7 == 'b' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 8"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans8;
	
	if ( ans8 == 'A' || ans8 == 'a' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 9"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans9;
	
	if ( ans9 == 'A' || ans9 == 'a' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	cout<<"Enter the answer of Question 10"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	cin>>ans10;
	
	if ( ans10 == 'C' || ans10 == 'c' )
	{
		cout<<"Your answer is marked"<<endl;
		count = count + 1;
	}

	else
	{
		cout<<"Your answer is marked"<<endl;
	}
	
	
		
	cout<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Total correct answers are:	"<<count<<endl;
	
	
	if ( count > 5 )
	{
		cout<<endl;
		cout<<"***********************************************************"<<endl;
		cout<<"CONGRATULATIONS ! YOU HAVE PASSED THE ADMISSION TEST "<<endl;
		cout<<"***********************************************************"<<endl;
	}
	
	else if ( count <= 5 )
	{
		cout<<endl;
		cout<<"***********************************************************"<<endl;
		cout<<"WELL TRIED ! BUT YOU HAVE NOT PASSED"<<endl;
		cout<<"***********************************************************"<<endl;
	}
	
}
	


int main()

{

	string regist, pass;
	int random, i;
	double score;

	cout<<endl;
	
	cout<<"DO YOU WANT TO REGISTER FOR THE ADMISSION TEST"<<endl;
	cout<<endl;
	cout<<"[ Enter 'YES' or 'yes' if you want to register ]"<<endl;
	cout<<"[ Enter anyother key, if you don't want to register ]"<<endl;
	cout<<endl;
	
	cin>>regist;
	
	cin.get();
	
	if ( regist == "yes" || regist == "YES" )
	{
		random = admission ( regist );
		
		cout<<endl;
		cout<<"YOUR REGISTRATION NUMBER IS:	"<<random<<endl;
		cout<<"----------------------------------"<<endl;
		
		pass = password();
		
		cout<<"----------------------------------"<<endl;
		cout<<"PASSWORD SET BY THE CANDIDATE:	"<<pass<<endl;
		
		score = test ( pass, random );		
		
		
	}
	
	else
	{
		cout<<"REGISTER NEXT TIME :) "<<endl;
		cout<<endl;
	}
	
}














double admission ( string regist )
 {
 
 	const int x=16;
 	
	int i, rand(), size = 0;
	int j=0;
	char grade;
	char name[25], array[25];
	double random;
	
	char cnic[x];
	
	cout<<endl;
	

        
    cout << "Enter your name: ";
    
	cin>>name;
	
    
    for ( i=0; i<15; i++ )
    {
    
        if ( (name[i] >= 'a' && name[i]<='z') || ( name[i] >= 'A' && name[i]<='Z') )
        {
            array[j++] = name[i]; 

        }
        
    }

	cout<<endl;
     cout<<"YOUR NAME IS:	" << array;    
  

		
		
		
	
		for ( i=0; i<4; i++ )
		{
		
			cout<<endl;
				cout<<"ENTER YOUR CNIC NUMBER"<<endl;
			cout<<"[ Enter 13 numbers, otherwise registration will not proceed ]"<<endl;
			cin.ignore();
			cin.clear();
			cin>>cnic;
			
			size = strlen(cnic);
	
			if ( size > 13 || size < 13 )
			{
				cout<<endl;
				cout<<"WARNING ! CNIC must have 13 DIGITS"<<endl;
				cout<<"[ Max 3 enteries are allowed ]"<<endl;
				cout<<endl;
				
			}
			
			else
			
			{
				break;
			}
		
		
		}
		
		
		cout<<endl;
	
		cout<<"ENTER TOUR GRADE IN INTERMEDIATE OR A-LEVELS"<<endl;
		cout<<"[ Enter A, B, C or D ]"<<endl;
		//cin.ignore();
		cin.clear();
		cin.get();
		
		cin.get(grade);
		
		
		switch ( grade )
		{
			case 'A':
				cout<<endl;
				cout<<"Your percentage is above 90"<<endl;
				cout<<endl;
				cout<<"You can apply for Enginneering, Medical and all the other fields"<<endl;
				cout<<"----------------------------------------------------------------"<<endl;
				break;
				
			case 'B':
				cout<<endl;
				cout<<"Your percentage is above 80 and below 90"<<endl;
				cout<<endl;
			cout<<"You can apply for Engineering and all other fields except Medical"<<endl;
				cout<<"-----------------------------------------------------------------"<<endl;
				break;
		
		case 'C':
				cout<<endl;
				cout<<"Your percentage is above 65 and below 80"<<endl;
			cout<<endl;
				cout<<"You can apply for Engineering and all other fields except Medical and Aveonics"<<endl;
				cout<<"------------------------------------------------------------------------------"<<endl;
				break;
		
			case 'D':
			cout<<endl;
				cout<<"Your percentage is below 65"<<endl;
				cout<<endl;
				cout<<"You can apply for all other fields except Engineering, Medical and Aveonics"<<endl;
				cout<<"-----------------------------------------------------"<<endl;
			break;
	
			
			default:
				cout<<endl;
				cout<<"Entered grade is incorrect"<<endl;
				cout<<"---------------------------------------"<<endl;
				cout<<"enter your grade again"<<endl;
				break;
				
		}
	
		
		srand( time(0) );
		
		random = ( rand()% (9999-1000+1) ) + 1000;
		
		
		return random;
		
		
}
		
	
	
	
	
	
		
	
string password ()
{
	string pass;
	
	cout<<endl;
	cout<<"Set your password"<<endl;
	//cin.ignore();
	cin.clear();
	cin.get();
	
	getline ( cin,pass );
	
	return pass;
}
	







int test ( string pass, int random  )
{
	
	string password1, exit;
	int registration, i, count;
	
	int sum = 0;
	
	cout<<endl;
	
		cout<<"**************************************"<<endl;
		cout<<"**************************************"<<endl;
		cout<<endl;
		cout<<"**  YOUR ADMISSION TEST HAS BEGIN   **"<<endl;
		cout<<endl;
		cout<<"**************************************"<<endl;
		cout<<"**************************************"<<endl;
		
			{
				time_t now = time(0);
				
				char* date_time = ctime(&now);
				
				cout<<endl;
				cout<<"Starting day, date and time of the test is:	"<<date_time<<endl;
				cout<<"----------------------------------------"<<endl;
				
			}
	
	for ( i=0; i<3; i++ )
	{
	
	cout<<endl;
	cout<<"ENTER YOUR REGISTRATION NUMBER"<<endl;
	cin>>registration;
	
	
	if ( registration == random )
	{
		cout<<endl;
		cout<<"Entered Registration Number is Correct"<<endl;
		cout<<endl;
		
		
		cout<<"ENTER YOUR PASSWORD"<<endl;	
		cin.ignore();
		cin.clear();
		//cin.get();
	
		getline ( cin, password1 );
	
		cout<<pass<<endl;
		
		if ( password1 == pass )
		{
			cout<<endl;
			cout<<"Entered Password is Correct"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			
			cout<<endl;
			
					
					cout<<"***************************************************"<<endl;
					
					
					cout<<"QUESTION NO 1"<<endl;
					cout<<"Watt per second is a unit of ?"<<endl;
					cout<<endl;
					cout<<"Option A : Momentum"<<endl;
					cout<<"Option B : Force"<<endl;
					cout<<"Option C : Power"<<endl;
					cout<<"Option D : None of these"<<endl;
					
					cout<<endl;
					cout<<"****************************************************"<<endl;
					cout<<endl;
					
					
					cout<<"QUESTION NO 2"<<endl;
					cout<<endl;
					cout<<"The dimensional formula ML2 T-2 represents"<<endl;
					cout<<"Option A : Moment of Force"<<endl;
					cout<<"Option B : Acceleration"<<endl;
					cout<<"Option C : Force"<<endl;
					cout<<"Option D : Momentum"<<endl;
					
					cout<<endl;
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 3"<<endl;
					cout<<endl;
					
					cout<<"After the previous census of 1981, the new population census was held"<<endl;
					
					cout<<"Option A : Jan 1995"<<endl;
					cout<<"Option B : Sep 1996"<<endl;
					cout<<"Option C : Mar 1998"<<endl;
					cout<<"Option D : July 1999"<<endl;
					
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 4"<<endl;
					cout<<endl;
					
					cout<<"Tell the name of the country which first recognised Pakistan"<<endl;
					
					cout<<"Option A : Sri Lanka"<<endl;
					cout<<"Option B : China"<<endl;
					cout<<"Option C : India"<<endl;
					cout<<"Option D : Iran"<<endl;
					
					
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 5"<<endl;
					cout<<endl;
					
					cout<<"A computer is capable of performing almost any task provided, that it can be"<<endl;
					
					cout<<"Option A : coded"<<endl;
					cout<<"Option B : memorised"<<endl;
					cout<<"Option C : reduced to a series of logical steps"<<endl;
					cout<<"Option D : analysed"<<endl;
					
					
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 6"<<endl;
					cout<<endl;
					
					cout<<"A computer possesses information"<<endl;
					
					cout<<"Option A : as directed by the operator"<<endl;
					cout<<"Option B : automatically"<<endl;
					cout<<"Option C : gradually and eventually"<<endl;
					cout<<"Option D : at once"<<endl;
					
					
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 7"<<endl;
					cout<<endl;
					
					cout<<"The ALU of a computer normally contains a number of high speed storage elements called"<<endl;
					
					cout<<"Option A : semiconductor memory"<<endl;
					cout<<"Option B : registers"<<endl;
					cout<<"Option C : hard disk"<<endl;
					cout<<"Option D : magnetic disk"<<endl;
					
					
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 8"<<endl;
					cout<<endl;
					
					cout<<"The substance that is present in minor quantity in the solution is called"<<endl;
					
					cout<<"Option A : solvent"<<endl;
					cout<<"Option B : solute"<<endl;
					cout<<"Option C : solution"<<endl;
					cout<<"Option D : electrolyte"<<endl;
					
					
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 9"<<endl;
					cout<<endl;
					
					cout<<"When the amount of the solute is expressed as gram equivalents of solute per liter (or dm3), the concentration unit is"<<endl;
					
					cout<<"Option A : normality"<<endl;
					cout<<"Option B : molarity"<<endl;
					cout<<"Option C : more fraction"<<endl;
					cout<<"Option D : all of these"<<endl;
					
					
					cout<<"****************************************************"<<endl;
					cout<<endl;
					cout<<"QUESTION NO 10"<<endl;
					cout<<endl;
					
					cout<<"What is the capital of England"<<endl;
					
					cout<<"Option A : Briminghan"<<endl;
					cout<<"Option B : Manchester"<<endl;
					cout<<"Option C : London"<<endl;
					cout<<"Option D : Leeds"<<endl;
					
					
					answers();
					break;
		
		
								
		}
		else
		{
			cout<<endl;
			cout<<"ENTERED PASSWORD IS WRONG"<<endl;
			cout<<"Try Again"<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<"[ Max 3 enteries are allowed ]"<<endl;
			cout<<endl;
			cout<<" CHECK "<<password1<<endl;
			cout<<" CHECK "<<pass<<endl;
			
			cout<<endl;
		}
	
	}
	else
	{
		cout<<endl;
		cout<<"Entered Registration Number is incorrect"<<endl;
		cout<<"Try Again"<<endl;
		cout<<endl;
		cout<<"[ Max 3 enteries are allowed ]"<<endl;
		cout<<endl;
	}
	
		
	
	} // for loop
	
	//cout<<"Allowed enteries has ended"<<endl;
	
		
}

