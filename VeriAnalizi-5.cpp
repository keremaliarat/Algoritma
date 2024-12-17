//0-100 arasý 500 float veri
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
srand(time(NULL));
float tamsayi[500]; 
for (int i=0;i<500;i++)
{	float ondalik_sayi=rand()%(100-0+1)+0+((float)rand())/((float)RAND_MAX);
	tamsayi[i]=ondalik_sayi;
}
int a=1;
for (int i=0;i<500;i++)
{
		cout<<tamsayi[i]<<setw(3);
cout<<"\n";
}


	return 0;
}
