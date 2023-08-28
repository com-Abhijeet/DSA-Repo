#include<iostream>
using namespace std;

int main(){

    int arr[10] = { 1 , 5 , 8 , 6 , 7 , 89 , 4 , 5 , 15 , 44};
    int size  = 10;

    // loop to control the traversal / number of rounds
    for(int i = 1 ; i < size  ; i++){ 
        // controls the loop for comparing jth and jth + 1 element
        for(int j = 0 ; j < size - i  ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1] , arr[j]);
            }
        }
        

    }

    for( int i = 0; i < size ; i++)
    cout<<arr[i]<<" ";
}