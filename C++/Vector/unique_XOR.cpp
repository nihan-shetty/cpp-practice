#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter only one unique value"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        ans^=nums[i];
    }

    cout<<"The Unique Value is : ";

    cout<<ans<<endl;

    return 0;
}