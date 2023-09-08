#include<iostream>
using namespace std;

int main(){
    int n , m;
    cout<<"Enter the dimensions of the array: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<"Enter the element at "<<i<<","<<j<<": ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Array is : "<<endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
}