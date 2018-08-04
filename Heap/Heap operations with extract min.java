class MinHeap{
    ArrayList<Integer> a=new ArrayList<>();
    
    MinHeap(int a)  {}
    
    public int extractMin() {
        if(a.isEmpty()) return -1;
        int i=a.get(0);
        deleteKey(0);
        return i;
    }
    
    public void insertKey(int k)    {
        a.add(k);
        buildHeap(a.size()-1);
   
    }
    
    public void deleteKey(int i)    {
        if(a.isEmpty() || i<0 || i>=a.size())   return;
        int temp=a.get(i);
        a.set(i, a.get(a.size()-1));
        a.set(a.size()-1, temp);
        a.remove(a.size()-1);
        heapify(i, a.size()-1);
    }
    
    public void buildHeap(int i) {
        if(i==0)    return;
        int p=(i-1)/2;
        if(a.get(p)>a.get(i))    {
            int temp=a.get(p);
            a.set(p, a.get(i));
            a.set(i, temp);
            buildHeap(p);
        }
    }
    
    public void heapify(int i, int n)  {
        if(i<=n)  {
            int s=i;
            int l=2*i+1, r=2*(i+1);
            if(l<=n && a.get(l)<a.get(s))   s=l;
            if(r<=n && a.get(r)<a.get(s))   s=r;
            if(s!=i)    {
                int temp=a.get(i);
                a.set(i, a.get(s));
                a.set(s, temp);
                heapify(s, n);
            }
        }
    }
}

//Class and functions only. Avoided main class