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
#include <string>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
	//local constants
    string P;          //power operation
    string A;          //absolute power operation
	//local variables
    int Num_1;         //first number entered
    int Num_2;         //second number entered
    char Opp;        //operation chosen
    int Ans;           //answer
    string input; // buffer for input
       /**************************start main program*********************/
       
    //BEGIN Function Lab.

       //Input Operation
       cout << "\n";
       cout << setw(30) << "Function Lab" << endl; 
       cout << "\n"; 
       cout << setw(26) << "Input operation Abs Value (A), Power (P) or QUIT (Q): "; 
       cin  >> input;

       // first character only from input
       Opp = input[0]; 
       //check to see if Opp is uppercase (if not, we'll convert to uppercase)
       
       if(islower(Opp))
          { //Convert Operation to uppercase
           Opp = toupper(Opp); }

       // WHILE (Operation != QUIT)

       while (Opp != 'Q'){

            //Input 2 #'s
            cout << "\n";
       	    cout << setw(36) << "Enter first number: ";
       	    cin  >> Num_1; 
       	    cout << "\n";
       	    cout << setw(37) << "Enter second number: ";
       	    cin  >> Num_2; 
       	    cout << "\n";

            //IF (Operations Power)
            if (Opp == 'P'){ 
            
               //Answer = 1st # raised to 2nd power)
               Ans = pow(Num_1, Num_2); 
               //Display answer
               cout << setw(31) << "Answer is: " << Ans << endl;
               cout << "\n";
                                       }
            //ELSE opperator is power
            else if (Opp == 'A'){
                
                //Answer = Absolute VAlue of 1st - 2nd
                Ans = abs((Num_1) - (Num_2)); 
                //Display answer 
                cout << "Answer is: " << Ans << endl;
                               } //END IF
   
            //ELSE 
            else
            {
            //Dispaly Error	
            cout << "Error"; }
    
             
                              
            	
       //Input Operation
       cout << setw(26) << "Input operation Abs Value (A), Power (P) or QUIT (Q): "; 
       cin  >> Opp; 
       
       if(islower(Opp))
          { //Convert Operation to uppercase
           Opp = toupper(Opp); }

    }   
    //END WHILE
}
