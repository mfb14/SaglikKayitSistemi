#include<iostream>
#include"KalpHizi.h"
#include"Tarih.h"
#include"SaglikProfili.h"
using namespace std;

int main()
{
	

	KalpHizi Kisi("Mustafa", "Bilen", 20, 11, 1996,2018);
	Kisi.bilgiYaz();
	KalpHizi *Kisi2 = new KalpHizi();
	Kisi2->bilgiAl();
	Kisi2->bilgiYaz();
	
	SaglikProfili *Kisi3 = new SaglikProfili();
	Kisi3->saglikProfiliAl();
	Kisi3->saglikProfiliYaz();
	system("pause");
}
