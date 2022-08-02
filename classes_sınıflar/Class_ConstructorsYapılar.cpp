// Class_ConstructorsYapılar.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Car{
  public:
    string marka;
    string model;
    int yil;
    Car(string x, string y, int z) { // Parametrelerle yapıcı
      marka = x;
      model = y;
      yil = z;
    }
};

int main()
{
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

 
    std::cout << carObj1.marka << " " << carObj1.model << " " << carObj1.yil << "\n";
    std::cout << carObj2.marka << " " << carObj2.model << " " << carObj2.yil << "\n";
    return 0;
}