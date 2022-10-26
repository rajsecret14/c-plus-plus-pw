#include<iostream>
using namespace std;
int main(){
int i = 1;
    for ( ; i <= 4 ; i++){
        if (i <= 3 & i >= 2){
            cout << "*    *"<<endl;
        }
        else{
            cout << "******"<<endl;
        }
    
    }
// ma'am method
int n,m ;
cin>>n>>m;
 for(int p = 1; p <= n ; p++){
    for(int j = 1; j <= m ; j++){
        if(p==1 || j==1 || p==n || j == m){
            cout << "*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }

    




    return 0;
}
