#include "SaglikProfili.h"
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

//Constructor fonksiyonu
SaglikProfili::SaglikProfili(string _ad,string _soyad,double _boy,double _kg,Tarih &dt,Tarih &bg)
	:ad(_ad),soyad(_soyad),boy(_boy),kg(_kg),dogumTarihi(dt),bugun(bg)
{

}
//Parametresiz constructor fonksiyon
SaglikProfili::SaglikProfili() {
	setInfo(ad, soyad, dogumTarihi, bugun);
}
//Yýkýcý fonksiyon
SaglikProfili::~SaglikProfili()
{
}
//boyu döndürüyor
double  SaglikProfili::getirBoy()const {
	return boy;
}
//kiloyu döndürüyor
double  SaglikProfili::getirKilo()const {
	return kg;
}
//kitle indeksini hesaplýyor ve döndürüyor
double  SaglikProfili::getirKutleIndeksi()const {
	return  (kg / (boy*boy));
}
//Adý, soyadý, dogumtarihini,bugünün tarihini set ediyor
void SaglikProfili::setInfo(string _ad, string _soyad, Tarih dt,Tarih bg) {
	ad = _ad;
	soyad = _soyad;
	dogumTarihi = dt;
	bugun = bg;
}


//Kisiden gerekli bilgileri alýyoruz
//Ayný  zamanda doðum tarihini Tarih sýnýfýndan alýyoruz
void SaglikProfili::saglikProfiliAl() {
	
	cout << "Adinizi Giriniz:";
	cin >> ad;
	cout << "\nSoyadinizi Giriniz:";
	cin >> soyad;
	dogumTarihi.tarihAl();
	dogumTarihi.bugunTarihAl();
	cout << "\nBoyunuzu Giriniz:";
	cin >> boy;
	cout << "\nKilonuzu Giriniz:";
	cin >> kg;

	SaglikProfili(ad, soyad,boy,kg, dogumTarihi, bugun);
}
/*
*Aldýðýmýz bilgileri yazdýrýyoruz.
*Yadýrýrken Kalp Hýzý bilgilerini KalpHizi sýnýfýnýn
*üye fonksiyonlarýný çaðýrarak yazdýýyoruz
*doðum tarihini ise Tarih sýnýfýnýn
*üye fonksiyonlarý çaðýrarak yazdýrýyoruz
*/
void SaglikProfili::saglikProfiliYaz()const
{
	cout << "KISI BILGILERI \n-----------------------------------------------\n";
	cout << "Adi ve Soyadi:" << ad <<"  "<< soyad;
	cout << "\nDogum Tarihi:";
	dogumTarihi.tarihYaz();
	cout << "Boy:" << boy << "\tKilo:" << kg << endl;
	cout << "Kutle Indeksi:" << getirKutleIndeksi() << endl;
	cout << "KALP HIZI BILGILERI\n---------------------------------------------\n";
	kalpHizi.bilgiYaz();
	cout << endl;
}