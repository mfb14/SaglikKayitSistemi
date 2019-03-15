#pragma once
class Tarih
{
public:
	
	static const int aySayisi = 12;//Bir y�ldaki ay say�s�n�  belirtir
	Tarih(int,int, int);//Tarih s�n�f�n�n yap�c� fonksiyonu
	Tarih();//Tarih s�n�f�n�n parametresiz yap�c� fonksiyonu
	//kullan�c�dan �u an bulundu�u y�l istedi�inde
	//�a�r�l�cak yap�c� fonksiyon
	//sadece int t�r�nde 1 parametere al�r
	Tarih(int);
	~Tarih();//y�k�c� fonksiyon
	void tarihAl();//Do�um tarihi bilgilerini kullan�c�dan al�yor
	void bugunTarihAl();//Bug�n�n tarihini kullan�c�dan alir	
	void tarihYaz()const;//Do�um tarihini gun/ay/yil �eklinde yaziyor
	void setGun(int&);//Gunu set ediyoruz	
	void setAy(int&);//ayi set ediyoruz	
	void setYil(int&);//yili set ediyoruz
	void setSimdikiYil(int&);//�u anki y�l� set ediyor
	int getirYil()const;//y�l� d�nd�r�yo
	int getirSYil()const;//�u anki y�l� d�nd�r�yo
	int getirGun()const;//gunu d�nd�r�yor
	int getirAy()const;//ay� d�nd�r�yor
private:
	int yil;
	int gun;
	int ay;
	int simdikiYil;
	
};

