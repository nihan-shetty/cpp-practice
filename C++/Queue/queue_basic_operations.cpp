#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    int n;
    cout<<"Enter the size of queue";
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    cout<<"We are removing the front element"<<endl;
    q.pop();

    cout<<"Front Element : "<<q.front()<<endl;

    cout<<"Rear Element : "<<q.back()<<endl;

    cout<<"Displaying all elements of queue"<<endl;

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    cout<<"Removing all the elements of queue"<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    cout<<"Size of the queue : "<<q.size()<<endl;

    return 0;
}