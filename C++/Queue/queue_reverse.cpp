#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    stack<int> s;

    int n;
    cout<<"Enter the size of queue : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    for(int i=0;i<n;i++){
        s.push(q.front());
        q.pop();
    }

    cout<<"Reversing the queue ...."<<endl;

    for(int i=0;i<n;i++){
        q.push(s.top());
        s.pop();
    }

    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}