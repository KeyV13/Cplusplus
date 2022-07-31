// Structures.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
/* Yapı, struct Deyimi (Structures)
 Aralarında mantıksal bir ilişki bulunan farklı türden bilgiler "yapılar (structures)" içerisinde mantıksal bir bütün olarak 
 ifade edilebilir.Yapılar diziler gibi bellekte sürekli kalır.Bir yapı içerisindeki elemanlara üye(member) denir.
 Üyelerin herbiri farklı veri tipine sahip olabilir.Bu sayede, kendi tipinizi üretebilirsiniz.

Genel yapı bildirimi :
struct yapı_adı {
    tip yapı_değişken_ismi;
    tip yapı_değişken_ismi;
    ...
};   
* enum ile sabit bildirimi yapılırken
* struct ile değişken bildirimi yapılır.   */

#include <iostream>
using namespace std;

struct telefon {
    string marka;
    string model;
    int yil;
};

int main()
{
    telefon telefon1;
    telefon1.marka = "Huawei";
    telefon1.model = "P10";
    telefon1.yil = 2017;

    telefon telefon2;
    telefon2.marka = "Xiaomi";
    telefon2.model = "X3";
    telefon2.yil = 2020;

    cout << telefon1.marka << " " << telefon1.model << " " << telefon1.yil << "\n";
    cout << telefon2.marka << " " << telefon2.model << " " << telefon2.yil << "\n";

    return 0;
}
