#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of students"<<endl;
    cin>>n;

    vector<int> marks(n);

    cout<<"Enter students marks"<<endl;

    for(int i=0;i<n;i++){
        cin>>marks[i];
    }

    int Highest_Mark = INT_MIN;
    int Lowest_Mark = INT_MAX;
    int Sum = 0;
    float Average_Mark = 0;
    int Count = 0;

    for(int i=0;i<n;i++){
        if(marks[i]>Highest_Mark){
            Highest_Mark = marks[i];
        }
        if(marks[i]<Lowest_Mark){
            Lowest_Mark = marks[i];
        }
        if(marks[i] >= 40){
            Count++;
        }
        Sum += marks[i];
    }
    Average_Mark = (float)Sum/n;

    cout<<"Highest Mark : "<<Highest_Mark<<endl;
    cout<<"Lowest Mark : "<<Lowest_Mark<<endl;
    cout<<"Average Mark : "<<Average_Mark<<endl;
    cout<<"Passed Students : "<<Count<<endl;

    return 0;
}