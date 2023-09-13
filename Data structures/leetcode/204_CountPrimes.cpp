/*
Count primes till N

time complexity O(n * log(log n))
*/


#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
    vector<bool>arr(n+1 , true);
    int count =0;
    arr[0] = arr[1] = false;

    for(int i = 2; i< n ; i++){
        if(arr[i]){
            count++;
            for(int j = 2*i ; j<n ; j = j+i){
            arr[j] =0;
          }
        }
      }
      return count;
        
}

int main(){
    int n ;
    cin>>n;
    cout<<countPrimes(n);
}