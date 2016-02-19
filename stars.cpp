#include <iostream>
using namespace std;

int starstoprint (int numberstars)
{
 int counter;

 while (numberstars != counter)
 {
   counter++;
   cout << '*';
 }
}

int main(){

int number;
char decision;

cout << "Enter the number of stars to be displayed: " << endl;
cin >> number;

starstoprint (number);


}
