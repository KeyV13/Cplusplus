// fonksiyon_referans.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

 // Referansa Göre Geç
void takasNum(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int birinciNum = 10;
    int ikinciNum = 20;

    cout << "takastan once: " << "\n";
    cout << birinciNum << ikinciNum << "\n";

    // biriniciNum ve ikiniciNum değerlerini değiştirecek fonksiyon çağırın
    takasNum(birinciNum, ikinciNum);

    cout << "Takastan sonra: " << "\n";
    cout << birinciNum << ikinciNum << "\n";

    return 0;
}
