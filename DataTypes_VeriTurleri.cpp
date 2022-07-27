// DataTypes_VeriTurleri.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    
    int sayi = 1000;
    cout << sayi << endl;
   
    float kesirSayi = 5.75;
    cout << kesirSayi << endl;
   
    double noktaliSayi = 19.99;
    cout << noktaliSayi << endl;

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    bool bilgiGuctur = true;
    bool cahillikZordur = false;
    cout << bilgiGuctur << endl;
    cout << cahillikZordur << endl;

    char notum = 'B';
    cout << notum << endl;
    char a = 65, b = 66, c = 67;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // sizeof operatörü —  bilgisayar belleğindeki bir değişken/veri türü tarafından işgal edilen bayt sayısını bulmak için kullanılır.

}

/* ## Temel Veri Tipleri
Veri türü, değişkenin depolayacağı bilgilerin boyutunu ve türünü belirtir:

•	Integer : Tamsayı veri türleri için kullanılan anahtar sözcük int'dir . 
    Tamsayılar tipik olarak 4 bayt bellek alanı gerektirir ve -2147483648 ile 2147483647 arasında değişir.  
•	Character : Karakter veri tipi karakterleri saklamak için kullanılır. 
    Karakter veri türü için kullanılan anahtar kelime char'dır . Karakterler tipik olarak 1 bayt bellek alanı gerektirir 
    ve -128 ile 127 veya 0 ile 255 arasında değişir.  
•	Boolean : Boolean veri türü, Boolean veya mantıksal değerleri depolamak için kullanılır. Bir Boolean değişkeni, 
    true veya false depolayabilir . Boolean veri türü için kullanılan anahtar sözcük bool'dur . 
•	Floating Poin: Kayan Nokta veri türü, tek duyarlıklı kayan noktalı değerleri veya ondalık değerleri depolamak için 
    kullanılır. Kayan noktalı veri türü için kullanılan anahtar sözcük float'tır . Kayan değişkenler tipik olarak 4 bayt 
    bellek alanı gerektirir. 
•	Double Floating Point: Çift Kayan Nokta veri türü, çift duyarlıklı kayan nokta değerlerini veya ondalık değerleri 
    depolamak için kullanılır. Çift kayan noktalı veri türü için kullanılan anahtar sözcük double'dır . Çift değişkenler 
    tipik olarak 8 bayt bellek alanı gerektirir. 
•	void : Void değeri olmayan anlamına gelir. void veri türü değersiz bir varlığı temsil eder. Değer döndürmeyen işlevler 
    için void veri türü kullanılır. 
•	Geniş Karakter : Geniş karakter veri türü de bir karakter veri türüdür ancak bu veri türü normal 8 bitlik veri 
    türünden daha büyük bir boyuta sahiptir. wchar_t tarafından temsil edilir. Genellikle 2 veya 4 bayt uzunluğundadır.
*/