#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the first side: ";
    int a;
    cin>>a;
    cout<<"Enter the second side: ";
    int b;
    cin>>b;    
    cout<<"Enter the third side: ";
    int c;
    cin>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b))//first it has to a triangle
    {
        if ((a==b) &&(b==c))
        {
            cout<<"the triangle is equilateral";
        }
        else if((a==b) || (b==c) || (c==a))
        {
            cout<<"the triangle is isosceles";
        }
        else
        {
            cout<<"the triangle is scalene";
        }
    }
    else{
        cout<<"the following sides cannot form a triangle";
    }

}