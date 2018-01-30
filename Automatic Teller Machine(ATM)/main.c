#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
int main()
{

  char kullanici[12];
  char sifre[999];
  char sifre1[999];
  char girisk[999];
  char giriss[999];
  printf("ATM Uygulamasina Hosgeldiniz. Once Kayit Olmalisiniz.\n\n");


  n : printf("Kullanici Adi : "); scanf("%s",&kullanici);
  if(strlen(kullanici)>10)
  {printf("Kullanici Adi 10 Karakteri Gecmemelidir.\n"); getch(); system("CLS");  goto n;}
  else
  goto a;
  a : printf("Sifre : "); scanf("%s",&sifre);
  if(strlen(sifre)<8)
  {printf("Sifre En Az 8 Karakterden Olusmalidir.\n");  getch(); system("CLS"); goto a;}
  else
  goto b;
  b : printf("Sifre Tekrar : "); scanf("%s",&sifre1);
  if(strcmp(sifre,sifre1)==0)
   {system("CLS"); goto c;}
  else
  {printf("Sifre Dogrulamasi Hatali\n");  getch(); system("CLS"); goto a;}
  c :
  printf("Kayit Tamamlandi.Giris Yapabilirsiniz.\n");
  p :
  printf("Kullanici Adi : "); scanf("%s",&girisk);
  printf("Sifre : "); scanf("%s",&giriss);
  if(strcmp(girisk,kullanici)==0 && strcmp(giriss,sifre)==0)
  goto k;
  else
  {printf("Kullanici Adi Ya da Sifre Hatali\n");  getch(); system("CLS"); goto p;}
  k : printf("Giris Basarili");  getch();

  float param=0.00;
  float eklenen,cekilen,gonderilen;


    int secenek;
    long int hesapno;
    for(;;)
    {

        system("CLS");
        printf("## MENU ##\n\n1- Bakiye Durumu\n2- Para Yatirma\n3- Para Cekme\n4- Para Gonderme\n0- Cikis\n\nLutfen Bir Secim Yapiniz: ");
        scanf("%d",&secenek);
        if(secenek==1)
        {
            printf("Hesabinizdaki para miktari: %.2f TL",param);
            getch();
            system("CLS");
        }
        else if(secenek==2)
        {
            printf("Yatirilacak Para Miktarini Giriniz : ");
            scanf("%f",&eklenen);
            param=param+eklenen;
            printf("Paraniz Basariyla Yatirilmistir.\n\nYeni Bakiye : %.2f",param);
            getch();
            system("CLS");
        }
        else if(secenek==3)
        {
            printf("Cekmek Istediginiz Miktari Giriniz : ");
            scanf("%f",&cekilen);
            if(cekilen > param)
            {
                printf("Yetersiz Bakiye");
                getch();
                system("CLS");
            }
            else
            {
                param=param-cekilen;
                printf("Paraniz Basariyla Cekilmistir.\n\nYeni Bakiye : %.2f",param);
                getch();
                system("CLS");
            }
          }
            else if(secenek==4)
            {
                printf("Bakiye Gonderilecek Hesap No :");
                scanf("%ld",&hesapno);
                printf("Gonderilecek Miktar : ");
                scanf("%f",&gonderilen);
                if(gonderilen > param)
                {
                    printf("Yetersiz Bakiye");
                    getch();
                    system("CLS");
                }
                else
                {
                    param=param-gonderilen;
                    printf("Paraniz %d Nolu Hesaba Basariyla Gonderilmistir\n\nYeni Bakiye : %.2f",hesapno,param);
                    getch();
                    system("CLS");
                }
            }
            else if(secenek==0)
            {
                printf("Iyi Gunler");
                exit(0);
            }
            else
            {
                printf("Yanlis Bir Karakter Girdiniz");
                getch();
                system("CLS");
            }
    }
}
