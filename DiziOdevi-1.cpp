//Bir iþletmenin son 5 yýllýk her aya ait ciro miktarlarý (100-5000 arasýnda) veri olarak bulunmaktadýr. Bu veriler üzerinde aþaðýdaki hesaplamalarý yaptýran programý yazýn;
//cirolarý 100-5000 arasýnda rastgele üretiniz.
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
srand(time(NULL));
int ortciro[5]; 
int ciro[5][12];
					//5 Yýl , 12 ay ;her yýlýn icindeki 12 aya 5000-100 arasý sayý atama.
for (int i=0;i<5;i++)
{
	ortciro[i]=0;
		for(int j=0;j<=11;j++)
		
	{
	ciro[i][j]=rand()%(5000-100)+100; //100-5000 arasý rastgele sayý üretip atama.
	ortciro[i]+=ciro[i][j];}
}
					//her yýlýn otalama cirosunu hesaplama.
for(int k =0;k<5;k++)
{
ortciro[k]=ortciro[k]/12;}

int yil;
while (true) //girilen rakam 1-5 arasýnda iken çalýþmasý icin.
{ 
cout<<"Yil Giriniz(1-5):\n ";
cin>>yil;
if (yil>=1 && yil<=5)
{
break;
}
else
cout << "Gecersiz bir deger girdiniz! Lutfen 1 ile 5 arasinda bir deger girin." << endl;
}
					//Switch case yapýsý ile yýllar arasý karsýlastýrmalar,hesaplamalar.
