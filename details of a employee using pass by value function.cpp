#include <iostream>
using namespace std;
void incSal(float &sal) {
    sal *= 1.20f;
}
bool iseligible(bool rp, bool pub, float pft, bool np) {
    int count = 0;
    if (rp) count++;
    if (pub) count++;
    if (pft > 100000) count++;
    if (np) count++;
    return count >= 3;
}
int main() {
    char emp[50];
    bool rp, pub, np;
    float pft, sal;
    cout << "Enter employee name: ";//emp-employee
    cin >> emp;
    cout << "Research project done: ";//rp-reserach project
    cin >> rp;
    cout << "Research publication done: ";//pub-Reasearch publication
    cin >> pub;
    cout << "Enter profit made: ";//pft  - profit
    cin >> pft;
    cout << "New project in pipeline: ";//np - new project in pipeline
    cin >> np;
    cout << "Enter current salary: ";
    cin >> sal;
    if (iseligible(rp, pub, pft, np)) {
        incSal(sal);
        cout << "\nEligible\n";
    } else {
        cout << "\nNot eligible\n";
    }
    cout << "Employee: "<<emp<< endl;
    cout << "Final Salary: "<<sal<<endl;
    return 0;
}
