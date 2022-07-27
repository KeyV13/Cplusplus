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

Bir sayı saklaması gereken bir değişken oluşturmak için Variables_Degiskenler02prg örneğe bakın:
Ayrıca değeri atamadan bir değişken bildirebilir ve değeri daha sonra atayabilirsiniz:
Mevcut bir değişkene yeni bir değer atarsanız, önceki değerin üzerine yazacağını unutmayın:


### Değişkenleri Görüntüle 
Nesne cout, değişkenleri görüntülemek için << operatörle birlikte kullanılır.
Hem metni hem de değişkeni birleştirmek için bunları << operatörle ayırın:

  
### Değişkenleri Birlikte Ekle
Başka bir değişkene değişken eklemek için + operatörü kullanabilirsiniz:
  
### Birçok Değişken Bildirin
Aynı türden birden fazla değişken bildirmek için virgülle ayrılmış bir liste kullanın:

  
### Birden Çok Değişkene Bir Değer
Aynı değeri bir satırda birden çok değişkene de atayabilirsiniz :

  
### C++ Tanımlayıcıları
  
Tüm C ++ değişkenleri benzersiz adlarla tanımlanmalıdır.
Bu benzersiz adlara tanımlayıcılar denir.
Tanımlayıcılar kısa adlar (x ve y gibi) veya daha açıklayıcı adlar (yaş, toplam, toplam Hacim) olabilir.
Not: Anlaşılır ve bakımı kolay kod oluşturmak için açıklayıcı adların kullanılması önerilir:


Değişkenleri adlandırmak için genel kurallar şunlardır:

•	İsimler harf, rakam ve alt çizgi içerebilir
•	İsimler bir harf veya alt çizgi (_) ile başlamalıdır
•	Adlar büyük/küçük harfe duyarlıdır ( myVar ve myvar farklı değişkenlerdir)
•	Adlar boşluk veya !, #, %, vb. gibi özel karakterler içeremez.
•	Ayrılmış sözcükler (örneğin, C++ anahtar sözcükleri gibi int) ad olarak kullanılamaz
  
## Sabitler || Constants
  
Başkalarının (veya kendinizin) mevcut değişken değerlerini geçersiz kılmasını istemiyorsanız, const anahtar kelimeyi kullanın (bu, değişkeni "sabit" olarak bildirir, bu da değiştirilemez ve salt okunur anlamına gelir):

Değişmesi muhtemel olmayan değerleriniz olduğunda, değişkeni her zaman sabit olarak bildirmelisiniz:


 ## C++ Kullanıcı Girişi
 
cout Değerleri çıktılamak (yazdırmak) için kullanıldığını zaten öğrendiniz.
Şimdi kullanıcı girdisi almak için cin kullanacağız.
cin çıkarma operatörü ( >> ) ile klavyeden veri okuyan önceden tanımlanmış bir değişkendir.
Aşağıdaki örnekte, kullanıcı x  değişkende saklanan bir sayı girebilir. Sonra  
x değerini yazdırıyoruz:


* cout "dışarı bak/görmek" olarak telaffuz edilir. Çıktı için kullanılır ve (<<) ekleme operatörünü kullanır.
* cin "içeri bak/görmek" olarak telaffuz edilir. Giriş için kullanılır ve (>>) çıkarma operatörünü kullanır.

## C++ Veri Türleri

C++'daki veri türleri temel olarak üç türe ayrılır:

### 1. Temel Veri Türleri : 
Bu veri türleri yerleşik veya önceden tanımlanmış veri türleridir ve değişkenleri bildirmek için doğrudan kullanıcı tarafından kullanılabilir. 
örnek: int, char, float, bool, vb. C++'da bulunan ilkel veri türleri şunlardır: 
•	Integer     (Tamsayı)
•	Character  (karekter)
•	Boolean   (Boole)
•	Floating Point ( Kayan Nokta)
•	Double Floating Point (Çift Kayan Nokta)
•	Valueless or Void (Değersiz veya Void)
•	Wide Character (Geniş Karakter)

### 2. Türetilmiş Veri Türleri: 
İlkel veya yerleşik veri türlerinden türetilen veri türleri, Türetilmiş Veri Türleri olarak adlandırılır. Bunlar dört tip olabilir: 
•	Function (fonksiyon)
•	Array       (Dizi)
•	Pointer     (İşaretçi,Katar)
•	Reference  (Referans)

