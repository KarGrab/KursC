#include <iostream>

int main () {
    int x;
    std::cin >> x;
    int suma = 0;
    
    while (x > 0) {
    
    suma+= x % 10;
    x /= 10;
    }
    
    std::cout << "suma cyfr:" << suma << "\n";
}    
    
    
    
