void topView(struct Node *root)
{
 map<int,int> m;
    queue<pair<struct Node*,int> > q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<struct Node*,int> p = q.front();
        q.pop();
        if(m.find(p.second)==m.end())
        {
            cout<<(p.first)->data<<" ";
            m[p.second]=(p.first)->data;
        }
        if((p.first)->left)
        {
            q.push(make_pair((p.first)->left,(p.second)-1));
        }
        if((p.first)->right)
        {
            q.push(make_pair((p.first)->right,(p.second)+1));
        }
    }
    return;
}
