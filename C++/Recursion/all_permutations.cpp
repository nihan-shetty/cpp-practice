#include<iostream>
#include<vector>
using namespace std;

void print(string& s,vector<vector<string>>& result,int idx){
    if(idx==s.length()){
        result.push_back({s});
        return;
    }
    for(int i=idx;i<s.length();i++){
        swap(s[i],s[idx]);
        print(s,result,idx+1);
        swap(s[i],s[idx]);
    }
    return;
}

int main(){
    string s ="abc";
    vector<vector<string>> result;

    print(s,result,0);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
    }
    return 0;
}