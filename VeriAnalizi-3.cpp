//10-35 arasý 500 tamsayi
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
srand(time(NULL));
int tamsayi[20][25]; //20*25 tablo
for (int i=0;i<20;i++)
{
	for(int j=0;j<25;j++)
	{
	tamsayi[i][j]=rand()%(35-10+1)+10;
	}
}
int a=1;
for (int i=0;i<20;i++)
{
	for(int j=0;j<25;j++)
	{
		cout<<tamsayi[i][j]<<setw(3);
	}
cout<<"\n";
}


	return 0;
}
