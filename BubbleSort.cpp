#include<iostream>

using namespace std;

int main(){
    int arr[] = {4, 10, 1, 23, 103, 34, 17, 53, 64, 71, 32, 89, 17, 55};
    int size = sizeof(arr) / 4;
    for(int i = 0; i < size; ++i){
        for(int j = size - 1; j > i; --j){
            if(arr[j] < arr[j - 1]){
                swap(arr[j], arr[j - 1]);
            }
        }
        for(int j = 0; j < size; ++j){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}