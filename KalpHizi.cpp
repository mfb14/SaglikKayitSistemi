#include "KalpHizi.h"


//Yapýcý fonksiyon
//gun ay yýl þeklinde alýp Tarih nesnesine atýyoruz
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
//Parametresiz yapýcý fonksiyon
KalpHizi::KalpHizi()
{
	//parametresiz nesne oluþturduðumuzda programýn hata vermesini engeller
}
//yýkýcý fonksiyon
KalpHizi::~KalpHizi()
{
}
//adý set ediyoruz
void KalpHizi::setAdi(string &_ad)
{
	adi = _ad;
}
//soyadi set ediyoruz
void KalpHizi::setSoyadi(string &_soyad)
{
	soyadi = _soyad;
}
//adi döndürüyoruz
string KalpHizi::getirAdi()const {
	return adi;
}
//soyadi donduruyoruz
string KalpHizi::getirSoyadi()const {
	return soyadi;
}
//þimdiki ýlý döndürüyoruz yas hesaplamak için
int KalpHizi::getirSimdikiYil()const {
	return sYil;
}
//yaþý hesaplayýp donduruyoruz
int KalpHizi::getirYasi()const
{
	//Oluþturduðumuz bileþim sayesinde Tarih sýnýfýndaki yýlý kullanabiliyoruz
	return sYil - dogumTarihi.getirYil();
}
//maksimum kalp hýzýný hesaplayýp donduruyoruz
int KalpHizi::getirMaksimumKalpHizi()const {
	return kalpDeger - getirYasi();
}
//max hedef kalp hýzý deðerini hesaplayýp donduruyoruz
double KalpHizi::getirHedefKalpHiziMaks()const {

	return	getirMaksimumKalpHizi()*0.85;
}
//min hedef kalp hýzý deðerini hesaplayýp donduruyoruz
double KalpHizi::getirHedefKalpHiziMin()const {
	return	getirMaksimumKalpHizi()*0.5;
}

//Kullanýcýdan bilgileri alýyoruz
void KalpHizi::bilgiAl()
{
	cout << "Adinizi Giriniz:";
	cin >> adi;
	cout << "Soyadinizi Giriniz:";
	cin >> soyadi;	
	dogumTarihi.tarihAl();//Bileþim sayesinde Tarih sýnýfýnýn üye fonksiyonlarýný çaðýrabiliyoruz
	dogumTarihi.bugunTarihAl();
	sYil = dogumTarihi.getirSYil();
	//Aldýðýmýz bilgileri set ediyoruz
	KalpHizi(adi, soyadi, dogumTarihi.getirGun(), dogumTarihi.getirAy(), dogumTarihi.getirYil(),sYil);

}

//Kullanýcýdan alýp set edip hesapladýðýmýz bilgileri yazýyoruz
void KalpHizi::bilgiYaz()const
{
	/*cout << "Adi ve Soyadi" << adi << " " << soyadi << endl;
	cout << "Dogum Tarihi:"; 
	dogumTarihi.tarihYaz();*/
	cout << "Yasi:" << getirYasi() << endl;
	cout << "Max Kalp Hizi" << getirMaksimumKalpHizi() << endl;
	cout << "Hedef Kalp Hizi:" << getirHedefKalpHiziMin() <<" ile "<<getirHedefKalpHiziMaks()<<" araliginda olmalidir"<< endl << endl;
	
}
