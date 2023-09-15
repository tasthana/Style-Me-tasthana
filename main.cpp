#include <iostream>
#include "temp.h"
using namespace std;

/*
 * The following program takes user input and converts an integer into either Celsius or Fahrenheit.
 * The value choice chooses either or, with 1 representing Fahrenheit & setf(), and any other number designated to Celsius/setc().
 * The t value is set for user input, to enter the temperature.
 * The value, if less than 30 and greater than 0, returns beautiful, while greater than 30 equals hot, and less than 0 equals cold.
 */

// call based
int getUserInput();

int main()
{
    // user input values for type of return and int
    int choice = getUserInput();
    int tTemp = getUserInput();

    // validating choice to make sure that it is an integer
    while (!(cin >> choice))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    // validating t to make sure that it is an integer
    while (!(cin >> tTemp))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    //setting temperature
    temp myTemp;

    // validating choice in terms of knowing whether the choice is Fahrenheit/Celsius.
    if (choice == 1)
        myTemp.setf(tTemp);
    else
        myTemp.setc(tTemp);

    // declaring string
    string aString;

    // return statements based on answer in range
    if (myTemp.getc() < 0)
        aString="cold";
    else if (myTemp.getc() > 30)
        aString="hot";
    else
        aString="beautiful";

    cout << "Hello, " << aString << " World!" << endl;
    return 0;
}

/*
 * The function below is used for user input.
 * using cin to read user input and enter loop if the answer is not an integer.
 * cin.clear removes error flags for more tries.
 */

int getUserInput ()
{
    int input;
    while(!(cin >> input))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Invalid input, please try another integer:" ;
    }
    return input;
}