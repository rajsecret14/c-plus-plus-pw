#include<iostream>
using namespace std;
int main(){
    cout <<"enter length : "<<endl;
    int length;
    cin >> length;
    cout << "enter breadth : "<<endl;
    int breadth ;
    cin >> breadth;
    int area = length * breadth;
    cout << "area of rectangle is : " << area;
    return 0;
}