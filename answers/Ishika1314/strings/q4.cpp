using namespace std;
#include <string>;
#include <iostream>
int main()
{
    cout << "Enter the string." << endl;
    string str, wrd;
    getline(cin, str);
    if (ispunct(str[str.length()-1]))
    {
        cout << "Invalid string";
        return 0;
    }
    cout << "Enter the no. of words you want to print." << endl;
    int k, count = 0;
    cin >> k;
    str+= " ";
    for(int i=0; i < str.length(); i++)
    {
      if (str[i] == ' ' && str[i+1] == ' ')
        {
            cout << "Invalid string";
            return 0;
        }
        if (str[i] == ' ' && count <k)
        {
            cout << wrd << " ";
            count++;
            wrd = "";
        }
        else
            wrd+= str[i];
    }

    return 0;
}
