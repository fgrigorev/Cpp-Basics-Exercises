#include <iostream>
#include <ctype.h>
// #include <vector>
 
int main() {
    bool r1, r2;
    int low, up, num, other;
    low = up = num = other = 0; //?
    std::string password;
    std::cin >> password;
    // std::cout << password.size();
    
    if ((password.size() >= 8) && (password.size() <= 14)){
        r1 = true;
    } 
    else {
        r1 = false;
    }

    for (size_t i = 0; i != password.size(); ++i) {
        if ((password[i] < 33) && (password[i] > 126)) {
            std::cout << "NO";
            break;
        }
        
        else if (std::isdigit(password[i]) != 0) {
            num++;
        }
        
        else if (std::islower(password[i]) != 0) {
            low++;
        }

        else if (std::isupper(password[i]) != 0) {
            up++;
        } 

        else {
            other++;
        }
    }
    if (((num > 0) && (up > 0) && (other > 0)) || ((num > 0) && (low > 0) && (other > 0)) || ((up > 0) && (low > 0) && (other > 0)) || ((num > 0) && (low > 0) && (up > 0))) {
        r2 = true;
    }
    else {
        r2 = false;
    }

    if (r1 && r2 == 1) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}

