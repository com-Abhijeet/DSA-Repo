// Priority queue will return the biggest value of the queue by default ,
// by default it is always the max heap;

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> max;    // Max heap Priority queue == greatest integer at the top;

    max.push(1);
    max.push(15);
    max.push(10);
    max.push(18);
    max.push(19);
    max.push(14);

    cout<<"Top element - > "<<max.top()<<endl;
    cout<<"printing all element of the Priority Queue - >"<<endl;
    int n = max.size();
    for (int i = 0; i< n ; i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;

    cout<<"----------------------------- Mean Heap Priority Queue ------------------------------"<<endl;
    // Priority queue for mean heap 
    priority_queue<int , vector<int> , greater<int>> min;  // min heap priority queue  = = smallest integer at the top;
    
    min.push(1);
    min.push(15);
    min.push(10);
    min.push(18);
    min.push(19);
    min.push(14);

    cout<<"Top element - > "<<min.top()<<endl;
    cout<<"Printing all the elements of the mean heap priority queue - >"<<endl;
    int m = min.size();
    for(int i = 0; i< m ; i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;

}