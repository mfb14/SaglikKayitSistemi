#pragma once
#include"KalpHizi.h"
#include"Tarih.h"
class SaglikProfili
{
public:
	SaglikProfili(string ,string ,double,double,Tarih&,Tarih&);//constructor fonksiyon
	SaglikProfili();//parametresiz constructor;
	~SaglikProfili();//y�k�c� fonksiyon
	double getirKilo()const;
	double getirBoy()const;
	double getirKutleIndeksi()const;//Kitle endeksi hesapklar ve dondurur
	void setInfo(string, string, Tarih,Tarih);	//Bilgileri set edior
	void saglikProfiliYaz()const;//Bilgileri Ekrana Yazar
	void saglikProfiliAl();//Kullan�c�dan Bilgi Al�r
private:
	KalpHizi kalpHizi;
	Tarih dogumTarihi;
	Tarih bugun;
	string ad;
	string soyad;
	double boy;
	double kg;	
};

