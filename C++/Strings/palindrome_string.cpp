#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter a word to check whether it is a palindrome"<<endl;
    cin>>name;

    int i = 0;
    int j = name.length()-1;

    while(i<j){
        if(name[i] == name[j]){
            i++;
            j--;
        }else{
            break;
        }
    }

    if(i>=j){
        cout<<"It is a Palindrome"<<endl;
    }else{
        cout<<"It is not a Palindrome"<<endl;
    }

    return 0;
}