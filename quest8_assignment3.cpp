// #include<iostream>
// using namespace std;
// int main(){


// }
#include <iostream>

using namespace std;
int main() {
    float x1, y1, x2, y2, x3, y3, slope1, slope2;

    cout << "Enter points (x1, y1) ";
    cin >> x1;
    cin >> y1;

    cout << "Enter points (x2, y2) ";
    cin >> x2;
    cin >> y2;

    cout << "Enter points (x3, y3) ";
    cin >> x3;
    cin >> y3;

    slope1 = ((y2 - y1) / (x2 - x1));
    slope2 = ((y3 - y2) / (x3 - x2));

    if (slope1 == slope2) 
    {
        cout << "All 3 points lie on the same line";
    }
    else
    {
        cout << "All 3 points do not lie on the same line";
    }
}