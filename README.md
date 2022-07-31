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

## C++ Operatörleri
  
Operatörler, değişkenler ve değerler üzerinde işlem yapmak için kullanılır.
Aşağıdaki örnekte, iki değeri bir araya getirmek için + operatörü kullanıyoruz:
int x = 100 + 50;
  
C++, operatörleri aşağıdaki gruplara ayırır:
1.	Aritmetik operatörler
2.	İlişkisel Operatörler
3.	Mantıksal operatörler
4.	Bitsel Operatörler
5.	Atama Operatörleri
6.	Diğer Operatörler
  
  ### Aritmetik operatörler
  
Aritmetik operatörler, yaygın matematiksel işlemleri gerçekleştirmek için kullanılır.
Bu operatörler, işlenenler üzerinde aritmetik/matematiksel işlemler gerçekleştirmek için kullanılır.
  (+, -, *, /, %,++,--).
  
  ### Atama Operatörleri
  
Atama operatörleri, bir değişkene değer atamak için kullanılır. Atama operatörünün sol taraftaki işleneni bir değişkendir ve atama operatörünün sağ taraftaki işleneni bir değerdir. Sağ taraftaki değer, sol taraftaki değişken ile aynı veri tipinde olmalıdır, aksi takdirde derleyici hata verecektir. 
Aşağıdaki örnekte, x adlı bir değişkene 10 değerini atamak için atama operatörünü ( = )  kullanıyoruz.
  
  ### Karşılaştırma Operatörleri
  
Karşılaştırma operatörleri iki değeri karşılaştırmak için kullanılır.
Not: Bir karşılaştırmanın dönüş değeri doğru ( 1) veya yanlıştır ( 0).
  
  ### Mantıksal operatörler
  
Mantıksal operatörler, değişkenler veya değerler arasındaki mantığı belirlemek için kullanılır Bir mantıksal işlecin işleminin sonucu, true veya false bir Boolean değeridir
  
### Bitsel operatörler
  
Bitsel operatörler, işlenenler üzerinde bit düzeyinde işlemler gerçekleştirmek için kullanılır. Operatörler önce bit düzeyine dönüştürülür ve ardından işlenenler üzerinde hesaplama yapılır. Daha hızlı işlem için bit düzeyinde toplama, çıkarma, çarpma vb. matematiksel işlemler yapılabilir. Örneğin, C veya C++'da & operatörü olarak temsil edilen bitsel AND , işlenen olarak iki sayı alır ve iki sayının her bitinde AND yapar. AND'nin sonucu yalnızca her iki bit de 1 ise 1'dir
  
### Diğer operatörler: 
  
Yukarıdaki operatörlerin dışında, bazı özel görevleri gerçekleştirmek için kullanılan C veya C++'da bulunan başka operatörler de vardır. Bazıları burada tartışılmaktadır: 
a. sizeof operatörü : 
•	sizeof, C/C++ programlama dilinde çokça kullanılır.
•	İşleneninin boyutunu hesaplamak için kullanılabilen bir derleme zamanı tekli operatörüdür.
•	sizeof'un sonucu, genellikle size_t ile gösterilen işaretsiz integral tipindedir.
•	Temel olarak, operatörün boyutu, değişkenin boyutunu hesaplamak için kullanılır. 

b. Virgül Operatörü : 
•	Virgül operatörü (belirteç tarafından temsil edilir), ilk işlenenini değerlendiren ve sonucu atan bir ikili operatördür, ardından ikinci işleneni değerlendirir ve bu değeri (ve türü) döndürür.
•	Virgül operatörü, herhangi bir C operatörünün en düşük önceliğine sahiptir.
•	Virgül hem operatör hem de ayırıcı görevi görür. 

c. Koşullu Operatör : 
•	Koşul operatörü, Expression1? biçimindedir. İfade2: İfade3 .
•	Burada, İfade1 değerlendirilecek koşuldur. Eğer koşul(İfade1) True ise, o zaman çalıştıracağız ve İfade2'nin sonucunu döndüreceğiz, aksi halde koşul(İfade1) yanlış ise o zaman çalıştıracağız ve İfade3'ün sonucunu döndüreceğiz.
•	if..else ifadelerinin kullanımını koşullu operatörlerle değiştirebiliriz. 


