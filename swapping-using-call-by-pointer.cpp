#include <iostream>
using namespace std;
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int x = 34;
    int y = 24;
    cout << "Before swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swap(&x, &y); 
    cout<<"After swap:"<<endl;
    cout<<"x = "<<x<<", y = "<<y<<endl;
    return 0;
}
