#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int b = s.length();
        int arr[b+1];
        arr[0]=0;
        int i=1; int len=0;
        while(i<b){
            if(s[i]== s[len] ){
                arr[i++] = ++len;
            }
            
            
            else {
                if(len) len = arr[len-1];
                else{
                    arr[i++]=0;
                }
            }
        }
        int j;
        for(j=i-1;j>=0; j--){
            if(arr[j]==1)break;
        }
        
        if(arr[b-1] % j==0 && arr[b-1])
        cout<<j<<endl;
        else cout<<b<<endl;
    }
    return 0;
}