d. nokta (.) ve ok (->) İşleçler:
•	Üye operatörler, sınıfların, yapıların ve birliklerin bireysel üyelerine başvurmak için kullanılır.
•	Nokta operatörü gerçek nesneye uygulanır
•	Ok operatörü, bir nesnenin işaretçisiyle birlikte kullanılır

e.  Cast Operatörü:
•	Döküm operatörleri, bir veri türünü diğerine dönüştürür. Örneğin, int(2.2000) 2 döndürür.
•	Döküm, bir veri türünü diğerine dönüştürülmeye zorlayan özel bir operatördür. 
•	C++ derleyicilerinin çoğu tarafından desteklenen en genel döküm aşağıdaki gibidir -   [ (tür) ifadesi ] .

f.  &,* Şebeke:
•	İşaretçi operatörü & bir değişkenin adresini döndürür. Örneğin &a; değişkenin gerçek adresini verecektir.
•	İşaretçi operatörü *, bir değişkenin işaretçisidir. Örneğin *var; bir var değişkenine işaret eder. 

## C++ Dizeleri String

Dizeler metin depolamak için kullanılır.

Bir stringdeğişken, çift tırnak içine alınmış bir karakter koleksiyonu içerir:
Dizeleri kullanmak için kaynak koduna, <string>kitaplığa ek bir başlık dosyası eklemelisiniz

Örnek
Bir tür değişken oluşturun stringve ona bir değer atayın:

#include <string>
string greeting = "Hello";

Operatör + , yeni bir dize oluşturmak üzere bunları bir araya getirmek için dizeler arasında kullanılabilir. Buna birleştirme denir.

Bir dizenin uzunluğunu almak için şu length() işlevi kullanın

Bir dizedeki karakterlere, köşeli parantez içindeki dizin numarasına bakarak erişebilirsiniz [].

dizelerle çalışırken, genellikle getline() bir metin satırını okumak için işlevi kullanırız. cinİlk parametre olarak ve dize değişkenini ikinci olarak alır.
getline (cin, fullName);

## Math / Matematik
C++, sayılar üzerinde matematiksel görevler gerçekleştirmenizi sağlayan birçok fonksiyona sahiptir.

### C++ <cmath> Üstbilgisi
#include <cmath>
sqrt(Kare kök), round(sayı yuvarlar) ve log (doğal logaritma) gibi diğer işlevler <cmath>başlık dosyasında bulunabilir:

Diğer popüler Matematik işlevlerinin bir listesi ( <cmath>kütüphaneden) aşağıdaki tabloda bulunabilir:

Function                Tanım
    
    abs(x)              x'in mutlak değerini döndürür
    acos(x)             x'in ark kosinini döndürür
    asin(x)             x'in ark sinüsünü döndürür
    atan(x)             x'in arctangent'ini döndürür
    tcmb(x)             x'in küp kökünü döndürür
    ceil(x)             en yakın tamsayıya yuvarlanmış x değerini döndürür
    cos(x)              x'in kosinüsünü döndürür
    cosh(x)             x'in hiperbolik kosinüsünü döndürür
    exp(x)              e^x değerini döndürür
    expm1(x)            e^x -1 değerini döndürür
    fabs(x)             Kayan bir x'in mutlak değerini döndürür
    fdım(x, y)          x ve y arasındaki pozitif farkı döndürür
    floor(x)            en yakın tamsayıya yuvarlanmış x değerini döndürür
    hipotenüs(x, y)     Ara taşma veya alt akış olmadan sqrt'yi (x2 + y2) döndürür
    fma(x, y, z)        hassasiyeti kaybetmeden x * y + z değerini döndürür
    fmax(x, y)          Kayan bir x ve y'nin en yüksek değerini döndürür
    fmin(x, y)          Kayan bir x ve y'nin en düşük değerini döndürür
    fmod (x, y)         x / y'nin kayan nokta kalanını döndürür
    pow(x, y)           x değerini y'nin gücüne döndürür
    sin(x)              x'in sinüsünü döndürür (x radyan cinsinden)
    sinh(x)             bir çift değerin hiperbolik sinüsünü döndürür
    tan(x)              Bir açının tanjantını döndürür
    tanh(x)             bir çift değerin hiperbolik tanjantını döndürür 
    
   ## Conditions Koşullar/ Karar Yapıları
   
