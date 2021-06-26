#include <iostream>
using namespace std;
int main() {
    double hra, da, pf, allow, basic, totalSalary;
    char grade;
    cin>>basic>>grade;

    hra = .20*basic;
    da = .50*basic;
    pf = .11*basic;
    allow=0;
    if (grade == 'A')
        allow = 1700;

    if (grade == 'B')
        allow = 1500;

    if (grade == 'C')
        allow = 1300;

    totalSalary = basic + hra + da + allow - pf;
    cout<<totalSalary;
    return 0;
}
