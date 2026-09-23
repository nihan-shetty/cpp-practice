#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    stack<char> s;

    string name;
    cout<<"Enter a word to reverse a string : ";
    cin>>name;

    string reverse_name;

    for(int i=0;i<name.length();i++){
        char x = name[i];
        s.push(x);
    }

    cout<<"Original String : ";
    for(int i=0;i<name.length();i++){
        cout<<name[i];
    }

    while(!s.empty()){
        reverse_name += s.top();
        s.pop();
    }

    cout<<endl;
    cout<<"Reversed String : ";

    for(int i=0;i<reverse_name.length();i++){
        cout<<reverse_name[i];
    }

    return 0;
}