If İfadeleri
C++, matematikteki olağan mantıksal koşulları destekler:

Daha az: a < b
Küçük veya eşit: a <= b
Şundan büyüktür: a > b
Büyük veya eşit: a >= b
a == b'ye eşit
Eşit Değil: a != b

Farklı kararlar için farklı eylemler gerçekleştirmek için bu koşulları kullanabilirsiniz.

C++ aşağıdaki koşullu ifadelere sahiptir:

if Belirtilen koşul doğruysa yürütülecek kod bloğunu belirtmek için kullanın
else Aynı koşul yanlışsa yürütülecek kod bloğunu belirtmek için kullanın
else if İlk koşul yanlışsa, test edilecek yeni bir koşul belirtmek için kullanın .
switch Yürütülecek birçok alternatif kod bloğu belirtmek için kullanın

if Bildirimi
Bir koşul true ise yürütülecek C++ kod bloğunu belirtmek için if ifadeyi kullanın
if Küçük harflerle yazılmış olduğuna dikkat edin . Büyük harfler (If veya IF) bir hata üretecektir.

Sözdizimi:
if (koşul) {
  // koşul doğruysa çalıştırılacak kod bloğu
}

Else İfadesi
Koşul false ise yürütülecek kod bloğunu belirtmek için else deyimini kullanın.

if (koşul) {
  // koşul doğruysa çalıştırılacak kod bloğu
} else
koşul yanlışsa yürütülecek kod bloğu

else if bildirimi

İlk koşul false ise yeni bir koşul belirtmek için else if ifadeyi kullanın

sözdizim:

if (condition1) {
  // koşul1 doğruysa yürütülecek kod bloğu
} else if (koşul2) {
  // koşul1 false ve koşul2 true ise yürütülecek kod bloğu
} else {
  // koşul1 yanlışsa ve koşul2 yanlışsa yürütülecek kod bloğu
}


Kısa El If...Else (Üçlü Operatör)
Ayrıca, üç işlenenden oluştuğu için üçlü operatör olarak bilinen başka bir kısa el de vardır . Birden çok kod satırını tek bir satırla değiştirmek için kullanılabilir. Genellikle basit if else ifadelerini değiştirmek için kullanılır:

Sözdizimi:

değişken (koşul) =? ifade Doğru: ifade Yanlış;

## C++ Switch ifadeleri

Yürütülecek birçok kod bloğundan birini seçmek için switchifadeyi kullanın.
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

Bu nasıl çalışır:

İfade switchbir kez değerlendirilir
İfadenin değeri, her birinin değerleriyle karşılaştırılır.case
Bir eşleşme varsa, ilgili kod bloğu yürütülür.
ve anahtar sözcükleri isteğe bağlıdır breakve defaultbu bölümde daha sonra açıklanacaktır.

Break Anahtar Sözcüğü
C ++ bir break anahtar sözcüğüne ulaştığında, anahtar bloğundan ayrılır.

Bu, bloğun içinde daha fazla kod ve vaka testinin yürütülmesini durduracaktır.

Bir eşleşme bulunduğunda ve iş bittiğinde, mola zamanı. Daha fazla test için gerek yoktur.

Bir kesme, anahtar bloğundaki kodun geri kalanının yürütülmesini "yok saydığı" için çok fazla yürütme süresi kazandırabilir.

Not: default anahtar sözcük, anahtardaki son ifade olarak kullanılmalıdır ve break gerekmez

## while Döngüsü / While Loop

Döngüler, belirli bir koşula ulaşıldığı sürece bir kod bloğunu çalıştırabilir.

Döngüler kullanışlıdır çünkü zamandan tasarruf sağlarlar, hataları azaltırlar ve kodu daha okunabilir hale getirirler.

While döngüsü, belirtilen koşul doğru olduğu sürece bir kod bloğundan geçer:

while (koşul) {
  // yürütülecek kod bloğu
}

Not: Koşulda kullanılan değişkeni artırmayı unutmayın, aksi takdirde döngü asla bitmez!

### Do/While Loop

Do /while döngüsü, while döngüsünün bir çeşididir. Bu döngü, koşulun doğru olup olmadığını kontrol etmeden önce kod bloğunu bir kez yürütecek ve koşul doğru olduğu sürece döngüyü tekrarlayacaktır.

