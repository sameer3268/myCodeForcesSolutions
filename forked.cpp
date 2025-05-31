#include <iostream>
using namespace std;
#include <set>
#include <vector>
#define vii vector<pair<int,int>>
#define pii pair<int,int>


void solve(){
    int t=1;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int xk,yk;
        cin>>xk>>yk;

        int xq,yq;
        cin>>xq>>yq;

        vii dirs = {{a,b},{a,-b},{-a,b},{-a,-b},
                    {b,a},{b,-a},{-b,a},{-b,-a}};
        set<pii> st1, st2;
        for(auto d : dirs){
            int x = xk+d.first;
            int y = yk+d.second;
            st1.insert(make_pair(x,y));

            x = xq + d.first;
            y = yq + d.second;

            st2.insert(make_pair(x,y));
        }
        int ans = 0;
        for(auto pos : st1){
            if(st2.find(pos) != st2.end())
              ans++;
        }
        cout<<ans<<endl;
    }
}

int main(){
    solve();
    return 0;
}