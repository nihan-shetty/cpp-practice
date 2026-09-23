#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;
    
    string name;
    cout<<"Enter the bracket combinations : ";
    cin>>name;

    bool balanced = true;
    for(int i=0;i<name.length();i++){
        if(name[i] == '(' || name[i] == '{' || name[i] == '['){
            s.push(name[i]);
        }
        else if(name[i] == ')' || name[i] == '}' || name[i] == ']'){
            if(s.empty()){
                balanced = false;
                break;
            }
            else if(name[i] == ')' && s.top() == '('){
                s.pop();
            }
            else if(name[i] == '}' && s.top() == '{'){
                s.pop();
            }        
            else if(name[i] == ']' && s.top() == '['){
                s.pop();
            }
            else{
                balanced = false;
                break;
            }
        }
    }

    if(balanced && s.empty()){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }

    return 0;
}