#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"elements of the array are :";
    for(int i = 0; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void reverseArray(int arr[], int size){
    cout<<"reverse array is :";
    int revarr[size];
    for(int i = 0; i<size; i++){
        revarr[i] = arr[size-i-1];
    }
    for(int i = 0; i<size; i++){
        cout<<revarr[i]<<" ";
    }
    cout<<endl;
}

void searchArr(int arr[], int size, int srch){
    cout<<"searching for the element in array"<<endl;

    for(int i = 0; i<size; i++){
        if(arr[i]==srch){
            arr[i] = srch;
            cout<<"element found at index"<<i<<endl;
        }
        else{
            cout<<"element not found in the array"<<endl;
        }
    


    }

}
 
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array";
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    // cout<<"the elements of the array are";
    // for(int i = 0; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"now using fucntion to print"<<endl;

    printArray(arr, n);
    reverseArray(arr,n);


    return 0;

}