do {
  // yürütülecek kod bloğu
}
while (condition);

## C++ For Loop

Bir kod bloğunda kaç kez döngü yapmak istediğinizi tam olarak bildiğinizde, while döngüsü yerine for döngüsünü kullanın:

Sözdizimi
for (deyim 1; deyim 2; deyim 3) {
  // yürütülecek kod bloğu
}

Deyim 1, kod bloğunun yürütülmesinden önce (bir kez) yürütülür.

Deyim 2, kod bloğunu yürütme koşulunu tanımlar.

Kod bloğu çalıştırıldıktan sonra deyim 3 (her seferinde) yürütülür


Bu öğreticinin önceki bir bölümünde kullanılan break deyimini zaten gördünüz. Bir switch ifadesinden "atlamak" için kullanıldı.

Break deyimi bir döngüden atlamak için de kullanılabilir.

Continue deyimi, belirtilen bir koşul oluşursa bir yinelemeyi (döngüde) keser ve döngüdeki bir sonraki yinelemeye devam eder

## C ++ Dizileri / Arrays
Diziler, her bir değer için ayrı değişkenler bildirmek yerine, tek bir değişkende birden çok değeri depolamak için kullanılır.

Bir dizi bildirmek için değişken türünü tanımlayın, dizinin adını ve ardından köşeli parantezleri belirtin ve saklaması gereken öğe sayısını belirtin:

Köşeli parantez içindeki dizin numarasına [] başvurarak bir dizi öğesine erişirsiniz.

Not: Dizi dizinleri 0 ile başlar: [0] ilk öğedir. [1] ikinci unsurdur, vb.

Dizinin boyutunu belirtmeniz gerekmez. Ancak yapmazsanız, yalnızca içine eklenen öğeler kadar büyük olacaktır

Bir dizinin boyutunu elde etmek için sizeof() operatörü kullanabilirsiniz

Çok Boyutlu Diziler
Çok boyutlu bir dizi, bir dizi dizisidir.

Çok boyutlu bir diziyi bildirmek için, değişken türünü tanımlayın, dizinin adını ve ardından ana dizinin kaç öğeye sahip olduğunu belirten köşeli parantezleri ve ardından alt dizilerin kaç öğeye sahip olduğunu gösteren başka bir köşeli parantez kümesini belirtin. :

string letters[2][4];
Sıradan dizilerde olduğu gibi, bir dizi hazır bilgisiyle - küme parantezleri içinde virgülle ayrılmış bir listeyle değerler ekleyebilirsiniz. Çok boyutlu bir dizide, bir dizi değişmezindeki her öğe başka bir dizi değişmezidir.

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

## C++ Structures (struct)
Struct (yapılar olarak da adlandırılır), ilgili birkaç değişkeni tek bir yerde gruplandırmanın bir yoludur. Yapıdaki her değişken, yapının bir üyesi olarak bilinir.

Bir diziden farklı olarak, bir yapı birçok farklı veri türü (int, string, bool, vb.) İçerebilir.).

Bir Yapı Oluştur
Bir yapı oluşturmak için struct anahtar sözcüğünü kullanın ve üyelerinin her birini küme parantezleri içinde bildirin.

Bildirimden sonra yapı değişkeninin adını belirtin (aşağıdaki örnekte Yapımım):

struct {           // Yapı bildirimi
  int myNum;       // Üye (int değişkeni)
  string myString; // Üye (string değişkeni)
}  yapim;          // Yapı değişkeni


Bir yapının üyelerine erişmek için nokta sözdizimini (.):

Birçok değişkende tek bir yapı kullanmak için virgül (,) kullanabilirsiniz:

Yapıya bir ad vererek, bunu bir veri türü olarak değerlendirebilirsiniz. Bu, herhangi bir zamanda programın herhangi bir yerinde bu yapıya sahip değişkenler oluşturabileceğiniz anlamına gelir.

## References
Referans değişkeni, varolan bir değişkene "referans" dır ve & işleci ile oluşturulur:

Önceki sayfadaki örnekte, & işleci bir başvuru değişkeni oluşturmak için kullanıldı. Ancak, değişkenin bilgisayarda depolandığı konum olan bir değişkenin bellek adresini almak için de kullanılabilir.

