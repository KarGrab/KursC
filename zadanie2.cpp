


#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    std::cout << "obecna godzina" << a << ":" << b << "\n";
    
    int suma_minut = b + c;
    int nowe_minuty = suma_minut % 60;
    int nowe_godziny = a + suma_minut / 60;
    
    std::cout << "po upłynięciu " << c << "bedzie godzina " << nowe_godziny << ":" << nowe_minuty<< "\n";
    
}

