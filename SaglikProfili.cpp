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
//Y�k�c� fonksiyon
SaglikProfili::~SaglikProfili()
{
}
//boyu d�nd�r�yor
double  SaglikProfili::getirBoy()const {
	return boy;
}
//kiloyu d�nd�r�yor
double  SaglikProfili::getirKilo()const {
	return kg;
}
//kitle indeksini hesapl�yor ve d�nd�r�yor
double  SaglikProfili::getirKutleIndeksi()const {
	return  (kg / (boy*boy));
}
//Ad�, soyad�, dogumtarihini,bug�n�n tarihini set ediyor
void SaglikProfili::setInfo(string _ad, string _soyad, Tarih dt,Tarih bg) {
	ad = _ad;
	soyad = _soyad;
	dogumTarihi = dt;
	bugun = bg;
}


//Kisiden gerekli bilgileri al�yoruz
//Ayn�  zamanda do�um tarihini Tarih s�n�f�ndan al�yoruz
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
*Ald���m�z bilgileri yazd�r�yoruz.
*Yad�r�rken Kalp H�z� bilgilerini KalpHizi s�n�f�n�n
*�ye fonksiyonlar�n� �a��rarak yazd��yoruz
*do�um tarihini ise Tarih s�n�f�n�n
*�ye fonksiyonlar� �a��rarak yazd�r�yoruz
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