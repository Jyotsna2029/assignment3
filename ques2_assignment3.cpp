#include<iostream>
using namespace std;
int main(){
    float pi;
    pi = 3.1415;
    cout<<"Enter the radius: ";
    float radius;
    cin>>radius;
    float area = pi*radius*radius;
    cout<<"the area of the circle is: "<<area<<endl;
    float circumference = 2*pi*radius;
    cout<<"the perimeter of the circle is: "<<circumference<<endl;
    if(area>circumference){//condition matched
        cout<<"the area is larger than the circumference";
    }
    else if(area = circumference){//condition not matched
        cout<<"area and circumference are equal";
    }
    else{//condition not matched
        cout<<"circumference is larger than area";
    }
}