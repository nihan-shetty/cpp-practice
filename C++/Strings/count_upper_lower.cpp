#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter a word to check how many upper and lower case characters are there"<<endl;
    cin>>name;

    int i=0;
    int upper_case=0;
    int lower_case=0;

    while(i<name.length()){
        if(name[i]>='A' && name[i]<='Z'){
            upper_case++;
        }
        else if(name[i]>='a' && name[i]<='z'){
            lower_case++;
        }
        i++;
    }

    cout<<"Number of upper case are:"<<upper_case<<endl;
    cout<<"Number of lower case are:"<<lower_case<<endl; 

    return 0;
}