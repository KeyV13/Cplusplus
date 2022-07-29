// Arrays_Diziler.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{

    // syntax : <type> Name[no of elements];
    
    // Bir diziyi bildirmek için, değişken türünü tanımlayın, dizinin adını ve ardından köşeli parantezleri belirtin ve saklaması gereken öğe sayısını belirtin:
    string arabalar[4] = { "Volvo", "BMW", "Ford", "Mazda" };
    cout << arabalar[0] << endl;

    arabalar[0] = "Opel";  // Belirli bir öğenin değerini değiştirmek için dizin numarasına bakın
    cout << arabalar[0] << endl;

    // Üç tam sayıdan oluşan bir dizi oluşturmak için şunu yazabilirsiniz:
    int numaralar[5] = { 10, 20, 30, 40, 50 };
    cout << numaralar[1] << endl;

    // Not: Dizi dizinleri 0 ile başlar: [0] ilk öğedir. [1] ikinci öğedir, vb.

    // for Döngü ile dizi öğeleri arasında döngü yapabilirsiniz.

    string arabalar1[4] = { "Volvo", "BMW", "Ford", "Mazda" };
    for (int i = 0; i < 4; i++)
    {
        cout << i << ": " << arabalar1[i] << "\n";
    }

    // Bir dizinin boyutunu elde etmek için sizeof() operatörü kullanabilirsiniz

    cout << sizeof(numaralar) << endl;  // int = 4 bayt olduğundan 5 (4 bayt x 5 öğe) = 20 bayt 

    // Bir dizinin kaç elemanı olduğunu bulmak için , dizinin boyutunu içerdiği veri türünün boyutuna bölmeniz gerekir
    int getArrayLength = sizeof(numaralar) / sizeof(int);
    cout << getArrayLength;

    return 0;
}
