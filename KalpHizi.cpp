#include "KalpHizi.h"


//Yap�c� fonksiyon
//gun ay y�l �eklinde al�p Tarih nesnesine at�yoruz
KalpHizi::KalpHizi(string _adi, string _soyadi, int g = 1, int a = 1, int y = 1900,int sy=2018)
	:adi(_adi), soyadi(_soyadi), dogumTarihi(g, a, y),sYil(sy)
{
	setAdi(_adi);
	setSoyadi(_soyadi);
	dogumTarihi.setYil(g);
	dogumTarihi.setYil(a);
	dogumTarihi.setYil(y);
	
	
}
KalpHizi::KalpHizi(Tarih &dt,Tarih &bt)
{
	
}
//Parametresiz yap�c� fonksiyon
KalpHizi::KalpHizi()
{
	//parametresiz nesne olu�turdu�umuzda program�n hata vermesini engeller
}
//y�k�c� fonksiyon
KalpHizi::~KalpHizi()
{
}
//ad� set ediyoruz
void KalpHizi::setAdi(string &_ad)
{
	adi = _ad;
}
//soyadi set ediyoruz
void KalpHizi::setSoyadi(string &_soyad)
{
	soyadi = _soyad;
}
//adi d�nd�r�yoruz
string KalpHizi::getirAdi()const {
	return adi;
}
//soyadi donduruyoruz
string KalpHizi::getirSoyadi()const {
	return soyadi;
}
//�imdiki �l� d�nd�r�yoruz yas hesaplamak i�in
int KalpHizi::getirSimdikiYil()const {
	return sYil;
}
//ya�� hesaplay�p donduruyoruz
int KalpHizi::getirYasi()const
{
	//Olu�turdu�umuz bile�im sayesinde Tarih s�n�f�ndaki y�l� kullanabiliyoruz
	return sYil - dogumTarihi.getirYil();
}
//maksimum kalp h�z�n� hesaplay�p donduruyoruz
int KalpHizi::getirMaksimumKalpHizi()const {
	return kalpDeger - getirYasi();
}
//max hedef kalp h�z� de�erini hesaplay�p donduruyoruz
double KalpHizi::getirHedefKalpHiziMaks()const {

	return	getirMaksimumKalpHizi()*0.85;
}
//min hedef kalp h�z� de�erini hesaplay�p donduruyoruz
double KalpHizi::getirHedefKalpHiziMin()const {
	return	getirMaksimumKalpHizi()*0.5;
}

//Kullan�c�dan bilgileri al�yoruz
void KalpHizi::bilgiAl()
{
	cout << "Adinizi Giriniz:";
	cin >> adi;
	cout << "Soyadinizi Giriniz:";
	cin >> soyadi;	
	dogumTarihi.tarihAl();//Bile�im sayesinde Tarih s�n�f�n�n �ye fonksiyonlar�n� �a��rabiliyoruz
	dogumTarihi.bugunTarihAl();
	sYil = dogumTarihi.getirSYil();
	//Ald���m�z bilgileri set ediyoruz
	KalpHizi(adi, soyadi, dogumTarihi.getirGun(), dogumTarihi.getirAy(), dogumTarihi.getirYil(),sYil);

}

//Kullan�c�dan al�p set edip hesaplad���m�z bilgileri yaz�yoruz
void KalpHizi::bilgiYaz()const
{
	/*cout << "Adi ve Soyadi" << adi << " " << soyadi << endl;
	cout << "Dogum Tarihi:"; 
	dogumTarihi.tarihYaz();*/
	cout << "Yasi:" << getirYasi() << endl;
	cout << "Max Kalp Hizi" << getirMaksimumKalpHizi() << endl;
	cout << "Hedef Kalp Hizi:" << getirHedefKalpHiziMin() <<" ile "<<getirHedefKalpHiziMaks()<<" araliginda olmalidir"<< endl << endl;
	
}
