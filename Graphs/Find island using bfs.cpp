bool valid(int i, int j, int row, int col){
    return (i<row &&j<col && i>=0 && j>=0);
}

void bfs(int a[MAX][MAX], int i,int j, int row, int col ){
    // pair< int, int >p;
    queue< pair<int, int> >q;
    q.push(make_pair(i,j));
    while(!q.empty()){
        pair<int, int>p = q.front();
        q.pop();
        int x= p.first; int y = p.second;
        a[x][y]=2;
        i=x; j=y;
        if(valid(i-1,j-1,row,col) && a[i-1][j-1]==1){
            q.push(make_pair(i-1,j-1));
        }
                if(valid(i-1,j,row,col) && a[i-1][j]==1){
            q.push(make_pair(i-1,j));
        }
                if(valid(i-1,j+1,row,col) && a[i-1][j+1]==1){
            q.push(make_pair(i-1,j+1));
        }
                if(valid(i,j-1,row,col) && a[i][j-1]==1){
            q.push(make_pair(i,j-1));
        }
                if(valid(i,j+1,row,col) && a[i][j+1]==1){
            q.push(make_pair(i,j+1));
        }
                if(valid(i+1,j-1,row,col) && a[i+1][j-1]==1){
            q.push(make_pair(i+1,j-1));
        }
                if(valid(i+1,j,row,col) && a[i+1][j]==1){
            q.push(make_pair(i+1,j));
        }
                if(valid(i+1,j+1,row,col) && a[i+1][j+1]==1){
            q.push(make_pair(i+1,j+1));
        }
        
        
    }
    
}




int findIslands(int a[MAX][MAX], int n, int m)
{
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1){
                ++count;
                bfs(a, i,j,n,m);
            }
        }
    }
//Your code here 
    return count;
}
