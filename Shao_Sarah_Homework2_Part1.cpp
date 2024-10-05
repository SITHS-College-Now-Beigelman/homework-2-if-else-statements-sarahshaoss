//Sarah Shao
//10/01/2024
//Homework 2 Part 1

#include <iostream.h> // adds library

using namespace std; //shortcut

int main()
{
    int month; //creates a variable to store data for month
    int day;   //creates a variable to store data for days

    cout << "Enter the month:\n> ";
    cin >> month; //stores data in month
    cout << "Enter the day:\n> ";
    cin >> day;   //stores data in days

    if ((month == 3 && day >=21) || (month >= 3 && month < 6) || (month == 6 && day <= 20))
            cout << "It is now Spring!";
    else 
        if ((month == 6 && day >=21) || (month >= 6 && month < 9) || (month == 9 && day <= 22))
                cout << "It is now Summer!";
        else
            if ((month == 9 && day >=23) || (month >= 9 && month < 12) || (month == 12 && day <= 21))
                    cout << "It is now Fall!";
            else
            if ((month == 12 && day >=22) || (month < 3) || (month == 3 && day <= 20))
                    cout << "It is now Winter!";
        
    return 0;

        /* Enter the month:
        > 9
        Enter the day:
        > 22
        It is now Summer! */
}
