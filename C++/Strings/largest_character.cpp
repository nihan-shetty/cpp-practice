#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter a word to see which is largest in ASCII value"<<endl;
    cin>>name;

    char largest = name[0];

    int i=1;
    while(i<name.length()){
        if(name[i] > largest){
            largest = name[i];
        }
        i++;
    }

    cout<<largest<<endl;

    return 0;
}