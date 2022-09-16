#include <iostream>
using namespace std;
// Create a function

void myFunction() {
  cout << "myFunction in progress....\n";
}

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

void myFunction(string fname, int age){
    cout << fname << " Refnes. " << age << " years old. \n";
}

int myFunction(int x) {
  return 5 + x;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  myFunction(); // call the function
  
  myFunction("Will");
  myFunction("Lee");
  myFunction("Bowser");
  myFunction("Bowser", 10);

  cout << "\n" << myFunction(3) << "\n";

   int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";
  
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;

  return 0;
}


// Outputs "I just got executed!"