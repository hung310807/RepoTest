#include<iostream>

using namespace std;

int main(){
    int arr[] = {4, 10, 1, 23, 103, 34, 17, 53, 64, 71, 32, 89, 17, 55};
    int size = sizeof(arr) / 4;
    for(int i = 1; i < size; ++i){
        int *ptr = new int {arr[i]};
        for(int j = i - 1; j >= 0; --j){
            if(arr[j] > *ptr){
                arr[j + 1] = arr[j];
                arr[j] = *ptr;
            }
        }
        delete ptr;
        for(int j = 0; j < size; ++j){
            cout<<arr[j]<<' '; 
        }
        cout<<endl;
    }
    return 0;
}