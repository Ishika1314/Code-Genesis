using namespace std;
#include <string>;
#include <iostream>
int main()
{
    cout << "Enter the number of test cases." << endl;
    string str;
    int T;
    cin >> T;

    for(int i=1; i <= T; i++)
    {   
      cout << "Enter the string for test case " << i << endl;
        cin >> str;
        for(int j=0; j < str.length(); j++)
            if(str.substr(j,5) == "party")
            str.replace(j,5,"pawri");
            cout << str << endl;
    }
    return 0;
}
