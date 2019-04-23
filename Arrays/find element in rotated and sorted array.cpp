


int Solution::search(const vector<int> &v, int a) {
    
    int n = v.size();
    int mid;
    int low = 0 , high = n-1;
    while(low <=high){
        mid = low + (high-low)/2;
        if(v[mid] ==a) return mid;
        
        else if(v[low] <= v[mid] ){
            if(a>=v[low] && a < v[mid])
            high = mid-1;
            else low=  mid+1;
        }
        else {
            if(v[mid]  < a && v[high] >=a){
                low = mid+1;
            }
            else high = mid-1;
        }
    }
    return -1;
}
