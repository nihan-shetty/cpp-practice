#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    int n;
    cout<<"Enter the size of queue : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    int target;
    cout<<"Enter the element to count it's occurrences : ";
    cin>>target;

    int count = 0;

    for(int i=0;i<n;i++){
        if(q.front() == target){
            count++;
        }
        q.pop();
    }

    if(count>0){
        cout<<target<<" Found"<<endl;
        cout<<"Occurrences : "<<count<<endl;
    }else{
        cout<<target<<" is not Found"<<endl;
    }

    return 0;
}