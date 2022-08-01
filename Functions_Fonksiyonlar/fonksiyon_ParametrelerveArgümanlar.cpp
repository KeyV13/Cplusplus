// fonksiyon_ParametrelerveArgümanlar.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
using namespace std;
//Bilgiler bir parametre olarak fonksiyonlara iletilebilir.Parametreler, fonksiyon içinde değişkenler olarak hareket eder.
//
//Parametreler, fonksiyon adından sonra parantez içinde belirtilir.İstediğiniz kadar parametre ekleyebilirsiniz, 
//bunları virgülle ayırmanız yeterlidir :

void myFunction1(string fname) {
    cout << fname << " Refsnes\n";
}
// parametre olarak string çağrılan bir fname alan bir işlev vardır. İşlev çağrıldığında, işlevin içinde 
// tam adı yazdırmak için kullanılan bir ad iletiyoruz

// Varsayılan Parametre Değeri =
void myFunction2(string ülke = "Turkiye") {
    cout << ülke << "\n";
}

// Çoklu Parametreler
void myFunction3(string fname, int age) {
    cout << fname << " Refsnes. " << age << " yasinda. \n";
}

int main()
{
    myFunction1("Ahmet");
    myFunction1("Ali");
    myFunction1("Omer");

    cout << "\n\n";

    myFunction2("Azerbaycan");
    myFunction2("Pakistan");
    myFunction2();
    myFunction2("BosnaHersek");

    cout << "\n\n";

    myFunction3("Meryem", 19);
    myFunction3("Zehra", 25);
    myFunction3("Sidar", 27);

    return 0;

}

