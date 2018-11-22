#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//define the "Towers of Hanoi" function
void towersOfHanoi(int, char, char, char);

int main() 
{
  //define variables
  int diskNum;

  //ask for number of disks
  cout << "Enter the number of disks: ";
  cin >> diskNum;
  cin.ignore();

  //send the number of disks to the tower function
  towersOfHanoi(diskNum, 'A', 'C', 'B');
  return 0;
}

//the tower function itself
void towersOfHanoi(int diskNum, char firstTower, char lastTower, char otherTower)
{
    if (diskNum == 1)
    {
        cout << "Move disk 1 from tower " << firstTower << " to tower " << lastTower << endl;
        cout << "Press enter to continue.";
        cin.ignore();
        return;
    }
    towersOfHanoi(diskNum - 1, firstTower, otherTower, lastTower);
    cout << "Move disk " << diskNum <<  " from tower " << firstTower << " to tower " << lastTower << endl;
    cout << "Press enter to continue.";
    cin.ignore();
    towersOfHanoi(diskNum - 1, otherTower, lastTower, firstTower);
}
