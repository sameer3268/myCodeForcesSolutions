#include <iostream>
using namespace std;
#define vi vector<char>

void minAction(){
    int t;
    int n;
    string s;
  
    cin>>t;
    while(t--){
        
        cin>>n;
        cin>>s;
        bool f = true;
          int numAction = 0;
         for(int i=0;i<n;i++){
       
        if(s[i] == '.'){
            numAction++;
        }
        if(i > 0 && i<n-1) {
           if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.' ){
            cout<<2<<endl;
            f = false;
            break;
        }
        }
        
    }
    if(f){
            cout<<numAction<<endl;
        }

    }

}



int main(){
    minAction();
    return 0;
}

