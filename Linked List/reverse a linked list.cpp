struct node *head;
void reverse(struct node *prev, struct node *cur)
{
   if(cur){
      reverse(cur,cur->link);
      cur->link = prev;
    }
    else{
      head = prev;
    }
}
