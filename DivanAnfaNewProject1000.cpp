#include <iostream>
using namespace std;
#include <vector>
#define pii pair<int>
#define vii vector<pii>
#define ll long long
void solve(){
    int n;
    cin>>n;

    vii visits(n+1);
    for(int i=1;i<=n;i++){
        cin>>visits[i].first;
        visits[i].second = i;
    }
    
    sort(visits.begin()+1,visit.end(),greater<pii>());

    ll total_time = 0;
    ll cur_coord = 1;

    vll config(n+1);
    for(int i=1;i<=n;i++){
        totol_time += 2*cur_coord*visits[i].first;

        if(odd(i)){
            config[visits[i].second] = cur_coord;
        }else{
            config[visits[i].second] = -cur_coord;
            cur_coord++;
        }
    }
    cout<<total_time<<endl;
    for(auto pos: config){
        cout<<pos;
    }
    cout<<endl;

    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}