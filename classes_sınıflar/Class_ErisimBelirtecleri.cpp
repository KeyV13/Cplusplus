// Class_ErisimBelirtecleri.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// C++'da üç erişim belirteci vardır:
// public - üyelere sınıfın dışından erişilebilir
// private - üyelere sınıfın dışından erişilemez(veya görüntülenemez)
// protected - Üyelere sınıf dışından erişilemez, ancak miras alınan sınıflardan erişilebilirler.

#include <iostream>

class sinifim {
public:
    int x;
private:
    int y;

};

int main()
{
    sinifim nesnem;
    nesnem.x = 15;  // İzin verildi (herkese açık)
 // nesnem.y = 56;  // İzin verilmiyor (özel)
    return 0;
}
