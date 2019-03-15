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
	~KalpHizi();//Y�k�c� fonksiyon
	void setAdi(string &);//Adi set ediyor
	void setSoyadi(string &);//Soyadi set ediyor
	string getirAdi()const;//ad� donduruyor
	string getirSoyadi()const;//soyadi donduruyor
	int getirSimdikiYil()const;//simdiki y�l� d�nduruyor ya� hesab�nda kullanmak i�in
	int getirYasi()const;//ya�� hesaplay�p donduruyoruz
	int getirMaksimumKalpHizi()const;//max kalp h�z� hesaplay�p donduruyoruz
	double getirHedefKalpHiziMaks()const;	
	double getirHedefKalpHiziMin()const;//min hedef kalp h�z� de�erini hesaplay�p donduruyoruz
	void bilgiAl();//kullan�c�dan bilgi al�yoruz
	void bilgiYaz()const;//ald���m�z bilgileri yazd�r�yoruz
private:
	string adi;
	string soyadi;
	//Tarih s�n�f�ndan do�um tarihini almak i�in 
	//Bile�im �eklinde olu�turdu�umuz nesne
	Tarih dogumTarihi;
	int gun;
	int ay;
	int yil;
	int sYil;

};

