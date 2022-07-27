// Strings.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Strings (Dizeler) metin depolamak için kullanılır.
// İngilizce string kelimesi yerine aşağıdaki ifadelerden biri karşılaşılabilir :
// katar = karakter topluluğu = karakter dizisi = sözce = sicim
// Bir string değişken, çift tırnak içine alınmış bir karakter koleksiyonu içerir
 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string adi = "Nicola ";
    string soyAdi = "Tesla";
    string tamAdi = adi + soyAdi;
    cout << tamAdi;

    cout << "\n\n";

    string adim = "Nicola ";
    string soyAdim = "Tesla";
    string tamAdim = adim.append(soyAdim);
    cout << tamAdim;

    cout << "\n\n";

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Metin dizesinin uzunlugu: " << txt.length();  // veya txt.size():

    cout << "\n\n";
    // Bir dizedeki karakterlere, köşeli parantez içindeki dizin numarasına bakarak erişebilirsiniz [].

    string myString = "Hello";
    cout << myString[0];   // Ciktisi H

    cout << "\n\n";

    // getline() bir metin satırını okumak için işlevi kullanırız.

    string tamAd;
    cout << "Tam adinizi yazin: ";
    getline(cin, tamAd);
    cout << "Tam adiniz: " << tamAd;

    return 0;
}

