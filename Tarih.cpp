#include "Tarih.h"
#include<iostream>
using namespace std;

//Gun/ay/yil þeklinde aldýðýz tarih sýnýfýnýn constructoru
//doðum tarihini alýyoruz
Tarih::Tarih(int _gun,int _ay,int _yil)
{
	//gunu ayý ve yýlý set ediyoruz
	setGun(_gun);
	setAy(_ay);
	setYil(_yil);
}
//Kullanýcýdan sadece þu anki yýlý aldýðýmýz zaman
//kullanacaðýmýz constructor fonksiyon
Tarih::Tarih(int _sYil)
{
	setSimdikiYil(_sYil);//þimdiki yýlý set ediyoruz
}
//default constructor
Tarih::Tarih()
{
	//Parametre atamadan nene oluþturmamýz için
}

//Tarih sýnýfý yýkýcý fonksiyonu
Tarih::~Tarih()
{
}
//kullanýcýdan tarihi gun ay yýl þklinde alýyoruz
void Tarih::tarihAl() {
	cout << "Dogum Tarihini Gun/Ay/Yil Seklinde bosluk birakarak giriniz:";
	cin >> gun >> ay >> yil;
	Tarih(gun, ay, yil);//destructorý çaðýrarak set ediyoruz
}
//kullanýcýdan bugünun yýlýný alýyoruz
void Tarih::bugunTarihAl() {
	cout << "Bugunun Tarihini Giriniz (yil olarak):";
	cin >> simdikiYil;
	setSimdikiYil(simdikiYil);//set ediyoruz
}

//gunu set ediyoruz
void Tarih::setGun(int &g) {
	
	gun = g;
}
//ayi set ediyoru<
void Tarih::setAy(int &a) {
	//ayý kontrol ediyoruz 12 den büyük olmamasý gerekir
	if (a>0 && a<aySayisi)
	{
		ay = a;
	}
	else
	{
		//ay 12 den büyükse 1 deðerini atar
		ay = 1;
	}
}
//yýlý set ediyoruz
void Tarih::setYil(int &y) {
	yil = y;
}
//þu anki yýlý set ediyoruz
void Tarih::setSimdikiYil(int &sy) {
	simdikiYil = sy;
}

//gunu döndürüyor
int Tarih::getirGun()const {
	return gun;
}
//ayý döndürüyor
int Tarih::getirAy()const {
	return ay;
}
//yýlý döndürüyo
int Tarih::getirYil()const {
	return yil;
}
//þu anki yýlý döndürüyo
int Tarih::getirSYil()const {
	return simdikiYil;
}
//Tarihi gun/ay/yýl þeklinde yazdýrýyoruz
void Tarih::tarihYaz()const
{
	cout << gun << "/" << ay << "/" << yil << endl;
}