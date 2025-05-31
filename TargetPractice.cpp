#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define vii vector<vector<char>> // Define a 2D vector of characters

int board[10][10] = {
     {1,1,1,1,1,1,1,1,1,1},
     {1,2,2,2,2,2,2,2,2,1},
     {1,2,3,3,3,3,3,3,2,1},
     {1,2,3,4,4,4,4,3,2,1},
     {1,2,3,4,5,5,4,3,2,1},
     {1,2,3,4,5,5,4,3,2,1},
     {1,2,3,4,4,4,4,3,2,1},
     {1,2,3,3,3,3,3,3,2,1},
     {1,2,2,2,2,2,2,2,2,1},
     {1,1,1,1,1,1,1,1,1,1}
};
void solve(){
   int t=1;
   cin>>t;
   while(t--){
     int total = 0;
     for(int r=0;r<10;r++){
        for(int c=0;c<10;c++){
            char ch;
            cin>>ch;
            if(ch != '.'){
                total += board[r][c];
            }
        }
     }
     cout<<total<<endl;
   }
}
int main() {
    solve();
    return 0;
}
