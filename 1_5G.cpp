#include <iostream>
#include <cmath>

int main() {
    float s,x;
    int n;
    std::cin>>n;
    s = 0;
    for (int i = 1; i <= n; i++) {
        x = pow(-1, i+1)/i;
        std::cout<<x<<'\n';
        s += x;
    }

    std::cout<<s;
}