#include <iostream>

int main() {
    int a, b, check;
    std::cout << "Enter the two numbers to find prime numbers between them." << std::endl;
    std::cin >> a >> b;
    for(int i=a; i<=b; i++)
    {    check = 0;
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
                check ++;
        }
        if(check == 0)
            std::cout << i << " ";
    }
    return 0;
}
