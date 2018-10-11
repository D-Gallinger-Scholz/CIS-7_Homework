#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {
  //create variables
  string num1; //hopefully your 1st number
  string num2; //hopefully your 2nd number
  int a; //1st user number
  int b; //2nd user number
  int r;
  int gcd; //greatest common divisor
  clock_t t; //for measuring time
  double duration; //for displaying time
  char closingTime = 'Y';

  //cycle through the program until the user quits
  while(closingTime == 'Y' || closingTime == 'y'){
    //ask the user to input a number
    cout << "Enter your 1st number: ";
    getline(cin, num1);
    //time to get the second number
    cout << "Enter your 2nd number: ";
    getline(cin, num2);
    try{
      a = stoi(num1);
      b = stoi(num2);
    }
    catch(...){
      cout << "Your numbers aren't valid. Please try again." << endl << endl;
      continue;
    }
    
    //start the clock
    t = clock();
    //got two numbers? time to make sure they're positive integers
    if(a < 0 || b < 0){
      cout << "Your numbers aren't valid. Please try again." << endl << endl;
      continue;
    }
    //what's the bigger number? who cares, its gonna be a
    if(b > a){
      r = a;
      a = b;
      b = r;
      r = 0;
    }
    //let's find that gcd
    if(a == 0 || b == 0){
      gcd = 1;
    }
    else{
      r = a%b;
      while(r > 0){
        a = b;
        b = r;
        r = a%b;
      }
      gcd = b;
    }
    //stop the clock
    duration = clock() - t / (double) CLOCKS_PER_SEC;
    //tell 'em what their gcd is
    cout << "The greatest common divisor is: " << gcd << endl;
    //and how long did that take to calculate?
    cout << "This gcd took " << duration << " nanoseconds to calculate." << endl << endl;
    //do you want to continue?
    cout << "Do you want to find another gcd (Y/N): ";
    cin.get(closingTime);
    cin.ignore();
    cout << endl;
  }
  return 0;
}
