#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        v.push_back(b);
        
    }
    sort(v.begin(),v.end());
    sort(v.rbegin(),v.rend());
    reverse(v.begin(),v.end());
    
    cout<<v.size()<<endl;
    for(auto u:v)cout<<u<<" ";
    cout<<endl;
    

}