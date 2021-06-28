#include <iostream>
#include <math.h>
int main() {
    int num;
    std::cout<<"Enter the number.\n";
    std::cin>>num;

    int sq = (int)sqrt(num);
    if(sq*sq > num)
        std::cout<<(sq-1);
    else
        std::cout << sq;

    return 0;
}
