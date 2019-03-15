#include "Tarih.h"
#include<iostream>
using namespace std;

//Gun/ay/yil �eklinde ald���z tarih s�n�f�n�n constructoru
//do�um tarihini al�yoruz
Tarih::Tarih(int _gun,int _ay,int _yil)
{
	//gunu ay� ve y�l� set ediyoruz
	setGun(_gun);
	setAy(_ay);
	setYil(_yil);
}
//Kullan�c�dan sadece �u anki y�l� ald���m�z zaman
//kullanaca��m�z constructor fonksiyon
Tarih::Tarih(int _sYil)
{
	setSimdikiYil(_sYil);//�imdiki y�l� set ediyoruz
}
//default constructor
Tarih::Tarih()
{
	//Parametre atamadan nene olu�turmam�z i�in
}

//Tarih s�n�f� y�k�c� fonksiyonu
Tarih::~Tarih()
{
}
//kullan�c�dan tarihi gun ay y�l �klinde al�yoruz
void Tarih::tarihAl() {
	cout << "Dogum Tarihini Gun/Ay/Yil Seklinde bosluk birakarak giriniz:";
	cin >> gun >> ay >> yil;
	Tarih(gun, ay, yil);//destructor� �a��rarak set ediyoruz
}
//kullan�c�dan bug�nun y�l�n� al�yoruz
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
	//ay� kontrol ediyoruz 12 den b�y�k olmamas� gerekir
	if (a>0 && a<aySayisi)
	{
		ay = a;
	}
	else
	{
		//ay 12 den b�y�kse 1 de�erini atar
		ay = 1;
	}
}
//y�l� set ediyoruz
void Tarih::setYil(int &y) {
	yil = y;
}
//�u anki y�l� set ediyoruz
void Tarih::setSimdikiYil(int &sy) {
	simdikiYil = sy;
}

//gunu d�nd�r�yor
int Tarih::getirGun()const {
	return gun;
}
//ay� d�nd�r�yor
int Tarih::getirAy()const {
	return ay;
}
//y�l� d�nd�r�yo
int Tarih::getirYil()const {
	return yil;
}
//�u anki y�l� d�nd�r�yo
int Tarih::getirSYil()const {
	return simdikiYil;
}
//Tarihi gun/ay/y�l �eklinde yazd�r�yoruz
void Tarih::tarihYaz()const
{
	cout << gun << "/" << ay << "/" << yil << endl;
}