int minSwaps(int arr[], int n){
    /*Your code here */
     pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
     sort(arrPos, arrPos + n);
     vector<bool> vis(n, false);
     int ans=0;
     for(int i=0; i<n; i++){
        if (vis[i] || arrPos[i].second == i)
            continue;
        int cyc_size =0; int j=i;
        while(!vis[j]){
            vis[j]= true;
            j = arrPos[j].second;
            cyc_size++;
        }
        ans += (cyc_size - 1);
     }
     return ans;
}
