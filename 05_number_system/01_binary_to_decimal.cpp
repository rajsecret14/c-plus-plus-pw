#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"input ur no.";
    cin>>n;
    
    int ans=0;
    int power = 1;
    while(n>0){
        int lastdigit = n% 10;
        ans = ans + (lastdigit*power);
        power = power * 2;
        n/=10;


    }
cout<<ans;



        return 0;
}