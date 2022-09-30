#include <iostream>
using namespace std;
  
int main()
{
   bool test = true;
   cout << "first " << '1' << endl;
   cout << "next " << (test ? 3 : '1') << endl;
  
   return 0;
}