#include <iostream>

using namespace std;

#define msg "This is a factorial:\n"
typedef int INTEGER;

INTEGER num = 0;
INTEGER fact = 1;
INTEGER storeFactorial = 0;

INTEGER factorial(INTEGER num){
    for (INTEGER i = 1; i <= num; i++){
        fact *= i;
    }

    return fact;
}

int main(){
    num = 1;
    while (num != 0){
        cin >> num;

        storeFactorial = factorial(num);

        cout << msg;

        cout << num << "! = " << storeFactorial << endl;

        fact = 1;
    }
    

    return 0;
}