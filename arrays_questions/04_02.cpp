#include<iostream>
using namespace std;
int main(){


// ma'am way
    int array[] = { 1,3,4,5,6};
    int key;  
    cin>>key;

    int ans =- 1 ;

    for (int i = 0 ; i<5 ; i++){
        if(array[i]==key){
            ans = i ;
            break;
        }
    }
cout<<ans<<endl;
    




    return 0;
}