

// Merge two sorted linked lists
// Function only;

Node * merge(Node * h1, Node * h2){
    if(!h1 && !h2) return NULL;
    if(h1 && ! h2) return h1;
    if(h2 && ! h1) return h2;
    Node * start = NULL, *end;
    
    start = h1->val < h2->val ? h1: h2;
        if(start==h1){
        h1  = h1->next;
    }
    else h2 = h2->next;
    
    while(h1 && h2){
        if(h1->val <= h2->val){
            end->next = h1;
            end = h1;
            h1 = h1->next;
        }
        else{
        end->next  = h2;
            end = h2;
            h2 = h2->next;
        }
        if(h1) end->next = h1;
        else if (h2) end->next = h2;
        
        
        return start;

    
    }
        

}
