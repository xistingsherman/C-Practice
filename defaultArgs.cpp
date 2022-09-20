#include <cmath>
#include<iostream>
using namespace std;
 

int sum(int x, int y, int z = 1, int w = 2)
{
    return (x + y + z + w);
}
 
// Driver Code
int main()
{
    int test1 = 0;
    int test2 = 0;
    int test3 = 0;
    int test4 = 0;

    cin >> test1;
    cin >> test2;
    cin >> test3;
    cin >> test4;

    if (test3 != 0 && test4 != 0){
        cout << "test case 1" << endl;
        cout << sum(test1, test2) << endl;
    }
    else if(!isnan(test3) && isnan(test4)){
        cout << "test case 2" << endl;
        cout << sum(test1,test2,test3) << endl;
    }
    else if(!isnan(test4) && !isnan(test3)){
        cout << "test case 3" << endl;
        cout << test3 << endl;
        cout << test4 << endl;
        cout << sum(test1,test2,test3,test4) << endl;
    }

    cout << sum(test1,test2,test3,test4) << endl;


    return 0;
}