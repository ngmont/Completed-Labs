/********************************************************************
 *Program Name   : Lab - Calculate 17%
 *Author         : Natalia Montilla
 *Date           : March 28th, 2016
 *Course/Section : CSC110-002
 *Program Description: 
 *
 *BEGIN Find 17%
 *   Input 2 Number or QUIT
 *   WHILE (Number != QUIT)
 *    IF (Number is in greater than MIN and less than MAX) 
 *      Answer is 17% of Number
 *      Display Answer
 *    ELSE
 *      Display Error
 *    END IF 
 *      Input Next Number or QUIT
 *    END WHILE
 *END Lab Find 17%
 ********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	
    //local constants
    const int MIN = 50;         //minimum number
    const int MAX = 75;         //maximum number
    const int QUIT = -1;        //sentinal value
    const float PERCENT = .17;  //17%
    
    //local variables
    int Num;                  //any number
    float Ans;                //the answer in decimal form
	
    /**************************start main program*********************/

    //Input Number (or Quit)
    cout << "\n";
    cout << setw (48) << "Calculate 17% Lab ";
    cout << "\n\n";
    cout << setw (45) << "Num or QUIT: " ; 
    cin  >> Num; 
    
    //WHILE( Number != Quit)
    while(Num != QUIT)
 	{
    
        //if the number is within range
        if (Num > MIN && Num < MAX)
        {
           // Answer is 17% of Number
           Ans = (float)Num * PERCENT;
         
           //Display Answer 
           cout << "\n";
           cout << setw (39) << "Answer:" << setw (7) << Ans;                 
        }
        //number is not in range
        else {
            cout << "\n";
            cout << setw (40) << "Error"; //END IF                              
        }
        //Input Next Number (or Quit)
        system ("cls");
        system ("pause");
       
        cout << "\n\n";
        cout << setw (45) << "Num or Quit: " ; 
        cin  >> Num; 

       
        } //End while loop
         cout << "\n\n\n\n";
         
} //END Find 17%
