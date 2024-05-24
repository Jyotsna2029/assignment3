#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the year: ";
    int year;
    cin>>year;
    if(year%4==0){
        cout<<"leap year";
    }
    else{//year%4!=0
        cout<<"not a leap year";
    }
}