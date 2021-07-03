using namespace std;
#include <string>;
#include <iostream>
int main()
{
    cout << "Enter the string." << endl;
    string str;
    cin >> str;
        int k=1;

        for(int i=0; i < str.length(); i++)
        {
            if(isupper(str[0])){
                cout << "Not a CamelCase String.";
                return 0;
            }
            if(isupper(str[i]))
                k++;
        }
        cout << k;

    return 0;
}