switch (yil)
{
	case 1:
		{cout<<"Cirosu 1. Yilin ortalamasi "<<ortciro[0]<<"'dan yuksek olan yillar,cirolari:\n";
		if(ortciro[0]<ortciro[1])
		cout<<"2. Yil  "<<"Ciro="<<ortciro[1]<<endl;
		if(ortciro[0]<ortciro[2])
		cout<<"3. Yil  "<<"Ciro="<<ortciro[2]<<endl;
		if(ortciro[0]<ortciro[3])
		cout<<"4. Yil  "<<"Ciro="<<ortciro[3]<<endl;
		if(ortciro[0]<ortciro[4])
		cout<<"5. Yil  "<<"Ciro="<<ortciro[4]<<endl;
		cout<<"-------------------------Yilin Ceyrek Ortalamalari------------------------------\n";
		cout<<"1. Yil 1. Ceyrek Ortalamasi="<<(ciro[0][0]+ciro[0][1]+ciro[0][2])/3<<endl;
		cout<<"1. Yil 2. Ceyrek Ortalamasi="<<(ciro[0][3]+ciro[0][4]+ciro[0][5])/3<<endl;
		cout<<"1. Yil 3. Ceyrek Ortalamasi="<<(ciro[0][6]+ciro[0][7]+ciro[0][8])/3<<endl;
		cout<<"1. Yil 4. Ceyrek Ortalamasi="<<(ciro[0][9]+ciro[0][10]+ciro[0][11])/3<<endl;
	break;
		}
	case 2:
		{cout<<"Cirosu 2. Yilin ortalamasi '"<<ortciro[1]<<"' dan yuksek olan yillar,cirolari:\n";
		if(ortciro[1]<ortciro[0])
		cout<<"1. Yil  "<<"Ciro="<<ortciro[0]<<endl;
		if(ortciro[1]<ortciro[2])
		cout<<"3. Yil  "<<"Ciro="<<ortciro[2]<<endl;
		if(ortciro[1]<ortciro[3])
		cout<<"4. Yil  "<<"Ciro="<<ortciro[3]<<endl;
		if(ortciro[1]<ortciro[4])
		cout<<"5. Yil  "<<"Ciro="<<ortciro[4]<<endl;	
		cout<<"-------------------------Yilin Ceyrek Ortalamalari------------------------------\n";
		cout<<"2. Yil 1. Ceyrek Ortalamasi="<<(ciro[1][0]+ciro[1][1]+ciro[1][2])/3<<endl;
		cout<<"2. Yil 2. Ceyrek Ortalamasi="<<(ciro[1][3]+ciro[1][4]+ciro[1][5])/3<<endl;
		cout<<"2. Yil 3. Ceyrek Ortalamasi="<<(ciro[1][6]+ciro[1][7]+ciro[1][8])/3<<endl;
		cout<<"2. Yil 4. Ceyrek Ortalamasi="<<(ciro[1][9]+ciro[1][10]+ciro[1][11])/3<<endl;
		break;}
	case 3:
		{cout<<"Cirosu 3. Yilin ortalamasi '"<<ortciro[2]<<"' dan yuksek olan yillar,cirolari:\n";
		if(ortciro[2]<ortciro[0])
		cout<<"1. Yil  "<<"Ciro="<<ortciro[0]<<endl;
		if(ortciro[2]<ortciro[1])
		cout<<"2. Yil  "<<"Ciro="<<ortciro[1]<<endl;
		if(ortciro[2]<ortciro[3])
		cout<<"4. Yil  "<<"Ciro="<<ortciro[3]<<endl;
		if(ortciro[2]<ortciro[4])
		cout<<"5. Yil  "<<"Ciro="<<ortciro[4]<<endl;
		cout<<"-------------------------Yilin Ceyrek Ortalamalari------------------------------\n";
		cout<<"3. Yil 1. Ceyrek Ortalamasi="<<(ciro[2][0]+ciro[2][1]+ciro[2][2])/3<<endl;
		cout<<"3. Yil 2. Ceyrek Ortalamasi="<<(ciro[2][3]+ciro[2][4]+ciro[2][5])/3<<endl;
		cout<<"3. Yil 3. Ceyrek Ortalamasi="<<(ciro[2][6]+ciro[2][7]+ciro[2][8])/3<<endl;
		cout<<"3. Yil 4. Ceyrek Ortalamasi="<<(ciro[2][9]+ciro[2][10]+ciro[2][11])/3<<endl;
		break;
		}
	case 4:
		{cout<<"Cirosu 4. Yilin ortalamasi '"<<ortciro[3]<<"' dan yuksek olan yillar,cirolari:\n";
		if(ortciro[3]<ortciro[0])
		cout<<"1. Yil  "<<"Ciro="<<ortciro[0]<<endl;
		if(ortciro[3]<ortciro[1])
		cout<<"2. Yil  "<<"Ciro="<<ortciro[1]<<endl;
		if(ortciro[3]<ortciro[2])
		cout<<"3. Yil  "<<"Ciro="<<ortciro[2]<<endl;
		if(ortciro[3]<ortciro[4])
		cout<<"5. Yil  "<<"Ciro="<<ortciro[4]<<endl;
		cout<<"-------------------------Yilin Ceyrek Ortalamalari------------------------------\n";
		cout<<"4. Yil 1. Ceyrek Ortalamasi="<<(ciro[3][0]+ciro[3][1]+ciro[3][2])/3<<endl;
		cout<<"4. Yil 2. Ceyrek Ortalamasi="<<(ciro[3][3]+ciro[3][4]+ciro[3][5])/3<<endl;
		cout<<"4. Yil 3. Ceyrek Ortalamasi="<<(ciro[3][6]+ciro[3][7]+ciro[3][8])/3<<endl;
		cout<<"4. Yil 4. Ceyrek Ortalamasi="<<(ciro[3][9]+ciro[3][10]+ciro[3][11])/3<<endl;
		
		break;}
	case 5:
		{cout<<"Cirosu 5. Yilin ortalamasi '"<<ortciro[4]<<"' dan yuksek olan yillar,cirolari:\n";
		if(ortciro[4]<ortciro[0])
		cout<<"1. Yil  "<<"Ciro="<<ortciro[0]<<endl;
		if(ortciro[4]<ortciro[1])
		cout<<"2. Yil  "<<"Ciro="<<ortciro[1]<<endl;
		if(ortciro[4]<ortciro[2])
		cout<<"3. Yil  "<<"Ciro="<<ortciro[2]<<endl;
		if(ortciro[4]<ortciro[3])
		cout<<"4. Yil  "<<"Ciro="<<ortciro[3]<<endl;
		
		cout<<"-------------------------Yilin Ceyrek Ortalamalari------------------------------\n";
		cout<<"5. Yil 1. Ceyrek Ortalamasi="<<(ciro[4][0]+ciro[4][1]+ciro[4][2])/3<<endl;
		cout<<"5. Yil 2. Ceyrek Ortalamasi="<<(ciro[4][3]+ciro[4][4]+ciro[4][5])/3<<endl;
		cout<<"5. Yil 3. Ceyrek Ortalamasi="<<(ciro[4][6]+ciro[4][7]+ciro[4][8])/3<<endl;
		cout<<"5. Yil 4. Ceyrek Ortalamasi="<<(ciro[4][9]+ciro[4][10]+ciro[4][11])/3<<endl;
		break;}}

	
	
	
	
	
	
	

	return 0;
}
