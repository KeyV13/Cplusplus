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

