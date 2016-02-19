#include <iostream>
using namespace std;

int superpower (int first, int second)
{
  int counter;
  int sum;

  do
  {

    counter++;
    sum = first*counter*counter;


  } while (counter != second);

  cout << first << " to the " << second << " power is: " << sum << endl;

}


int main(){

int a, b;

cout << "Enter the first number:" << endl;
cin >> a;
cout << "Enter the second number:" << endl;
cin >> b;

superpower (a,b);

}
