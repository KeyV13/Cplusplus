// fonksiyon_diziler_arrays.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        std::cout << myNumbers[i] << "\n";
    }
}

int main() {
    int myNumbers[5] = { 10, 20, 30, 40, 50 };
    myFunction(myNumbers);
    return 0;
}