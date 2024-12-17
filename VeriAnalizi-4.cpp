//0-100 arasý 500 tamsayi
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int a=1,toplam=0;
int main()
{
srand(time(NULL));
int tamsayi[500]; //20*25 
	for(int j=0;j<500;j++)
	{
	tamsayi[j]=rand()%(100-0+1)+0;
	}

for (int i=0;i<500;i++)
{
		cout<<tamsayi[i]<<setw(4);
		toplam+=tamsayi[i];
	}
cout<<"\n";

float ortalama=(float)toplam/500;  //ortalama hesabý
cout<<"Ortalama ="<<(float)ortalama<<"\n";
int kucuk=tamsayi[0];
int buyuk=tamsayi[0];
			//en buyuk - en kucuk bulma
for (int i=1;i<500;i++)
{
	if(tamsayi[i]<kucuk)
	{
	kucuk=tamsayi[i];
	}
	if(tamsayi[i]>buyuk)
	{
	buyuk=tamsayi[i];
	}
}
cout<<"En Bucuk="<<kucuk<<"\n";  
cout<<"En Buyuk="<<buyuk<<"\n";

int veri_frekans[101]={0}; //frekans dizisi
for (int i=0;i<500;i++)
{
    veri_frekans[tamsayi[i]]++; 
}
cout<<"Frekanslar:\n";
for (int i = 0; i <=100; i++) {
    if (veri_frekans[i]>0) 
	{
        cout << i << " sayisindan " << veri_frekans[i] << " adet" << endl;
    }}
    		//TEK-CÝFT
int teksayilar[500],ciftsayilar[500];
int tek=0,cift=0;
    for (int i=0;i<500;i++) {
        if (tamsayi[i]%2==0)
		 {
            ciftsayilar[cift]=tamsayi[i];
            cift++;
        } else {
        	
            teksayilar[tek]=tamsayi[i];
            tek++;
        }
    }
    cout << "Tek Sayilar: \n ";
    for (int i=0;i<tek;i++)
	{
        cout << teksayilar[i] <<setw(3);
    }
    cout << endl;
    cout << "Cift Sayilar: \n ";
    for (int i = 0; i < cift; i++) {
        cout << ciftsayilar[i] <<setw(3);
    }
    cout<<endl;
        // Ortalamadan küçük ve büyük olanlarý ayýrma
    int ortdankucuk[500],ortdanbuyuk[500];
    int kucuksayac=0,buyuksayac=0;

    for (int i=0;i<500;i++)
	{
        if (tamsayi[i]<ortalama) 
		{
            ortdankucuk[kucuksayac]=tamsayi[i];
            kucuksayac++;
        } else {
            ortdanbuyuk[buyuksayac]=tamsayi[i];
            buyuksayac++;
        }
    }
      cout << "Ortalamadan Kucuk Sayilar: \n ";
    for (int i=0;i<kucuksayac;i++)
	{
        cout<<ortdankucuk[i]<<setw(3);
    }
    cout << endl;
    cout << "Ortalamadan Buyuk Sayilar: \n ";
    for (int i=0; i<buyuksayac;i++) {
        cout<<ortdanbuyuk[i]<<setw(3);
    }  
    

    
	return 0;
}
