class SumTree_sum{
    public boolean flag = true;
    public int find_sum(Node n){
       if(n!= null){
            int data= n.data;
            int val;
            if(n.left == null && n.right==null) return data;
            else{
                val = find_sum(n.left) + find_sum(n.right);
                if(val!= data) flag = false;
                return data+val;
            }
            
       }
        return 0;
    }
}
class GfG
{
	boolean isSumTree(Node node)
	{
             // Your code here
             SumTree_sum st = new SumTree_sum();
             st.find_sum(node);
             return st.flag;
	}
}


// A sum tree is the one in which every node is the sum of its left and right subtree;