// Pointer_Isaretci.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

/*Ancak işaretçi, bellek adresini değeri olarak depolayan bir değişkendir.
İşaretçi değişkeni, aynı türden bir veri türüne (int veya string gibi) işaret eder 
ve * işleciyle oluşturulur. Çalıştığınız değişkenin adresi işaretçiye atanır:*/

int main()
{
    int a = 5;
    /* Aşağıdaki işaretçi bildirimlerinin tümü geçerlidir ve hepsi aynı işlemi yapar :
    Yeni bir işaretçi bildirmek ve güvenlik nedeniyle 0 (erişilemeyen bir bellek adresi) ile başlatmak.
    int * b = 0;
    int* b = 0
    int *b = 0; // Genellikle böyle yazılır.
    int *b; // <= bu, ancak "b" nin güvensiz olabilecek bazı rasgele adreslere işaret etmesine neden olur.
    */
    int *b = 0;
    cout << "\"b\" baslatildi ve simdi bellek adresine isaret ediyor:" << "\n\n";

    // Şimdi işaretçiyi bir adrese "işaret et" yap
    b = &a; //"b" şimdi "a" adresini gösteriyor

    cout << "\"a\" bellek adresinde saklanir: " << &a << endl;
    cout << "\"b\" bellek adresinde saklanir: " << &b << endl;
    cout << "\"b\" simdi bellek adresine isaret ediyor: " << b << endl << endl;

    cout << "\"a\" degeri soyledir: " << a << endl; // a değerini döndürür

    // "*b", b işaret ettiği adresten (a'nın değeri) değerini alacaktır.
    cout << "\"b\" alaninin isaret ettiği deger sudur: " << *b << "\n\n\n";

    // Şimdi "b" nin işaret ettiği adresin değerini değiştirin..."a" değerini etkin bir şekilde değiştirme     
    *b = 10;

    cout << "\"a\" hala bellek adresinde saklanir: " << &a << endl;
    cout << "\"b\" hala bellek adresinde saklanir: " << &b << endl;
    cout << "\"b\" hala bellek adresini gosteriyor: " << b << endl << endl;

    cout << "\"a\" degeri simdi: " << a << endl; // a değerini döndürür
    cout << "\"b\" isaret ettigi alanin degeri su an: " << *b << endl << endl;

    return 0;
}