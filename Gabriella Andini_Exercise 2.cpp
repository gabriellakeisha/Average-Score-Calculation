//============================================================================
// Name        : Exercise 2
// Author      : Gabriella Keisha Andini(40392749)
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*Write a program that calculates students
grade based on the average of three scores.
Scores entered are between 0 and 100.*/

#include <iostream> //directive. standard input/output library, which provides input/output operations (cout and cin)
using namespace std;//declares the `std` namespace, which contains standard C++ library functions and objects

int main(){
    //declare the variables
    double score1, score2, score3;
    double averageScore;
    char grade;

    //Input the first score
    cout<<"Enter your first score: ";
    cin>>score1;
    //Input the second score
    cout<<"Enter your second score: ";
    cin>>score2;
    //Input the third score
    cout<<"Enter your third score: ";
    cin>>score3;

    //Calculation for the the average score
    averageScore = (score1+score2+score3)/3;

    //The grade decision based on the average score
    if (averageScore >= 90){
        grade = 'A';
    }
    else if (averageScore >=80 && averageScore <90)
        if (score3 >= 90) {
            grade = 'A';
        }
        else {
            grade = 'B';
        }
    else if (averageScore >=70 && averageScore <80)
        if (score3 >= 80) {
            grade = 'B';
        }
        else {
            grade = 'C';
        }
     else if (averageScore >=60 && averageScore <70)
        if (score3 >= 70) {
            grade = 'C';
        }
        else {
            grade = 'D';
        }
     else if (averageScore <60)
        if (score3 >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

    //The grade result
    cout<<"Your grade is: "<<grade<<endl;
    return 0;
}

