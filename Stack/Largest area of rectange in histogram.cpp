#include<bits/stdc++.h>
using namespace std;

int find_max(int hist[], int n){
	stack<int> s;
	int max_area = INT_MIN;
	int tp;
	int area_with_top ;
	int i=0; 
	while(i<n){
		if(!s.size()  || hist[i] >= hist[s.top()] )
		s.push(i++);
		
		else{
			tp = s.top();
			s.pop();
			area_with_top = hist[tp]* (s.empty()?  i:  i-1 - s.top() );
			max_area = max(max_area, area_with_top);
		}
	}
	
	while(!s.empty()){
		tp = s.top();
		s.pop();
		area_with_top = hist[tp] * (s.empty() ?  : i-s.top() - 1);
		max_area = max(max_area, area_with_top);
	}
	
	return max_area;
}

int main(){
	 int hist[] = {6, 2, 5, 4, 5, 1, 6};
	 int n = sizeof(hist)/sizeof(hist[0]);
	 cout<<"Max area is "<<find_max(hist, n);
	 return 0;
}
