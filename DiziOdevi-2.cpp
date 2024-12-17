#include <iostream>
using namespace std;
int main()
{
								//Matrisleri kullanýcýdan alma.
int a_matris[3][3];  
cout<<"A Matrisini Giriniz:\n";
for(int i=0;i<3;i++)
{
cout<<i+1<<". Satir\n";
	for(int j=0;j<3;j++)
	{
	cin>>a_matris[i][j];
	}
cout<<"\n";
}

int b_matris[3][3];  
cout<<"B Matrisini Giriniz:\n";
for(int i=0;i<3;i++)
{
cout<<i+1<<". Satir\n";
	for(int j=0;j<3;j++)
	{
	cin>>b_matris[i][j];
	}
cout<<"\n";
}
cout<<"Girilen A Matrisi:\n";
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<a_matris[i][j]<<"\t";
	}
cout<<"\n";
cout<<"\n";
}
cout<<"Girilen B Matrisi:\n";
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<b_matris[i][j]<<"\t";
	}
cout<<"\n";
cout<<"\n";
}	
				//Matrislerin Toplamý: ayný satýr ve sütundaki elemanlarýn direkt toplanmasý.
int c_matris[3][3];
for (int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		c_matris[i][j]=a_matris[i][j]+b_matris[i][j];
	}
}
cout<<"C=A+B hesapama sonucu=\n";
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<c_matris[i][j]<<"\t";
	}
cout<<"\n";
cout<<"\n";}
				//Matris Çarpýmý: ilk matrisin satýrlarýyla ikinci matrisin sütunlarýnýn sýrasýyla çarpýlmasý.
				//örn:A11*B11+A12*B21+A13*B31 =D11
int d_matris[3][3];

for(int i=0;i<3;i++)
{	

	for(int j=0;j<3;j++)
	{
	d_matris[i][j]=a_matris[i][0]*b_matris[0][j]+a_matris[i][1]*b_matris[1][j]+a_matris[i][2]*b_matris[2][j]; 
	}	
}
cout<<"D=A*B hesapama sonucu=\n";
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<d_matris[i][j]<<"\t";
	}
cout<<"\n";
cout<<"\n";}
				//Matrisin determinantýný bulma.	
int det_a;
det_a=((a_matris[0][0]*a_matris[1][1]*a_matris[2][2])+(a_matris[0][1]*a_matris[1][2]*a_matris[2][0])+(a_matris[0][2]*a_matris[1][0]*a_matris[2][1]))-(a_matris[0][2]*a_matris[1][1]*a_matris[2][0])-(a_matris[0][0]*a_matris[1][2]*a_matris[2][1])-(a_matris[0][1]*a_matris[1][0]*a_matris[2][2]);
cout<<"A matrisinin determinanti:	"<<det_a<<"\n";
	
	
	
	
	
	return 0;
}
