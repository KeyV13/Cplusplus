// loop_for.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Bir kod bloğunda tam olarak kaç kez döngü yapmak istediğinizi biliyorsanız,for öngüyü kullanın.

#include <iostream>
using namespace std;

int main()
{
    /* 
    for(ifade 1; ifade 2; ifade 3) {
       // yürütülecek kod bloğu
     }   
     
    İfade 1 , kod bloğunun yürütülmesinden önce (bir kez) yürütülür.
    İfade 2 , kod bloğunun yürütülmesi için koşulu tanımlar.
    Kod bloğu yürütüldükten sonra (her seferinde) İfade 3 yürütülür.  */

    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    for(int i = 0; i < 3;i++) {
        cout << "Yazilim" << "\n";
    }

    // döngüden çıkmak için de break kullanılabilir
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    // Belirtilen continue bir koşul oluşursa, ifade bir yinelemeyi (döngüde) keser ve döngüdeki bir sonraki yinelemeyle devam eder.
    for (int i = 0; i < 10; i++) {
        // Eğer i 6'ya eşitse,
        // bir sonraki yinelemeye devam et
        if (i == 4) {
            continue;
        }
        // aksi halde i değerini yazdır
        cout << i << "\n";
    }

    int k = 10;
    if (k == 10)
    {
        //  İlk if ifadesi
        if (k < 15)
            cout << "k 15 ten kuccuk\n";

        // İç içe geçmiş - if ifadesi
        // Yalnızca yukarıdaki ifade yürütülürse yürütülür
        // doğrudur
        if (k < 12)
            cout << "k 12 den de kucuk\n";
        else
            cout << "k 15 teen buyuk";
    }

    return 0;
}
