#include <iostream>
#include <cmath>

int main() {
    int a1, a2, b1, b2;
    std::cin>>a1>>b1>>a2>>b2;

    if ((a1 == a2)||(b1 == b2)){
        std::cout<<"YES";
    }
    else if(std::abs(a2-a1)==std::abs(b2-b1)){
        std::cout<<"YES";
    }
    else {
        std::cout<<"NO";
    }
}