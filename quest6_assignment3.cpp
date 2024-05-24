#include<iostream>
using namespace std;
int main(){
    int marks_A;
    cout<<"enter the marks of A: ";
    cin>>marks_A;
    int marks_B;
    cout<<"enter the marks of B: ";
    cin>>marks_B;
    int marks_C;
    cout<<"enter the marks of C: ";
    cin>>marks_C;
    if(marks_A<marks_B && marks_A< marks_C){
        cout<<"A has the least marks";
    }
    else if(marks_B<marks_A && marks_B< marks_C){
        cout<<"B has the least marks";
    }
    else{
        cout<<"C has the least marks";
    }


}