// class_kalıtım.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Calisan {
protected: // Korumalı erişim belirticisi
    int maas;
};

// Türetilmiş sınıf
class Programmer : public Calisan{
    public:
       int bonus;
    void setMaas(int m) {
        maas = m;
    }
       int getMaas() {
        return maas;
    }
};

int main() {
    Programmer myObj;
    myObj.setMaas(50000);
    myObj.bonus = 15000;
    std::cout << "Maas: " << myObj.getMaas() << "\n";
    std::cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}