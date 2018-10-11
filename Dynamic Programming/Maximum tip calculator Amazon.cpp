#include<iostream>
using namespace std;
int cal_profit(int , int , int);
int maxx(int ,int);

int *A,*B;
int N,x,y;
int main()
{

int T;
cin>>T;

for(int r=0;r<T;r++)
{


cin>>N;
cin>>x;
cin>>y;
 A=new int[N];
 B=new int[N];
int i;
for( i=0;i<N;i++)
{
    cin>>A[i];
}
for(i=0;i<N;i++)
{
    cin>>B[i];

}

int profit=cal_profit(0,0,0);



cout<<profit<<endl;

}

}
int cal_profit(int a, int b, int pos)
{
    int P_A=0,P_B=0;
    if (pos>N  )
        return 0;

        if(a+b==N)
            return 0;

    if(a<x)
    {

       P_A=A[pos]+cal_profit(a+1,b,pos+1);

    }


    if(b<y)
    {
        P_B=B[pos]+cal_profit(a,b+1,pos+1);

    }



        return max(P_A, P_B);
}


