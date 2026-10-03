#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int target;
    cout<<"Enter the target to be found which is in vector : ";
    cin>>target;

    cout<<"Every occurrences will be found"<<endl;
    cout<<"Index will be returned"<<endl;
    cout<<"The element found at : ";

    bool found = false;

    for(int i=0;i<n;i++){
        if(nums[i] == target){
            found = true;
            cout<<i;
        }
    }
    cout<<endl;

    if(found){
        cout<<"Successfully found"<<endl;
    }else{
        cout<<"Element is not in vector"<<endl;
    }

    return 0;
} 