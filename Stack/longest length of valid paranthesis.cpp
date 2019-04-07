#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
#define ll long long
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    string s;
    cin>>s;
    stack<int> st;
    st.push(-1);
    int i=0;
    int ans  = 0;
    while(i < s.length()){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            if(s[st.top() ] == '('){
                st.pop();
                ans = max(ans, i - st.top());
            }
            else{
                st.push(i);
            }
        }
        i++;
    }
    cout<<ans<<endl;
 }
 
 return 0;
}
