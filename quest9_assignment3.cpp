#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii<=122 && ascii>=97) ||(ascii<=90 && ascii>= 65))
    {
        cout<<"the character is alphabet";
    }
    else if(ascii<=57 && ascii>=48)
    {
        cout<<"the character is digit";
    }
    else
    {
        cout<<"the character is special character";
    }

}