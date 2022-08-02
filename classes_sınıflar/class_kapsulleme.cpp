// class_kapsulleme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Kapsüllemenin anlamı, "hassas" verilerin kullanıcılardan gizlendiğinden emin olmaktır. 
// Bunu başarmak için sınıf değişkenlerini/özniteliklerini private(sınıf dışından erişilemez) olarak bildirmelisiniz

#include <iostream>
using namespace std;

class calisan {
    private:
	    int maas;
    public:
	void setMaas(int m) {
		maas = m;
	}
	    int getMaas() {
		return maas;
	}
};

int main()
{
	m Obj;
	Obj.setMaas(5500);
	cout <<getMaas();
	return 0;

}

