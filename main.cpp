#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    
    cout << "Enter x1: ";
    cin >> x1;
    
    cout << "Enter y1: ";
    cin >> y1;
    
    cout << "Enter x2: ";
    cin >> x2;
    
    cout << "Enter y2: ";
    cin >> y2;
    
    double sol = sqrt((pow((y1 - x1), 2)) + (pow((y2 - x2), 2)));
    
    cout << "The distance through (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << sol << " using the Euclidean Distance!";
    
    return 0;
}
