#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the abscissa(x point): ";
    int x;
    cin>>x;
    cout<<"Enter the ordinate(y point): ";
    int y;
    cin>>y;
    if(x==0){
        if(y==0){
            cout<<"the point lies on the origin";
        }
        else{
            cout<<"the point lies on the y-axis";
        }
    }
    else if(y==0){
        if (x==0)
        {
            cout<<"the point lies on the origin";
        }
        else{
            cout<<"the point lies on the x-axis";
        }
    }
    else{
        cout<<"the point lies in the quadrants";
    }
}