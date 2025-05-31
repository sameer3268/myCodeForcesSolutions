#include <iostream>
#include <string>

using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    //sliding window
    int mini = n;
    int i=0,j=0;
    int whites = 0;

    while(j < n){
        if(s[j] == 'W') whites++;

        if(j-i+1 < k){
            j++;
            continue;
        }

        mini = min(whites,mini);

        j++;
        if(s[i] == 'W') whites--;
        i++;


    }
    cout<<mini<<endl;

}

int main(){
    int t=1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}