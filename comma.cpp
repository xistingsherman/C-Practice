#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 15;

    printf("%d", (x*=30, y));

    cout << endl;
    
    printf("%d", x);
    return 0;
}