C++'da bir değişken oluşturulduğunda, değişkene bir bellek adresi atanır. Ve değişkene bir değer atadığımızda, bu bellek adresinde saklanır.

## pointer / işaretçi

İşaretçi değişkeni, aynı türden bir veri türüne (int veya string gibi) işaret eder ve * işleciyle oluşturulur. Çalıştığınız değişkenin adresi işaretçiye atanır

Örnek açıklandı
Yıldız işareti * (string* ptr) kullanarak bir dize değişkenine işaret eden ptr adında bir işaretçi değişkeni oluşturun. İşaretçinin türünün, birlikte çalıştığınız değişkenin türüyle eşleşmesi gerektiğini unutmayın.

Food adlı değişkenin bellek adresini saklamak için & işlecini kullanın ve işaretçiye atayın.

Şimdi, ptr gıdanın hafıza adresinin değerini tutuyor.

İpucu: İşaretçi değişkenlerini bildirmenin üç yolu vardır, ancak ilk yol tercih edilir:

string* mystring; // Tercih edilen
dize *mystring;
dize * mystring;


Önceki sayfadaki örnekte, bir değişkenin bellek adresini almak için işaretçi değişkenini kullandık (& referans operatörüyle birlikte kullanılır). Ancak, * işlecini (dereference işleci) kullanarak değişkenin değerini almak için işaretçiyi de kullanabilirsiniz.:
işaretçinin değerini de değiştirebilirsiniz. Ancak bunun orijinal değişkenin değerini de değiştireceğini unutmayın


## Functions / işlevler (fonksiyonlar)

İşlev, yalnızca çağrıldığında çalışan bir kod bloğudur.

Parametreler olarak bilinen verileri bir işleve geçirebilirsiniz.

İşlevler belirli eylemleri gerçekleştirmek için kullanılır ve bunlar kodu yeniden kullanmak için önemlidir: Kodu bir kez tanımlayın ve birçok kez kullanın.

void myFunction() {
  // code to be executed
}

Örnek
myFunction () işlevin adıdır
void , işlevin bir dönüş değerine sahip olmadığı anlamına gelir. Bir sonraki bölümde dönüş değerleri hakkında daha fazla bilgi edineceksiniz
işlevin (gövde) içine, işlevin ne yapması gerektiğini tanımlayan kod ekleyin

Bir İşlevi Çağırma
Bildirilen işlevler hemen yürütülmez. Bunlar "daha sonra kullanılmak üzere kaydedilir" ve çağrıldıklarında daha sonra çalıştırılırlar.

Bir işlevi çağırmak için işlevin adını ve ardından iki parantez () ve noktalı virgül yazın.

Bir işlev birden çok kez çağrılabilir.

### Parametreler ve Argümanlar
Parametre olarak işlevlere bilgi aktarılabilir. Parametreler, işlevin içindeki değişkenler olarak işlev görür.

Parametreler parantez içinde işlev adından sonra belirtilir. İstediğiniz kadar parametre ekleyebilir, bunları virgülle ayırmanız yeterlidir:

Varsayılan Parametre Değeri
Eşittir işaretini (=) kullanarak varsayılan parametre değerini de kullanabilirsiniz.

Çoklu Parametreler
Fonksiyonun içine istediğiniz kadar parametre ekleyebilirsiniz.

Dönüş Değerleri
Önceki örneklerde kullanılan void anahtar sözcüğü, işlevin bir değer döndürmemesi gerektiğini belirtir. İşlevin bir değer döndürmesini istiyorsanız, bir veri türü (int, string vb.) Kullanabilirsiniz.) void yerine işlevin içindeki return anahtar sözcüğünü kullanın.

Referansa Göre Geç
Önceki sayfadaki örneklerde, parametreleri bir işleve geçirdiğimizde normal değişkenler kullandık. İşleve bir başvuru da iletebilirsiniz. Bağımsız değişkenlerin değerini değiştirmeniz gerektiğinde bu yararlı olabilir.
Dizileri bir işleve de iletebilirsiniz

Parametre sayısı ve / veya türü farklı olduğu sürece birden çok işlev aynı ada sahip olabilir.

### Özyineleme
Özyineleme, bir işlev çağrısının kendisini yapma tekniğidir. Bu teknik, karmaşık problemleri çözülmesi daha kolay olan basit problemlere ayırmanın bir yolunu sağlar.

