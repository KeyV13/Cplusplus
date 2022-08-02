// Class_ConstructorsYapılar.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
// Not: Yapıcı sınıfla aynı ada sahiptir, her zaman herkese açıktır ve herhangi bir dönüş değeri yoktur.
class ogrenci {
    int rno;
    char isim[10];
    double ucret;
public:
    ogrenci()
    {
        cout << "RollNo girin: ";
        cin >> rno;
        cout << "İisim girin: ";
        cin >> isim;
        cout << "Ucreti girin: ";
        cin >> ucret;
    }

    void display()
    {
        cout << endl << rno << "\t" << isim << "\t" << ucret;
    }
};

int main()
{
    ogrenci s;
    s.display();

    return 0;
}