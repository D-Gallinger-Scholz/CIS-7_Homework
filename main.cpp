#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int factorial(int);

int main() 
{
  string data;
  int number;
  char closingTime = 'Y';

  while(closingTime == 'Y' || closingTime == 'y'){
    cout << "Enter a positive integer: ";
    getline(cin,data);
    try{
      number = stoi(data);
    }
    catch(...){
      cout << "Your number isn't valid. Please try again." << endl << endl;
      continue;
    }

    cout << "Factorial of " << number << " = " << factorial(number);

    cout << endl << "Do you want to find another factorial (Y/N): ";
    cin.get(closingTime);
    cin.ignore();
    cout << endl;
  }
  return 0;

}

int factorial(int number)
{
  if(number > 1)
  {
    return number * factorial(number - 1);
  }
  else
  {
    return 1;
  }
}