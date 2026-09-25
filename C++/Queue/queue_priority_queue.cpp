#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    int n;
    cout<<"Enter the size of priority queue : ";
    cin>>n;

    cout<<"Enter the elements in random way"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
    }

    cout<<"Showing the top most elements of priority queue"<<endl;

    for(int i=0;i<n;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<"Removing all the elements from priority queue"<<endl;

    if(pq.empty()){
        cout<<"Priority queue is empty"<<endl;
    }else{
        cout<<"Priority queue is not empty"<<endl;
    }

    cout<<"Size of the priority queue is : "<<pq.size()<<endl;

    return 0;
}