//********************************************************************
// *Program Name   :  Function Lab 1
 //*Author         :  Natalia Montilla
 //*Date           :  April 20th, 2016
 //*Course/Section :  CSC110-002
//*Program Description: Ask the user to input ‘A’ for absolute value or ‘P’ for 
//*power or ‘Q’ for quit.  As long as the user didn’t quit then input two numbers.  
//*If they chose ‘A’ then find the absolute value of (the first number minus the second 
//*number). If they chose ‘P’ then raise the first number to the power of the second 
//*number.  Display the answer.  If the user entered an invalid input, display an 
//*error.  Finally, prompt the user to perform another operation. I should be able 
//*to input upper or lower case letters.
//*
//*BEGIN Function Lab
//*  Input Operation
//*  Convert Operation to uppercase
//*  WHILE (Operation != QUIT)
//*     IF (Operation is valid)
//*        Input 2 #'s
//*     IF (Operations Power)
//*        Answer = 1st # raised to 2nd power)
//*     ELSE
//*        Answer = Absolute VAlue of 1st - 2nd
//*     END IF 
//*     Display Answers
//*     ELSE 
//*     Display Error
//*     END IF 
//*  Input operation
//*  Convert opperation to uppercase
//*  END WHILE 
//*END Function Lab	
    //********************************************************************//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//local constants
    string P;          //power operation
    string A;          //absolute power operation
    int Q = 0;        //sentinal value

	//local variables
    int Num_1;         //first number entered
    int Num_2;         //second number entered
    string Opp;        //operation chosen
    int Ans;           //answer

       /**************************start main program*********************/
       
//BEGIN Function Lab.

       //Input Operation
       cout << "Input operation Abs Value (A), Power (P) or QUIT (Q): "; 
       cin  >> Opp; 
       //check to see if Opp is uppercase (if not, we'll convert to uppercase)
       
       //Convert Operation to uppercase
       char toupper(Opp); 

       // WHILE (Operation != QUIT)
       while (Opp != QUIT){

            //Input 2 #'s
       	    cout << "Enter first number: ";
       	    cin  >> Num_1; 
       	    cout << "Enter second number: ";
       	    cin  >> Num_2; 

            //IF (Operations Power)
            if (Opp == P){ 

               //Answer = 1st # raised to 2nd power)
               Ans = pow (Num_1, Num_2); 
                         }
            //ELSE opperator is power
            else if (Opp == A){

                //Answer = Absolute VAlue of 1st - 2nd
                Ans = abs(Num_1) - abs(Num_2); 
                               } //END IF
            //Dispaly Answers
            cout << "Answer is: " << Ans << endl; 
                               
            //ELSE 
            else

            //Dispaly Error	
            coud << "Error"; 
            	
       //Input Operation
       cout << "Input Opperation Abs Value (A), Power (P) or QUIT (Q): "; 
       cin  >> Opp; 

       //Convert Operation to uppercase
       char toupper (Opp); 

    }//END WHILE
        
//END Function Lab	
