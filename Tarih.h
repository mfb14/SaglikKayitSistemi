#pragma once
class Tarih
{
public:
	
	static const int aySayisi = 12;//Bir yýldaki ay sayýsýný  belirtir
	Tarih(int,int, int);//Tarih sýnýfýnýn yapýcý fonksiyonu
	Tarih();//Tarih sýnýfýnýn parametresiz yapýcý fonksiyonu
	//kullanýcýdan þu an bulunduðu yýl istediðinde
	//çaðrýlýcak yapýcý fonksiyon
	//sadece int türünde 1 parametere alýr
	Tarih(int);
	~Tarih();//yýkýcý fonksiyon
	void tarihAl();//Doðum tarihi bilgilerini kullanýcýdan alýyor
	void bugunTarihAl();//Bugünün tarihini kullanýcýdan alir	
	void tarihYaz()const;//Doðum tarihini gun/ay/yil þeklinde yaziyor
	void setGun(int&);//Gunu set ediyoruz	
	void setAy(int&);//ayi set ediyoruz	
	void setYil(int&);//yili set ediyoruz
	void setSimdikiYil(int&);//Þu anki yýlý set ediyor
	int getirYil()const;//yýlý döndürüyo
	int getirSYil()const;//þu anki yýlý döndürüyo
	int getirGun()const;//gunu döndürüyor
	int getirAy()const;//ayý döndürüyor
private:
	int yil;
	int gun;
	int ay;
	int simdikiYil;
	
};

