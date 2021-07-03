using namespace std;
#include <string>;
#include <iostream>
int main()
{
    cout << "Enter the number of Test Cases." << endl;
    string str;
    int T, k;
    cin >> T;

    for(int i=1; i<=T; i++)
    {
        cout << "Enter the string for Test Case " << i << endl;
        cin >> str; k=0;
        for(int j=0; j < (str.length()/2); j++)
            if(str[j] != str[(str.length() )- 1 -j])
            {
                k=1;
                break;
            }
        if(k == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
