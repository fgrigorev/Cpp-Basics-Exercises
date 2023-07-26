#include <iostream>
#include <cmath>

int main() {
    int month, year; 
    std::cin>>month>>year;
    bool v;

    if (year%400 == 0){
    v = 1;
    }
    else {
        if(year%100 == 0){
            v = 0;
        }
        else {
            if(year%4 == 0){
                v = 1;
            }
            else {
                v = 0;
            }
        }
    }

    if (month == 2){
        if (v == 1){
            std::cout<<29;
        }
        else { 
            std::cout<<28;
        }
    }
    else{
        if (month<8){
            if (month%2 == 1){
            std::cout<<"31";
            }
            else {
                std::cout<<"30";
            }
        }
        else{
            if (month%2 == 0){
                std::cout<<"31";
            }
            else {
                std::cout<<"30";
            }
        }
    }
}