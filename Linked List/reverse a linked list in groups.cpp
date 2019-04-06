ListNode * reverseLLinGroups(ListNode * head, int group){

ListNode* cur = head;
ListNode* prev = NULL, *next =NULL;

int count=0;

while(cur != NULL && count < group ){
  next = cur->next;
  cur->next = prev;
  prev = cur;
  cur = next;
  count++;
  
  }
  
  if(next!= NULL){
  head->next = reverseLLinGroups(next, group);
  
  return prev;
  }

}
