#include<bits/stdc++.h>
#define MARK cout<<"Here\n"
using namespace std;

struct Job{
	char id;
	int deadline;
	int profit;
};

bool logic(struct Job a, struct Job b){
	return a.profit >= b.profit;
}

int main(){
//	vector<char>
	Job a[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int mm = INT_MIN;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
    	mm = max(mm, a[i].deadline);
    }
    vector<char>p(mm,'#');
    sort(a,a+n, logic);
    for(int i=0; i<n; i++){
    	int d = a[i].deadline;
    	cout<<d<<endl;
		int x = d-1;
		while(x>-1){
			if(p[x]== '#'){
//				MARK;
//				cout<<"p["<<x<<"] = "<<p[x];
				p[x] = a[i].id;
//				cout<<"p["<<x<<"] = "<<p[x];
				break;
			}
			else
			x--;
		}
    }
    
    vector<char>::iterator it;
    for(it = p.begin(); it!=p.end(); it++)cout<<*it<<" ";
    return 0;
}
