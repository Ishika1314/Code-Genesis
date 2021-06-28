#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the no. of stars.";
    cin >> n;

    for(int i=0;i<n ;i++)
    {
        for(int j=0;j<i;j++)
            cout << " ";

        for(int k=i+1;k<=n-i;k++)
            cout << "*";

        for(int m=n-i;m<n;m++)
            cout << " ";

        cout << endl;
    }
    return 0;
}
