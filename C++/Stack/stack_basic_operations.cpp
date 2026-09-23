#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    
    int n;
    cout<<"Enter the size of stack : ";
    cin>>n;

    cout<<endl;
    cout<<"Enter the elements : ";

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }

    cout<<"Top element is : "<<s.top()<<endl;
    cout<<"Size of stack is : "<<s.size()<<endl;

    cout<<"We have removed the top most element"<<endl;
    s.pop();

    cout<<"Top elements is : "<<s.top()<<endl;
    cout<<"Size of the stack is : "<<s.size()<<endl;

    cout<<"Checking whether stack is empty or not"<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}