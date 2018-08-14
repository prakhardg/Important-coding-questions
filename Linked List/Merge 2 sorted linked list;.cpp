ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) {
    if(!a&& !b) return NULL;
    if(a && !b)return a;
    if(!a&&b) return b;
      ListNode* result = NULL;
 
  
  if (a->val <= b->val) 
  {
     result = a;
     result->next = mergeTwoLists(a->next, b);
  }
  else
  {
     result = b;
     result->next = mergeTwoLists(a, b->next);
  }
  return(result);

}

// Merge two sorted linked lists
// Function only;
