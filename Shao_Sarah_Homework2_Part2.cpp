//Sarah Shao
//10/01/2024
//Homework 2 Part 2

#include <iostream>

using namespace std;

int main() {
  double judge1; //creates a variable for judge 1's data
  double judge2; //creates a variable for judge 2's data
  double judge3; //creates a variable for judge 3's data
  double judge4; //creates a variable for judge 4's data
  double judge5; //creates a variable for judge 5's data
  double judge6; //creates a variable for judge 6's data
  double max = 0;//creates a variable for the max score
  double min = 0;//creates a variable for the min score

  cout << "What is Judge 1's score?\n> "; 
  cin >> judge1; //asks for judge 1's score and stores it in judge1
  cout << "What is Judge 2's score?\n> ";
  cin >> judge2; //asks for judge 2's score and stores it in judge2
  cout << "What is Judge 3's score?\n> ";
  cin >> judge3; //asks for judge 3's score and stores it in judge3
  cout << "What is Judge 4's score?\n> ";
  cin >> judge4; //asks for judge 4's score and stores it in judge4
  cout << "What is Judge 5's score?\n> ";
  cin >> judge5; //asks for judge 5's score and stores it in judge5
  cout << "What is Judge 6's score?\n> ";
  cin >> judge6; //asks for judge 6's score and stores it in judge6

  //finding maximum of the numbers
  if (judge1 > judge2 && judge1 > judge3 && judge1 > judge4 && judge1 > 5 && judge1 > judge6) //if judge 1 is the max, it should be greater than the value of the other judge's scores
    max = judge1; //changes the value of max to judge1
  else if (judge2 > judge1 && judge2 > judge3 && judge2 > judge4 && judge2 > 5 && judge2 > judge6) //if judge 2 is the max
    max = judge2; //changes the value of max to judge2
  else if (judge3 > judge1 && judge3 > judge2 && judge3 > judge4 && judge3 > 5 && judge3 > judge6) //if judge 3 is the max
    max = judge3; //changes the value of max to judge3
  else if (judge4 > judge1 && judge4 > judge2 && judge4 > judge3 && judge4 > 5 && judge4 > judge6) //if judge 4 is the max
    max = judge4; //changes the value of max to judge4
  else if (judge5 > judge1 && judge5 > judge2 && judge5 > judge3 && judge5 > 4 && judge5 > judge6) //if judge 5 is the max
    max = judge5; //changes the value of max to judge5
  else if (judge6 > judge1 && judge6 > judge2 && judge6 > judge3 && judge6 > 4 && judge6 > judge5) //if judge 6 is the max
    max = judge6; //changes the value of max to judge6


//finding minimum of the numbers
  if (judge1 < judge2 && judge1 < judge3 && judge1 < judge4 && judge1 < judge5 && judge1 < judge6) //if judge 1 is the min, it should be less than the value of the other judge's scores
    min = judge1; //changes the value of min to judge1
  else if (judge2 < judge1 && judge2 < judge3 && judge2 < judge4 && judge2 < 5 && judge2 < judge6) //if judge 2 is the min
    min = judge2; //changes the value of min to judge2
  else if (judge3 < judge1 && judge3 < judge2 && judge3 < judge4 && judge3 < 5 && judge3 < judge6) //if judge 3 is the min
    min = judge3; //changes the value of min to judge3
  else if (judge4 < judge1 && judge4 < judge2 && judge4 < judge3 && judge4 < judge5 && judge4 < judge6) //if judge 4 is the min
    min = judge4; //changes the value of min to judge4
  else if (judge5 < judge1 && judge5 < judge2 && judge5 < judge3 && judge5 < judge4 && judge5 < judge6) //if judge 5 is the min
    min = judge5; //changes the value of min to judge5
  else if (judge6 < judge1 && judge6 < judge2 && judge6 < judge3 && judge6 < judge4 && judge6 < judge5) //if judge 6 is the min
    min = judge6; //changes the value of min to judge6
    
  cout << "Final score: "<< ((judge1 + judge2 + judge3 + judge4 + judge5 + judge6) - max - min)/4; //outputs the final score by adding all the scores and subtracting the max and min scores and dividing by 4

return 0; //returns code to 0
}
