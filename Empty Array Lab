/**********************************************************************
 *Program Name   :   CSC 110 Empty Array Insert
 *Author         :   Natalia Montilla
 *Due Date       :   April 11, 2016
 *Course/Section :   CSC 110 - 001 
 *Program Description: Write a program to input an unknown number of
 *   values into an empty array.  It is important that the array
 *   not have any values in it that you want saved prior to 
 *   implementing this code
 *
 *BEGIN Array Input Using Sentinel Value
 *   Set Count = 0
 *   Input first value or quit value
 *   WHILE (User did not enter the quit value) 
 *      Store the input in the array at position Count
 *      Increment Count by 1
 *		IF (the array has been filled)
 *         Output message indicating max inputs have been reached
 *         Set the Input variable to the quit value
 *      ELSE //the array has not been filled
 *         Prompt the user for next input value or quit value
 *      END IF
 *   END WHILE 
 *   Clear Screen
 *   Display Heading
 *   FOR (Each value in the array)
 *      Display value on its own line
 *   END FOR
 *END Lab01 - Array Input Using Sentinel Value
 *********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	//local constants
    const int SIZE = 20;      //max size for array
    const int QUIT = -1;      //sentinal value

	//local variables
    int Empty_Array [SIZE];   //empty array
    int Value;                //values to be stored into array
    int Count = 0;            //cont which holds location in the array
    int Pos;                  //tells position in array like count 



    	/**************************start main program*********************/
    //BEGIN Array Input Using Sentinel Value

    //Input first value or quit value
    cout << "Enter Value or QUIT: ";
    cin  >> Value; 

    //WHILE (User did not enter the quit value) 
    while (Value != QUIT)
    {

    //Store the input in the array at position Count
    	Empty_Array[Count] = Value;
    	//Increment Count by 1
       Count ++;
  
    //IF (the array has been filled)
    if (Count == SIZE)
    {
    //Output message indicating max inputs have been reached
       cout << "Array is now full";
    //Set the Input variable to the quit value
       QUIT >> Value;

     //ELSE //the array has not been filled
    }
    else  	
    //Prompt the user for next input value or quit value
       cout << "Enter Value or QUIT: ";
       cin  >> Value; 

    //END WHILE 
    }

    //Clear Screen
    //system("cls");

    //Display Heading
    cout << "Values in the Array" << endl;

    //FOR (Each value in the array)
    for(Pos = 0; Pos < Count; Pos ++)
    {

    //Display value on its own line
    cout << Empty_Array [Pos] << endl;

    }//END FOR

    cout << endl;
    
}//END Lab01 - Array Input Using Sentinel Value


