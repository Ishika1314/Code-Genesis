#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Enter the string." << endl;
    string str;
    getline(cin, str);
    int len = str.length();
    int freq, k;

    cout << "Frequency of Alphabets: \n" << endl;
    for (int i = 65; i < 91; i++) {
        freq = 0;
        for (int j = 0; j < len; j++) {
            if (toupper(str[j]) == char(i))
                freq++;
        }
        cout << "Frequency of " << (char) i << " is " << freq << endl;
    }

    cout << "\nFrequency of Digits: \n" << endl;
    for (int i = 48; i <
            58; i++) {
        freq = 0;
        for(int j=0; j<len; j++)
        {
            if (str[j] == (char)i)
                 freq ++;
        }
        cout << "Frequency of " << (char)i << " is " << freq << endl;
    }
    return 0;
}
