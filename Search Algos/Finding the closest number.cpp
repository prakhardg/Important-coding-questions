#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<stack>
using namespace std;
int bin(int a[],int n,int k)
{
    int beg=0,end=n-1,mid;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==k)

                return mid;
        else if(a[mid]>k)

                      end=mid-1;
        else

                   beg=mid+1;
    }
    if(mid<n-1 && (a[mid+1]-k) <= (k-a[mid]))

                      return (mid+1);
    else if (mid>1 && (k-a[mid-1])<(a[mid]-k))

                       return (mid-1);
    return mid;
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i)

                   cin>>a[i];
    cout<<a[ bin(a,n,k) ]<<endl;
    }
}
