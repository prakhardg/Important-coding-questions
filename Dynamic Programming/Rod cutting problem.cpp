int cutRod(int prices[], int n, int rod){
  // n is the size of array named prices. rod is the length of the rod;
  
  int dp[rod+1];
  memset(dp, 0 , sizeof(dp));
  
  for(int i=1; i<=n; i++){
      for(int j = 1; j<=i; j++){
        dp[i] = max(dp[i],  prices[j-1] + dp[ i - j]  );
      }
   }
   return dp[rod];

}
