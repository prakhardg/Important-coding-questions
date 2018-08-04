Node * mergeKList(Node *a[], int N)
{
       multiset<int> ms;
       multiset<int>::iterator it;
       for(int i=0 ; i<N; i++){
           Node * t = a[i];
           while(t){
               ms.insert(t->data);
               t = t->next;
           }
       }
       it = ms.begin();
       Node * head = NULL, *tmp = NULL, *start = NULL;
       while(it!=ms.end()){
           tmp = (struct Node * )malloc(sizeof(struct Node));
           tmp->data = *it;
           if(!start) start = head = tmp;
           else{
               head->next = tmp;
               head = tmp;
           }
       }
       return start;
}