### 3. Özet/Soyut veya Kullanıcı Tanımlı Veri Tipleri
•	Class (Sınıf)
•	Structure (Yapı)
•	Union  (Birlik)
•	Enumeration (Numaralandırma)
•	Typedef defined Datatype (Typedef tanımlı Veri Türü)

Değişkenler bölümünde açıklandığı gibi, C++'daki bir değişken belirtilen bir veri tipi olmalıdır:

### Temel Veri Tipleri
Veri türü, değişkenin depolayacağı bilgilerin boyutunu ve türünü belirtir:
•	Integer : Tamsayı veri türleri için kullanılan anahtar sözcük int'dir . Tamsayılar tipik olarak 4 bayt bellek alanı gerektirir ve -2147483648 ile 2147483647 arasında değişir.  
•	Character : Karakter veri tipi karakterleri saklamak için kullanılır. Karakter veri türü için kullanılan anahtar kelime char'dır . Karakterler tipik olarak 1 bayt bellek alanı gerektirir ve -128 ile 127 veya 0 ile 255 arasında değişir.  
•	Boolean : Boolean veri türü, Boolean veya mantıksal değerleri depolamak için kullanılır. Bir Boolean değişkeni, true veya false depolayabilir . Boolean veri türü için kullanılan anahtar sözcük bool'dur . 
•	Floating Poin: Kayan Nokta veri türü, tek duyarlıklı kayan noktalı değerleri veya ondalık değerleri depolamak için kullanılır. Kayan noktalı veri türü için kullanılan anahtar sözcük float'tır . Kayan değişkenler tipik olarak 4 bayt bellek alanı gerektirir. 
•	Double Floating Point: Çift Kayan Nokta veri türü, çift duyarlıklı kayan nokta değerlerini veya ondalık değerleri depolamak için kullanılır. Çift kayan noktalı veri türü için kullanılan anahtar sözcük double'dır . Çift değişkenler tipik olarak 8 bayt bellek alanı gerektirir. 
•	void : Void değeri olmayan anlamına gelir. void veri türü değersiz bir varlığı temsil eder. Değer döndürmeyen işlevler için void veri türü kullanılır. 
•	Geniş Karakter : Geniş karakter veri türü de bir karakter veri türüdür ancak bu veri türü normal 8 bitlik veri türünden daha büyük bir boyuta sahiptir. wchar_t tarafından temsil edilir. Genellikle 2 veya 4 bayt uzunluğundadır.

Sonraki bölümlerde bireysel veri türleri hakkında daha fazla bilgi edineceksiniz.

### Sayısal Türler
İnt 35 veya 1000 gibi bir tam sayıyı ondalık olmadan saklamanız gerektiğinde ve float veya double 9.99 veya 3.14515 gibi kayan noktalı bir sayıya (ondalıklı) ihtiyacınız olduğunda kullanın.


float vs .double
Kayan nokta değerinin kesinliği, değerin ondalık noktadan sonra kaç basamağa sahip olabileceğini gösterir. Kesinliği float yalnızca altı veya 
yedi ondalık basamak iken double değişkenlerin kesinliği yaklaşık 15 basamaktır. Double Bu nedenle çoğu hesaplama için kullanmak daha güvenlidir.

Bilimsel Sayılar
Kayan noktalı sayı, 10'un gücünü belirtmek için "e" ile gösterilen bilimsel bir sayı da olabilir:

### Boole Türleri
Anahtar sözcükle bir boolean veri türü bildirilir bool ve yalnızca true(doğru) veya false (yanlış) değerlerini alabilir.
Değer döndürüldüğünde, true = 1 ve false = 0.
Boolean değerleri, daha sonraki bir bölümde daha fazlasını öğreneceğiniz koşullu test için çoğunlukla kullanılır.

### Karakter Türleri
Veri char türü, tek bir karakter depolamak için kullanılır. Karakter, 'A' veya 'c' gibi tek tırnak içine alınmalıdır:
Alternatif olarak, belirli karakterleri görüntülemek için ASCII değerlerini kullanabilirsiniz:

