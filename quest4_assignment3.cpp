#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the length: ";
    float l;
    cin>>l;
    cout<<"Enter the breadth: ";
    float b;
    cin>>b;
    float area = (l*b);
    cout<<"the are of rectangle is "<<area<<endl;
    float perimeter = (2*(l+b));
    cout<<"the perimeter of the rectangle is "<<perimeter<<endl;
    if(area>perimeter){
        cout<<"The area is greater than perimeter";
    }
    else{
        cout<<"the area is not greater than perimeter";
        }
}