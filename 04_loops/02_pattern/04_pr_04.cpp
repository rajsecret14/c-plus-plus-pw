#include<iostream>
using namespace std;
int main(){
// sum of the following series = 1 -2 + 3- 4 .... n

int n,a,sum ;
cout << "input n ";
cin>>n;
a = 1 ;
sum = 0 ;
while(a<=n){
    if (a % 2 == 0){
        sum = sum - a; 
          }
    else{
        sum = sum + a ;
    }   
    a++;
}
cout<<sum;  






    return 0;
}
