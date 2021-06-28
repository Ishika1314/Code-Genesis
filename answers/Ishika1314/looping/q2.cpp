#include <iostream>

int main() {
    int num;

    std::cout << "Enter the value of 'N'" << std::endl;
    std::cin >> num;

    for(int i= num; i>= 1 ; i--)
    {
        for(int j= 64+i ; j <=num+64 ; j++)
          std::cout << (char)(j);
        std :: cout<< std::endl;
    }
    return 0;
}
