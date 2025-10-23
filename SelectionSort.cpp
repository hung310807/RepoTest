#include<iostream>

using namespace std;

int main(){
    int arr[] = {4, 10, 1, 23, 103, 34, 17, 53, 64, 71};
    int size = sizeof(arr) / 4;
    for(int i = 0; i < size - 1; ++i){
        short int *ptr = new short int;
        *ptr = i;
        for(int j = i + 1; j < size; ++j){
            if(arr[j] < arr[*ptr]){
                *ptr = j;
            }
        }
        swap(arr[i], arr[*ptr]);
        for(int j = 0; j < size; ++j){
            cout<<arr[j]<<" ";
        }
        delete ptr;
        cout<<"\n";
    }
    return 0;
}