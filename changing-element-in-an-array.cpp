#include <iostream>
using namespace std;
void change(int *p, int v) {
    *p = v;
}
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int i, x;
    cout << "Original: ";
    for (int j = 0; j < 5; j++) {
        cout << a[j] << " ";
    }
    cout << endl;
    cout << "Index (0-4): ";
    cin >> i;
    cout << "New value: ";
    cin >> x;
    change(&a[i], x);
    cout << "Modified: ";
    for (int j = 0; j < 5; j++) {
        cout << a[j] << " ";
    }
    cout << endl;
  return 0;
}
