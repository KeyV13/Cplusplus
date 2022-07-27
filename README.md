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
