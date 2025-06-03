#include <iostream>
using namespace std;
#include <vector>
#define vvi vector<vector<int>>
#define vi vector<int>

bool even(int m){
    if(m%2 == 0){
        return true;
    }
    else 
        return false;
}
void solve(){
    int n,m;
    cin>>n>>m;

    vvi mtx(n,vi(m));
        int sum = 0;
        int neg_cnt = 0;
        int mini = 1e9;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mtx[i][j];
                sum += abs(mtx[i][j]);
                if(mtx[i][j] < 0) neg_cnt++;

                mini = min(abs(mtx[i][j]),mini);
            }
        }
        if(even(neg_cnt)) cout<<sum<<endl;
        else cout<<(sum - 2*mini)<<endl;
    
}

int main(){
    int t=1;

    cin>>t;
    while(t--){
        solve();
    }
}