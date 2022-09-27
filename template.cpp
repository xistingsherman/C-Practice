#include <iostream>
using namespace std;

template <class T> class Array {
    private:
        T* pointer;
        int size;
        int multiplier;

    public:
        Array(T arr[], int s);
        void print();
};

template <typename T> Array<T>::Array(T arr[], int s){
    pointer = new T[s];
    size = s;
    multiplier = 2;

    for(int i=0; i < size; i++){
        pointer[i] = arr[i] * multiplier;
    }
}

template <typename T> void Array<T>::print(){
    for(int i=0; i < size; i++){
        if (i == 0){
            cout << " " << *(pointer + i);
        }
        else{
            cout << " - " << *(pointer + i);
        }
    }

    cout << endl;
}

int main(){
    int arr[6] = {2,3,4,5,2,3};
    Array<int> a(arr, 5);
    a.print();

    return 0;
}