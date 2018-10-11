#include<bits/stdc++.h>
using namespace std;

int single(int arr[], int n) 
{ 
    // Initialize result 
    int result = 0; 
  
    int x, sum; 
  
    // Iterate through every bit 
    for (int i = 0; i < 8*sizeof(int); i++) 
    { 
 
      sum = 0; 
      x = (1 << i); 
      for (int j=0; j< n; j++ ) 
      { 
          if (arr[j] & x) 
            sum++; 
      } 
      if (sum % 3) 
        result |= x; 
    } 
  
    return result; 
}

int main(){
//	int a[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7}; 
	int a[] = {3,9,3,3};
	int n = sizeof(a )/sizeof(a[0]);
	
	cout<<"Single occurance of "<<single(a,n);
	return 0;
}
