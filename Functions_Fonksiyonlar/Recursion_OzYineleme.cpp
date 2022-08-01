// Recursion_OzYineleme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
/* toplam() işlevi çağrıldığında, k'den küçük tüm sayıların toplamına k parametresi ekler ve sonucu döndürür. 
K 0 olduğunda, işlev yalnızca 0 değerini döndürür. Çalışırken, program aşağıdaki adımları izler.
0 olduğunda fonksiyon kendini çağırmadığı kiçin program orada durur ve sonucu döndürür. */

int topla(int k) {
    if (k > 0) 
        return k + topla(k - 1);
    else
        return 0;
}

int main()
{
    int result = topla(10);
    std::cout << result;
    return 0;
}
