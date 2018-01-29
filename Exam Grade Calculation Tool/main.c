#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void genel_not(float a,float b)
{
	float c=a*0.4+b*0.6;

	if (a<0)
	{printf("\nVize ve Final Notunuz 0-100 Arasinda Olmalidir.\n");
	}
	else if (b<0)
	{printf("\nVize ve Final Notunuz 0-100 Arasinda Olmalidir.\n");
	}
	else if (a>100)
	{printf("\nVize ve Final Notunuz 0-100 Arasinda Olmalidir.\n");
	}
	else if (b>100)
	{printf("\nVize ve Final Notunuz 0-100 Arasinda Olmalidir.\n");
	}
	else if (b<50)
	{printf("\nFinal Notunuz 50'den Kucuk Oldugu Icin Not Degeriniz FF ==> Kalir Not.\n");
	}
	else if (c<44.50)
	{printf("\nNotunuz : %.2f \nHarflik Sistemdeki Not Degeriniz FF ==> Kalir Not.\n",c);
	}
	else if(c>44.49 && c<52.50)
	{printf("\nNotunuz :%.2f \nHarflik Sistemdeki Not Degeriniz  DD ==> Kalir  Not.\n",c);
	}
	else if(c>52.49 && c<59.50)
	{printf("\nNotunuz : %.2f \nHarflik Sistemdeki Not Degeriniz  DC ==> Kalir Not.\n",c);
	}
	else if(c>59.49 && c<66.50)
	{printf("\nNotunuz : %.2f \nHarflik Sistemdeki Not Degeriniz  CC ==> Gecer Not.\n",c);
	}
	else if(c>66.49 && c<73.50)
	{printf("\nNotunuz : %.2f \nHarflik Sistemdeki Not Degeriniz  CB ==> Gecer Not.\n",c);
	}
	else if(c>73.49 && c<80.50)
	{printf("\nNotunuz : %.2f \nHarflik Sistemdeki Not Degeriniz  BB ==> Gecer Not.\n",c);
	}
	else if(c>80.49 && c<87.50)
	{printf("\nNotunuz : %.2f \nHarflik Sistemdeki Not Degeriniz  BA ==> Gecer Not.\n",c);
	}
	else if(c>87.49 && c<100.1)
	{printf("\nNotunuz : %.2f \nHarflik Sistemdeki Not Degeriniz  AA ==> Gecer Not.\n",c);
	}
	else
	{printf("\nLutfen 0-100 Arasi Not Giriniz.\n");
	}
}

void final_not(float a){

float s = a*0.4;
float h = 60-s;
float snc = (h*5)/3;
printf("\nDersi Gecebilmek Icin %.2f Almaniz Gerekiyor.\n\n",snc);

}

int main(int argc, char *argv[]) {

	int secim;
	float a;
	float b;
	float v;
	printf("Not Hesaplama Aracina Hosgeldiniz.\n\n");

r :	printf("## Finalden Kac Almaniz Gerektigini Ogrenmek Icin 1'e ##\n");
	printf("## Genel Notunuzu Hesaplamak Icin 2'e Basiniz. ##\n");
	printf("## Cikmak Icin 0'a Basiniz. ##\n\n");
	printf("==> Seciminizi Yapiniz. : "); scanf("%d",&secim);

	switch(secim)
	{
		case 0 : {printf("\t Hoscakalin."); return 0 ; break;}
		case 1 : {goto x; break;}
		case 2 : {goto z; break;}
		//genel_not(a,b);
		default : {printf("\aHatali Giris.\n"); goto r; }
	}
z :
	{
			printf("Vize Notunuzu Giriniz : "); scanf("%f",&a);
			printf("Final Notunuzu Giriniz : "); scanf("%f",&b);
			genel_not(a,b);
			goto r;
	}
x :
	{
			printf("Vize Notunuzu Giriniz : "); scanf("%f",&v);
			final_not(v);
			goto r;
	}


}
