# Cplusplus
C++ ile sıfırdan ileri seviye Programlama

## C++ Sözdizimi
Daha iyi anlamak için aşağıdaki kodu parçalayalım:
Örnek
#include <iostream>
using namespace std;
  
int main() {
  cout << "Hello World!";
  return 0;
}
Örnek açıklama
Satır 7: (11. satırda kullanılan) gibi girdi ve çıktı nesneleriyle çalışmamıza izin veren #include <iostream> bir başlık dosyası kitaplığıdır. cout Başlık dosyaları, C++ programlarına işlevsellik ekler.
Satır 8: using namespace std standart kitaplıktan nesneler ve değişkenler için adlar kullanabileceğimiz anlamına gelir.
#include <iostream>Nasıl ve ne işe yaradığını anlamıyorsanız endişelenmeyin using namespace std. Bunu (neredeyse) her zaman programınızda görünen bir şey olarak düşünün.
Satır 9: Boş bir satır. C++ boşlukları yok sayar. Ancak kodu daha okunabilir hale getirmek için kullanıyoruz.
Satır 10: Bir C++ programında her zaman görünen başka bir şey int main(). Buna fonksiyon denir. Kıvrımlı parantez içindeki {} herhangi bir kod yürütülür.
Satır 11: cout ("see-out" olarak telaffuz edilir ) metin çıktısı almak/yazdırmak için ekleme operatörü (<< ) ile birlikte kullanılan bir nesnedir . Örneğimizde "Merhaba Dünya" çıktısını verecektir.
Not: Her C++ ifadesi noktalı virgülle ; biter.
Not: Gövdesi int main() şu şekilde de yazılabilir:
int main () { cout << "Hello World! "; return 0; }
Unutmayın: Derleyici beyaz boşlukları yok sayar. Ancak, birden çok satır kodu daha okunabilir hale getirir.
satır 12: return 0 ana işlevi sonlandırır.
Satır 13: } Ana işlevi fiilen sonlandırmak için kapanış küme parantezini eklemeyi unutmayın
________________________________________
Ad Alanı Atlanıyor
Standart ad alanı kitaplığı olmadan çalışan bazı C++ programları görebilirsiniz. Satır using namespace std atlanabilir ve std anahtar kelime ile değiştirilebilir, ardından  :: bazı nesneler için operatör gelebilir:
Örnek 
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
Standart ad alanı kitaplığını dahil etmek isteyip istemediğiniz size kalmış.
  
## Output(Print Text)
Nesne, cout operatörle birlikte << değerlerin çıktısını almak/metin yazdırmak için kullanılır:
Örnek
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
İstediğiniz kadar Cout nesne ekleyebilirsiniz. Ancak, çıktının sonuna yeni bir satır eklemediğini unutmayın:
Örnek
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}
Yeni Hatlar New Lines
Yeni bir satır eklemek için \n karakteri kullanabilirsiniz:
Örnek
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
}
İpucu: Arka arkaya iki \n karakter boş bir satır oluşturur:
Örnek
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n\n";
  cout << "I am learning C++";
  return 0;
}
Yeni bir satır eklemenin başka bir yolu da endl manipülatördür:
Örnek
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}
Hem \n ve endl satırları kırmak için kullanılır. Ancak \n en çok kullanılır.
Ama \n tam olarak nedir?
Yeni satır karakteri (\n) kaçış dizisi olarak adlandırılır ve imleci ekrandaki bir sonraki satırın başlangıcına doğru konumunu değiştirmeye zorlar. Bu yeni bir çizgi ile sonuçlanır.
Diğer geçerli kaçış dizilerinin örnekleri şunlardır:
 
Kaçış dizisi	Tanım	
\t	Yatay bir sekme oluşturur	
\\	Bir ters eğik çizgi karakteri (\) ekler	
\"	Çift tırnak karakteri ekler	

## C++ Değişkenleri || Variables

Değişkenler, veri değerlerini depolamak için kapsayıcılardır.
C++'da farklı türde değişkenler vardır (farklı anahtar sözcüklerle tanımlanır), örneğin:
  
•	integer- 123 veya -123 gibi tam sayıları ondalık olmadan saklar Kullanılan sayıların boyutuna göre int (4bayt) short int (2 bayt) veya 
  long int (8 bayt) kullanılarak tanımlanır.
•	kesirli sayılar- 19.99 veya -19,99 gibi ondalık sayılarla kayan noktalı sayıları saklar- gerçek sayılar (kesirli sayılar). Float ve double kullanılarak tanımlanır.
•	char- 'a' veya 'B' gibi tek karakterleri saklar. Karakter değerleri tek tırnak içine alınır
•	string- "Merhaba Dünya" gibi metinleri saklar. Dize değerleri çift tırnak içine alınır
•	boolean- değerleri iki durumla saklar: true(doğru) veya false(yanlış)
•	Void anahtar sözcüğünü kullanarak değeri olmayan
•	Wchar_t anahtar sözcüğünü kullanarak geniş karakter kullanılır
•	Yukarıdaki türler signed ve unsigned short ve long değiştiricileri kullanılarak değiştirilebilir.
  
