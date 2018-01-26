#include <stdio.h>

int main(int argc, char *argv[]) {
char kullanici[12];
char sifre[10];
char sifre1[10];
char girisk[999];
char giriss[999];
printf("Sisteme Hosgeldiniz. Once Kayit Olmalisiniz.\n\n");


n : printf("Kullanici Adi : "); scanf("%s",&kullanici);
if(strlen(kullanici)>10)
{printf("Kullanici Adi 10 Karakteri Gecmemelidir.\n"); goto n;}
else
goto a;
a : printf("Sifre : "); scanf("%s",&sifre);
if(strlen(sifre)<8)
{printf("Sifre En Az 8 Karakterden Olusmalidir.\n"); goto a;}
else
goto b;
b : printf("Sifre Tekrar : "); scanf("%s",&sifre1);
if(strcmp(sifre,sifre1)==0)
goto c;
else
{printf("Sifre Dogrulamasi Hatali\n"); goto a;}
c : 
printf("Kayit Tamamlandi.Giris Yapabilirsiniz.\n");
p : 
printf("Kullanici Adi : "); scanf("%s",&girisk);
printf("Sifre : "); scanf("%s",&giriss);
if(strcmp(girisk,kullanici)==0 && strcmp(giriss,sifre)==0)
goto k;
else 
{printf("Kullanici Adi Ya da Sifre Hatali.\n"); goto p;}
k : printf("Giris Basarili.");

system("pause");
return 0;
}
