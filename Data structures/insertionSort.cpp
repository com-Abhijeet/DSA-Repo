#include<iostream>
using namespace std;

int main(){
    int arr[10] = { 1 , 6 , 7 , 45 , 52 , 78 , 5 , 33 , 91 , 10};
    int size = 10;
    
    for( int i = 0 ; i< size ; i++ ){

        int temp = arr[i];

        int j = i - 1;
        for(; j >= 0 ; j--){
            if(arr[j] > temp){
                arr[j + 1] = arr[j];
            }
            else
                break;
            }
        arr[j + 1] = temp;
    }

    for( int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

}