## Classes /Sınıflar OOP

### C ++ OOP nedir?

OOP Nesne Yönelimli Programlama anlamına gelir.

Prosedürel programlama, veri üzerinde işlem yapan yordamları veya işlevleri yazmakla ilgiliyken, nesne yönelimli programlama, hem veri hem de işlevleri içeren nesneler oluşturmakla ilgilidir.

Nesne yönelimli programlamanın prosedürel programlamaya göre birçok avantajı vardır:

OOP daha hızlı ve daha kolay yürütülür
OOP, programlar için net bir yapı sağlar
OOP, C ++ kodunun kuru kalmasına yardımcı olur "Kendinizi Tekrar Etmeyin" ve kodun bakımını, değiştirilmesini ve hata ayıklanmasını kolaylaştırır
OOP, daha az kod ve daha kısa geliştirme süresiyle tam yeniden kullanılabilir uygulamalar oluşturmayı mümkün kılar
İpucu: "Kendini Tekrar Etme" (DRY) ilkesi, kodun tekrarını azaltmakla ilgilidir. Uygulama için ortak olan kodları ayıklamanız ve bunları tek bir yere yerleştirmeniz ve tekrarlamak yerine yeniden kullanmanız gerekir.

C ++ Sınıflar ve Nesneler nelerdir?
Sınıflar ve nesneler, nesne yönelimli programlamanın iki ana yönüdür.
Yani, bir sınıf nesneler için bir şablondur ve bir nesne bir sınıfın örneğidir.

Tek tek nesneler oluşturulduğunda, sınıftaki tüm değişkenleri ve işlevleri devralırlar.

Bir sonraki bölümde sınıflar ve nesneler hakkında çok daha fazla bilgi edineceksiniz.

### C ++ Sınıfları / Nesneleri
C ++ nesne yönelimli bir programlama dilidir.

C ++ 'daki her şey, nitelikleri ve yöntemleri ile birlikte sınıflar ve nesnelerle ilişkilendirilir. Örneğin: gerçek hayatta, bir araba bir nesnedir. Otomobilin ağırlık ve renk gibi özellikleri ve sürüş ve fren gibi yöntemleri vardır.

Öznitelikler ve yöntemler temel olarak sınıfa ait değişkenler ve işlevlerdir. Bunlara genellikle "sınıf üyeleri" denir.

Sınıf, programımızda kullanabileceğimiz kullanıcı tanımlı bir veri türüdür ve nesne oluşturucu veya nesne oluşturmak için bir "plan" olarak çalışır.

Örnek
"MyClass" adlı bir sınıf oluşturun:

class MyClass {      // sınıf
  public:            // Erişim belirticisi
    int myNum;       // Öznitelik (int değişkeni)
    string myString; // Öznitelik (dize değişkeni)
};

Örnek açıklaması:

Class anahtar sözcüğü MyClass adlı bir sınıf oluşturmak için kullanılır.
Public anahtar sözcüğü, sınıfın üyelerine (özniteliklerine ve yöntemlerine) sınıfın dışından erişilebileceğini belirten bir erişim belirticisidir. Daha sonra erişim belirticileri hakkında daha fazla bilgi edineceksiniz.
Sınıfın içinde bir tamsayı değişkeni myNum ve bir dize değişkeni myString vardır. Değişkenler bir sınıf içinde bildirildiğinde, öznitelikler olarak adlandırılır.
Son olarak, sınıf tanımını noktalı virgülle sonlandırın ;.

### Class Methods / Sınıf metod (Yöntemleri)

Metodlar , sınıfa ait işlevlerdir.

Bir sınıfa ait işlevleri tanımlamanın iki yolu vardır:

Sınıf tanımı içinde
Dış sınıf tanımı

Not: Özniteliklere eriştiğiniz gibi yöntemlere erişirsiniz; sınıfın bir nesnesini oluşturarak ve nokta sözdizimini kullanarak (.)

Sınıf tanımının dışında bir işlev tanımlamak için, onu sınıfın içinde bildirmeniz ve ardından sınıfın dışında tanımlamanız gerekir. Bu, sınıfın adını, ardından kapsam çözümlemesi :: işlecini ve ardından işlevin adını belirterek yapılır:

