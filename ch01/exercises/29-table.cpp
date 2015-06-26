/*
29 - (Table) Using the techniques of this chapter, write a program that calculates the squares and
cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values:
*/

#include <iostream>
using namespace std;

int main(){
   cout << "\nnumber\tsquare\tcube\n";
   int num = 0;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
   num = num + 1;
   cout << num << '\t' << num * num << '\t' << num * num * num << endl;
   return 0;
}