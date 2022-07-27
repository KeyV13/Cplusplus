// Operators.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // Aritmetik operatörler (+, -, *, / , %, ++, --)
    int sum1 = 100 + 50;        
    int sum2 = sum1 + 250;      
    int sum3 = sum2 + sum2;
    cout << sum3;

    cout << "\n\n";

    int deger = 5;
    cout << ++deger;

    cout << "\n\n";

    int e = 7;
    int f = 2;
    cout << e + f;

    cout << "\n\n";

    // Atama Operatörleri

    int x = 10;
    x += 3;      // x = x + 3
    cout << x << endl;
    x -= 3;      // x = x - 3
    cout << x << endl;
    x *= 3;
    cout << x << endl;
    x /= 3;
    cout << x << endl;
    x %= 3;
    cout << x << endl;
    x &= 3;
    cout << x << endl;
    x |= 3;
    cout << x << endl;
    x ^= 3;
    cout << x << endl;
    x >>= 3;
    cout << x << endl;
    x <<= 3;
    cout << x << endl;

    cout << "\n\n";

    // Karşılaştırma Operatörleri : Bir karşılaştırmanın dönüş değeri doğru ( 1) veya yanlıştır ( 0).

    int m = 5;
    int n = 3;
    cout << (m > n) << endl; // 5 3'ten büyük olduğu için 1 (true) değerini döndürür
    cout << (m < n) << endl;
    cout << (m == n) << endl;
    cout << (m != n) << endl;
    cout << (m >= n) << endl;
    cout << (m <= n) << endl;

    cout << "\n\n";

    // Mantıksal operatörler, değişkenler veya değerler arasındaki mantığı belirlemek için kullanılır 
    // Bir mantıksal işlecin işleminin sonucu, true veya false bir Boolean değeridir.

    int v = 7;
    v < 5 && v < 10;
    v < 5 || v < 4;
    !(v < 5 && v < 10);

    // Bitsel operatörler Örneğin, C veya C++'da  & operatörü olarak temsil edilen bitsel AND 
    // işlenen olarak iki sayı alır ve iki sayının her bitinde AND yapar. AND'nin sonucu yalnızca her iki bit de 1 ise 1'dir.
    int a = 5, b = 9; // a = 5(0000011), b = 9(00001001)
    cout << (a ^ b); // 00001100
    cout << (~a); // 11111010

    cout << "\n\n";

    // sizeof operatörü 
    // İşleneninin boyutunu hesaplamak için kullanılabilen bir derleme zamanı tekli operatörüdür.
    // Temel olarak, operatörün boyutu, değişkenin boyutunu hesaplamak için kullanılır. 

    cout << "Size of wchar_t : " << sizeof(wchar_t)
        << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int)
        << " bytes" << endl;

    cout << "Size of long int : " << sizeof(long int)
        << " bytes" << endl;

    cout << "Size of signed long int : "
        << sizeof(signed long int) << " bytes" << endl;

    cout << "Size of unsigned long int : "
        << sizeof(unsigned long int) << " bytes" << endl;


    return 0;

}