Ayrıca parametreler ekleyebilirsiniz

### constructors

C ++ 'daki bir yapıcı, bir sınıfın nesnesi oluşturulduğunda otomatik olarak çağrılan özel bir yöntemdir.

Bir yapıcı oluşturmak için sınıfla aynı adı ve ardından parantez () kullanın.
Not: Yapıcı sınıfla aynı ada sahiptir, her zaman herkese açıktır ve herhangi bir dönüş değeri yoktur.

Yapıcı(Constructors ) Parametreleri
Kurucular, özniteliklerin başlangıç değerlerini ayarlamak için yararlı olabilecek parametreleri (normal işlevler gibi) de alabilir.

Fonksiyonlar gibi, kurucular da sınıfın dışında tanımlanabilir. Önce sınıfın içindeki yapıcıyı bildirin ve ardından sınıfın adını, ardından kapsam çözümlemesi :: işlecini ve ardından yapıcının adını (sınıfla aynı olan) belirterek sınıfın dışında tanımlayın

C ++ 'da üç erişim belirticisi vardır:

public - üyelere sınıf dışından erişilebilir
private -  üyelere sınıf dışından erişilemez (veya görüntülenemez)
protected - üyelere sınıf dışından erişilemez, ancak devralınan sınıflarda erişilebilir. Daha sonra Miras hakkında daha fazla bilgi edineceksiniz.

### Encapsulation Kapsülleme
Kapsüllemenin anlamı, "hassas" verilerin kullanıcılardan gizlendiğinden emin olmaktır. Bunu başarmak için sınıf değişkenlerini / özniteliklerini özel olarak bildirmeniz gerekir (sınıfın dışından erişilemez). Başkalarının özel bir üyenin değerini okumasını veya değiştirmesini istiyorsanız, herkese açık get ve set yöntemleri sağlayabilirsiniz

Neden Kapsülleme?
Sınıf özniteliklerinizi özel olarak bildirmek iyi bir uygulama olarak kabul edilir (olabildiğince sık). Kapsülleme, verilerinizin daha iyi kontrolünü sağlar, çünkü siz (veya başkaları) kodun bir bölümünü diğer bölümleri etkilemeden değiştirebilirsiniz
Artan veri güvenliği

### Inheritance Miras

C ++ 'da öznitelikleri ve yöntemleri bir sınıftan diğerine devralmak mümkündür. "Miras kavramı" nı iki kategoriye ayırıyoruz:

*derived class (child) Türkçesi:  türetilmiş sınıf (alt) - başka bir sınıftan devralan sınıf
*base class (parent) Türkçesi: temel sınıf (üst sınıf) - devralınan sınıf
Bir sınıftan devralmak için : sembolünü kullanın.

Neden Ve Ne Zaman "Miras" Kullanılır?
- Kod yeniden kullanılabilirliği için kullanışlıdır: yeni bir sınıf oluşturduğunuzda varolan bir sınıfın özniteliklerini ve yöntemlerini yeniden kullanın.

Bir sınıf, zaten başka bir sınıftan türetilmiş olan bir sınıftan da türetilebilir.
Bir sınıf, virgülle ayrılmış bir liste kullanılarak birden fazla temel sınıftan da türetilebilir

### Polimorfizm
Polimorfizm "birçok form" anlamına gelir ve kalıtımla birbiriyle ilişkili birçok sınıfımız olduğunda ortaya çıkar.

Önceki bölümde belirttiğimiz gibi; Devralma, öznitelikleri ve yöntemleri başka bir sınıftan devralmamızı sağlar. Polimorfizm, farklı görevleri gerçekleştirmek için bu yöntemleri kullanır. Bu, tek bir eylemi farklı şekillerde gerçekleştirmemizi sağlar.

## C ++ Dosyaları File
Fstream kitaplığı dosyalarla çalışmamızı sağlar.

Fstream kitaplığını kullanmak için hem standart <iostream> hem de <fstream> üstbilgi dosyasını ekleyin:

Örnek
#include <iostream>
#include <fstream>

dosyaları oluşturmak, yazmak veya okumak için kullanılan fstream kitaplığına dahil edilen üç sınıf şunlardır:
ofstream - Dosyaları oluşturur ve yazar
ifstream - Dosyalardan okur
fstream - Ofstream ve ifstream birleşimi: dosyalar oluşturur, okur ve yazar


