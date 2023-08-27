#include<iostream>
using namespace std;

int SelectionSort(int arr[], int size ){

    for(int i = 0; i < size-1 ; i++){
        int minIndex = i ;
        for(int j = i+1 ; j < size ; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
    }

    for(int i = 0 ; i < size  ; i++){
        cout<<arr[i]<<" ";
    }

}

int main() {
    int arr[10] = {1 , 8 , 4 , 17 , 2 , 15 , 7 , 8 , 9 , 10 };
    int size = 10;
    SelectionSort(arr , size);

}