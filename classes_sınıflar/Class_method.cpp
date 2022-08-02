// Class_method.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class MyClass {
public:
    void myMethod() {  // Sınıf içinde tanımlanan metod / fonksiyon
        std::cout << "Merhaba Turkiye!";
    }
};

int main()
{
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
}

