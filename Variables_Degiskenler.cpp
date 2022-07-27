// Variables_Degiskenler.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// sözdizimi şu şekildedir : type variableName = value;   tür veriAdi = deger;

#include <iostream>
using namespace std;

int main()
{
    int myNum = 15;
    cout << myNum;

    // değeri atamadan bir değişken bildirebilir ve değeri daha sonra atayabilirsiniz
    int myNum1;
    myNum1 = 15;
    cout << myNum1;

    //Mevcut bir değişkene yeni bir değer atarsanız, önceki değerin üzerine yazacağını unutmayın

    int myNum3 = 5;                // Tamsayı (ondalık olmayan tam sayı)
    double myFloatNum = 5.99;      // Kayan nokta sayısı (ondalıklı)
    char myLetter = 'D';           // Karakter
    string myText = "Merhaba";     // String (metin)
    bool myBoolean = true;         // Boolean (doğru veya yanlış)

    cout << "\n\n";

    // Hem metni hem de değişkeni birleştirmek için bunları << operatörle ayırın
    int benimYasim = 28;
    cout << "Ben " << benimYasim << " yasindayim." << endl;

    // Başka bir değişkene değişken eklemek için + operatörü kullanabilirsiniz
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum;

    cout << "\n\n";

    // Aynı türden birden fazla değişken bildirmek için virgülle ayrılmış bir liste kullanın:
    int k = 5, l = 6, m = 50;
    cout << k + l + m;

    cout << "\n\n";

    // Aynı değeri bir satırda birden çok değişkene de atayabilirsiniz
    int a, b, c;
    a = b = c = 50;
    cout << a + b + c;

    /*Tüm C ++ değişkenleri benzersiz adlarla tanımlanmalıdır.
     Bu benzersiz adlara tanımlayıcılar denir.
     Tanımlayıcılar kısa adlar (x ve y gibi) veya daha açıklayıcı adlar (yaş, toplam, toplam Hacim) olabilir.
     Not: Anlaşılır ve bakımı kolay kod oluşturmak için açıklayıcı adların kullanılması önerilir.*/

     // Tamam, ama m'nin gerçekte ne olduğunu anlamak o kadar kolay değil
     int m = 60;
     // İyi
     int minutesPerHour = 60;

     /* Değişkenleri adlandırmak için genel kurallar şunlardır:
      
     •	İsimler harf, rakam ve alt çizgi içerebilir
     •	İsimler bir harf veya alt çizgi (_) ile başlamalıdır
     •	Adlar büyük/küçük harfe duyarlıdır ( myVar ve myvar farklı değişkenlerdir)
     •	Adlar boşluk veya !, #, %, vb. gibi özel karakterler içeremez (Türkçe karektertler dahil).
     •	Ayrılmış sözcükler (örneğin, C++ anahtar sözcükleri gibi int) ad olarak kullanılamaz    


        # Sabitler || Constants
        Başkalarının(veya kendinizin) mevcut değişken değerlerini geçersiz kılmasını istemiyorsanız, 
        const anahtar kelimeyi kullanın(bu, değişkeni "sabit" olarak bildirir, bu da değiştirilemez ve 
        salt okunur anlamına gelir) */
    
    const int sayi = 15;  // sayiher zaman 15 olacak
    // sayi = 10;  // hata: salt okunur değişken 'sayi' atama

    // Değişmesi muhtemel olmayan değerleriniz olduğunda, değişkeni her zaman sabit olarak bildirmelisiniz :
    
    const int HerSaatteDakika = 60;
    const float PI = 3.14;


}
