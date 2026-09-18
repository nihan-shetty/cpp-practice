#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter a sentence"<<endl;
    getline(cin,name);    
    
    int i=0;
    int count_words = 0;

    while(i<name.length()){
        if(i==0){
            count_words++;
        }
        else if(name[i-1] == ' '){
            if(name[i] != ' '){
                count_words++;
            }
        }
        i++;
    }

    cout<<count_words<<endl;

    return 0;
}