### Değişkenleri Bildirme (Oluşturma)
  
Bir değişken oluşturmak için türü belirtin ve ona bir değer atayın:
  
Sözdizimi
type variableName = value;
  
Burada tür , C++ türlerinden biridir (örneğin int) ve değişkenAdı , değişkenin adıdır (örneğin, x veya myName ). Değişkene değer atamak için eşittir işareti kullanılır.
Bir sayı saklaması gereken bir değişken oluşturmak için aşağıdaki örneğe bakın:
Örnek
myNum türünde bir değişken oluşturun ve ona 15 int değerini atayın :
int myNum = 15;
cout << myNum;
  
Ayrıca değeri atamadan bir değişken bildirebilir ve değeri daha sonra atayabilirsiniz:
Örnek
int myNum;
myNum = 15;
cout << myNum;
  
Mevcut bir değişkene yeni bir değer atarsanız, önceki değerin üzerine yazacağını unutmayın:
Örnek
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10
  
Diğer çeşitler
Diğer veri türlerinin bir gösterimi:
Örnek
int myNum = 5;               // Tamsayı (ondalık olmayan tam sayı)
double myFloatNum = 5.99;    // Kayan nokta sayısı (ondalıklı)
char myLetter = 'D';         // Karakter
string myText = "Hello";     // String (metin)
bool myBoolean = true;       // Boolean (doğru veya yanlış)
Veri Tipleri bölümünde ayrı tipler hakkında daha fazla bilgi edineceksiniz.

### Değişkenleri Görüntüle
  
Nesne cout, değişkenleri görüntülemek için << operatörle birlikte kullanılır.
Hem metni hem de değişkeni birleştirmek için bunları << operatörle ayırın:
Örnek
int myAge = 35;
cout << "I am " << myAge << " years old.";
  
### Değişkenleri Birlikte Ekle
Başka bir değişkene değişken eklemek için + operatörü kullanabilirsiniz:
Örnek
int x = 5;
int y = 6;
int sum = x + y;
cout << sum;
  
### Birçok Değişken Bildirin
Aynı türden birden fazla değişken bildirmek için virgülle ayrılmış bir liste kullanın:
Örnek
int x = 5, y = 6, z = 50;
cout << x + y + z;
  
### Birden Çok Değişkene Bir Değer
Aynı değeri bir satırda birden çok değişkene de atayabilirsiniz :
Örnek
int x, y, z;
x = y = z = 50;
cout << x + y + z;
  
### C++ Tanımlayıcıları
  
Tüm C ++ değişkenleri benzersiz adlarla tanımlanmalıdır.
Bu benzersiz adlara tanımlayıcılar denir.
Tanımlayıcılar kısa adlar (x ve y gibi) veya daha açıklayıcı adlar (yaş, toplam, toplam Hacim) olabilir.
Not: Anlaşılır ve bakımı kolay kod oluşturmak için açıklayıcı adların kullanılması önerilir:
Örnek
// İyi
int minutesPerHour = 60;

// Tamam, ama m'nin gerçekte ne olduğunu anlamak o kadar kolay değil
int m = 60;
Değişkenleri adlandırmak için genel kurallar şunlardır:
•	İsimler harf, rakam ve alt çizgi içerebilir
•	İsimler bir harf veya alt çizgi (_) ile başlamalıdır
•	Adlar büyük/küçük harfe duyarlıdır ( myVar ve myvar farklı değişkenlerdir)
•	Adlar boşluk veya !, #, %, vb. gibi özel karakterler içeremez.
•	Ayrılmış sözcükler (örneğin, C++ anahtar sözcükleri gibi int) ad olarak kullanılamaz
  
## Sabitler || Constants
  
Başkalarının (veya kendinizin) mevcut değişken değerlerini geçersiz kılmasını istemiyorsanız, const anahtar kelimeyi kullanın (bu, değişkeni "sabit" olarak bildirir, bu da değiştirilemez ve salt okunur anlamına gelir):
Örnek
const int myNum = 15;  // myNum her zaman 15 yaşında olacak
myNum = 10;  // hata: salt okunur değişken 'myNum' atama
Değişmesi muhtemel olmayan değerleriniz olduğunda, değişkeni her zaman sabit olarak bildirmelisiniz:
Örnek
const int minutesPerHour = 60;
const float PI = 3.14;
