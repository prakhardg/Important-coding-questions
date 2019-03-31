class Solution{
  public maxArea(int [] heights){
    int max = Integer.MIN_VALUE;
    int i=0; 
    int j = heights.length -1;
    while(i<j){
      max = Math.max(max, Math.min(heights[i], heights[j])* (j-i)   );
      
      if(heights[i] < heights[j]) i++;
      else 
        j--;
    
    } // end of while
    
    return max;
  } // end of method
}
