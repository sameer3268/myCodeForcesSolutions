#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

void solve(){
     int a,b,c;
     cin>>a>>b>>c;
     int  sum = a + b +c;
     if(sum%2 == 0){
        cout<<"Second"<<endl;
     }
     else{
        cout<<"First"<<endl;
     }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}