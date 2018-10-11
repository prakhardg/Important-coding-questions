/*

Given an array of integers of size N. Assume ‘0’ as invalid number and all other as valid number. Write a program that modifies the array 
in such a way that if next number is  valid number and is same as current number, double the current number value and replace the next number 
with 0. After the modification, rearrange the array such that all 0’s are shifted to 
the end and the sequence of the valid number or new doubled number is maintained as in the original array.


*/

#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
#define ll long long
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    vector<int>v(n);
    vector<int> ans;
    for_i{
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++){
        if(v[i] && v[i+1] && v[i]== v[i+1]){
            v[i] <<=1;
            v[i+1]=0;
        }
    }
    for_i {
        if(v[i]) ans.push_back(v[i]);
    }
    int s = ans.size();
    for(int i=0; i< n-s; i++) ans.push_back(0);
    for_i cout<<ans[i]<<" ";
    cout<<endl;
 }
 
 return 0;
}