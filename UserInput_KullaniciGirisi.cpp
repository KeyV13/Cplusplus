// UserInput_KullaniciGirisi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// cin çıkarma operatörü ( >> ) ile klavyeden veri okuyan önceden tanımlanmış bir değişkendir.
// cin "içeri bak/görmek" olarak telaffuz edilir. Giriş için kullanılır ve (>>) çıkarma operatörünü kullanır.

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int toplam;
    cout << "Bir sayi girin: ";
    cin >> x;
    cout << "Bir sayi daha girin: ";
    cin >> y;
    toplam = x + y;
    cout << "Girdiginiz sayilarin toplami: " << toplam;

    return 0;
    
}