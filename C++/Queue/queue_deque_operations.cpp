#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;

    cout<<"Size of the deque is 4"<<endl;

    int a,b,c,d;
    cout<<"Enter four elements : ";
    cin>>a>>b>>c>>d;

    dq.push_back(c);
    dq.push_back(d);
    dq.push_front(b);
    dq.push_front(a);

    cout<<"Removing one element from both the sides"<<endl;

    dq.pop_front();
    dq.pop_back();

    cout<<"Front element : "<<dq.front()<<endl;
    cout<<"Rear element : "<<dq.back()<<endl;

    cout<<"Displaying the elements"<<endl;

    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
    cout<<"removing the elements from deque"<<endl;

    cout<<"Size of the deque is : "<<dq.size()<<endl;

    return 0;
}