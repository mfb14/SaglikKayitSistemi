#pragma once
#include<iostream>
#include<string>
#include"Tarih.h"
using namespace std;
class KalpHizi
{
public:
	static const int kalpDeger = 220;
	KalpHizi(string, string, int,int,int,int);//KalpHizi constructor	
	KalpHizi();//Parametresiz constructor
	KalpHizi(Tarih&,Tarih&);
	~KalpHizi();//Yýkýcý fonksiyon
	void setAdi(string &);//Adi set ediyor
	void setSoyadi(string &);//Soyadi set ediyor
	string getirAdi()const;//adý donduruyor
	string getirSoyadi()const;//soyadi donduruyor
	int getirSimdikiYil()const;//simdiki yýlý dönduruyor yaþ hesabýnda kullanmak için
	int getirYasi()const;//yaþý hesaplayýp donduruyoruz
	int getirMaksimumKalpHizi()const;//max kalp hýzý hesaplayýp donduruyoruz
	double getirHedefKalpHiziMaks()const;	
	double getirHedefKalpHiziMin()const;//min hedef kalp hýzý deðerini hesaplayýp donduruyoruz
	void bilgiAl();//kullanýcýdan bilgi alýyoruz
	void bilgiYaz()const;//aldýðýmýz bilgileri yazdýrýyoruz
private:
	string adi;
	string soyadi;
	//Tarih sýnýfýndan doðum tarihini almak için 
	//Bileþim þeklinde oluþturduðumuz nesne
	Tarih dogumTarihi;
	int gun;
	int ay;
	int yil;
	int sYil;

};

