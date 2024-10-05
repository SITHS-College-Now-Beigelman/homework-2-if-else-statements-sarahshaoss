//Sarah Shao
//10/01/2024
//Homework 2 Part 1

#include <iostream> // adds library

using namespace std; //shortcut

int main()
{
    int month; //creates a variable to store data for month
    int day;   //creates a variable to store data for days

    cout << "Enter the month:\n> ";
    cin >> month; //stores data in month
    cout << "Enter the day:\n> ";
    cin >> day;   //stores data in days

  
    if ((month == 3 && day >= 21) || (month >= 4 && month < 6) || (month == 6 && day <= 20)) //checks if the month is between 3 and 6 and between 3/21 and 6/20
      cout << "It is now Spring!";
    else if ((month == 6 && day >22) || (month > 5 && month < 9) || (month == 9 && day < 23)) //checks if the month is between 6 and 9 and between 6/22 and 9/23
      cout << "It is now Summer!";
    else if ((month == 9 && day >22) || (month > 8 && month < 12) || (month == 12 && day < 22)) //checks if the month is between 9 and 12 and between 9/22 to 12/22
      cout << "It is now Fall!";
    else if ((month == 12 && day >= 22) || (month < 4) || (month == 3 && day <= 20)) //checks if the month is between 12 and 3 and between 12/22 and 3/20
        cout << "It is now Winter!";

    return 0;//ends program

        /* Enter the month:
        > 9
        Enter the day:
        > 22
        It is now Summer! */
}
