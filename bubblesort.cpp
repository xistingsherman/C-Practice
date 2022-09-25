#include <iostream>
using namespace std;

void bubbleSort(int array[], int n){
    int i, j;
    for (int i=0; i < n - 1; i++){
        for(j=0; j < n - i - 1; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}

void print(int array[], int size){
    int i;
    for(i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << endl;
}

int main(){
    int array[] ={2,35,6,1,2,3,4};

    int N = sizeof(array)/sizeof(array[0]);
    bubbleSort(array,N);

    cout << "Sorted: \n";
    print(array,N);
    return 0;
}