#include <iostream>
#include <cmath>

int main() {
    int a,b,c;
    std::cin>>a>>b>>c;

    if ((a+b<=c)||(a+c<b)||(c+b<a)){
        std::cout<<"UNDEFINED";
    }
    
    else if (((pow(a,2)+pow(b,2)==pow(c,2)))||(pow(a,2)+pow(c,2)==pow(b,2))||(pow(c,2)+pow(b,2)==pow(a,2))){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
}