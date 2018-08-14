#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[][4] =  {{2, 6, 12, 34},
                     {1, 9, 20, 1000},
                     {23, 34, 90, 2000}};
    int k = sizeof(arr)/sizeof(arr[0]);
	priority_queue<int, vector<int>, std::greater<int> >pq;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++) pq.push(arr[i][j]);
	}
    // int *output = mergeKArrays(arr, k);
    while(pq.size()){
    	cout<<pq.top()<<" ";
    	pq.pop();
    }
 
    // cout << "Merged array is " << endl;
    // printArray(output, n*k);
 
    return 0;
}