Bir Dosya Oluşturma ve Yazma
Bir dosya oluşturmak için ofstream veya fstream sınıfını kullanın ve dosyanın adını belirtin.

Dosyaya yazmak için ekleme işlecini (<<) kullanın.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Metin dosyası oluşturma ve açma
  ofstream MyFile("filename.txt");

  // Dosyaya yaz
  MyFile << "Files can be tricky, but it is fun enough!";

  // Dosyayı kapat
  MyFile.close();
}

Dosyayı neden kapatıyoruz?
İyi bir uygulama olarak kabul edilir ve gereksiz bellek alanını temizleyebilir.

Dosya Okuma
Bir dosyadan okumak için ofstream veya fstream sınıfını ve dosyanın adını kullanın.

Dosyayı satır satır okumak ve dosyanın içeriğini yazdırmak için getline() işleviyle (ifstream sınıfına ait) birlikte bir while döngüsü de kullandığımızı unutmayın:

string myText;  // Metin dosyasının çıktısını almak için kullanılan bir metin dizesi oluşturma

ifstream MyReadFile("filename.txt"); // Metin dosyasından okuma
while (getline (MyReadFile, myText)) { // Dosyayı satır satır okumak için getline() işleviyle birlikte bir while döngüsü kullanın
  cout << myText;       // Dosyadan metin çıkışı
}
MyReadFile.close();

## C ++ İstisnaları Exceptions
C ++ kodu yürütülürken farklı hatalar oluşabilir: programcı tarafından yapılan kodlama hataları, yanlış girişten kaynaklanan hatalar veya öngörülemeyen diğer şeyler.

Bir hata oluştuğunda, C ++ normal olarak durur ve bir hata iletisi oluşturur. Bunun için teknik terim şudur: C ++ bir istisna atar (bir hata atar).

### C++ try and catch

C ++ 'da istisna işleme üç anahtar kelimeden oluşur: try, throw ve catch:

Try deyimi, yürütülürken hatalar için sınanacak bir kod bloğu tanımlamanıza olanak tanır.

Throw anahtar sözcüğü, bir sorun algılandığında özel bir hata oluşturmamızı sağlayan bir istisna atar.

Catch deyimi, try bloğunda bir hata oluşursa yürütülecek kod bloğunu tanımlamanıza olanak tanır.

Dene ve yakala anahtar kelimeleri çiftler halinde gelir:

try {
  // Denenecek kod bloğu
  throw exception;  // Bir sorun ortaya çıktığında bir istisna atın
}
catch () {
  // Hataları işlemek için kod bloğu
}

Aşağıdaki örneği göz önünde bulundurun:

Örnek
try {
  int yaş = 15;
  if (yaş > = 18) {
    cout << "Erişim izni verildi - yeterince yaşlısın.";
  } else {
    throwe (yaş);
  }
}
catch (int myNum) {
  cout << "Erişim reddedildi - En az 18 yaşında olmalısınız.\ve";
  cout << "Yaş: " << myNum;
}

Örnek açıklamsı:
Bazı kodları test etmek için try bloğunu kullanırız: Yaş değişkeni 18'den küçükse, bir istisna atar ve bunu catch bloğumuzda ele alırız.

Yakalama bloğunda hatayı yakalar ve bu konuda bir şeyler yaparız. Catch deyimi bir parametre alır: örneğimizde, age değerini çıkarmak için bir int değişkeni (myNum) kullanırız (çünkü try bloğunda (age) int türünde bir istisna atıyoruz).

Herhangi bir hata oluşmazsa (örneğin, 15 yerine 20 yaşındaysa, yani 18'den büyük olacaksa), yakalama bloğu atlanır:
int age = 20;
Düzenleme amacıyla özel bir hata numarası / kodu gibi bir referans numarası çıkarmak için throw anahtar sözcüğünü de kullanabilirsiniz:
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Error number: " << myNum;
}

İstisnalar Her Türlü işlemek (...)
Try bloğunda kullanılan atma türünü bilmiyorsanız, "üç nokta" sözdizimini kullanabilirsiniz (...) her türlü istisnayı idare edecek catch bloğunun içinde:

try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Access denied - You must be at least 18 years old.\n";
}
