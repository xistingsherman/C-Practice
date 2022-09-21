#include <iostream>

using namespace std;
class operation{
    int a, b, c, addition, subtraction, multiplication;
    float division;

public: 
    void get();
    void add();
    void subtract();
    void multiply();
    void divide();
};

inline void operation :: get(){
    cout << "Enter value 1: ";
    cin >> a;
    cout << "Enter value 2: ";
    cin >> b;
    cout << "Enter value 3: ";
    cin >> c;
}

inline void operation :: add(){
    addition = a + b + c;
    cout << "The addition of all numbers is: " << a + b + c << endl;
}

inline void operation :: subtract(){
    subtraction = a - b - c;
    cout << "The subtraction of all numbers is: " << a - b - c << endl;
}

inline void operation :: multiply(){
    multiplication = a * b * c;
    cout << "The subtraction of all numbers is: " << a * b * c << endl;
}

inline void operation :: divide(){
    division = a / b / c;
    cout << "The division of all numbers is: " << division << endl;
}

int main(){
    cout << "This is a program that uses inline functions" << endl;
    operation s;
    s.get();
    s.add();
    s.subtract();
    s.multiply();
    s.divide();
}