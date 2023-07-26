#include <iostream>
#include <algorithm>
#include <vector>
 
int main() {
    size_t n;
    std::cin >> n;
    std::vector<int> guests(n);

    for (size_t i = 0; i != n; ++i) {
        std::cin >> guests[i];    
    }

    for (size_t j = 0; j < n; ++j) {
        for (size_t i = 0; i != n; ++i) {
            if (int(j + 1) == guests[i]) {
                std::cout << i + 1  << " ";
                break;
            }
            else {
                continue;
            }
        }
    }
}