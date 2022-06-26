#include <iostream>
  
using namespace std;
  
int main()
{
   int total;
   cout << "Please enter a number: ";
   int x1;
   cin >> x1;
   total = total + x1;
   cout << "total: " << total << endl;
   cout << "Please enter a number: ";
   int x2;
   cin >> x2;
   total = total + x2;
   cout << "total: " << total << endl;
   int average = total / 2;
   cout << "total: " << total << endl;
   cout << "The average is " << average << endl;
   return 0;
}
