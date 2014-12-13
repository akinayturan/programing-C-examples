#include<stdio.h>
#include<conio.h>
int main()
{
int sayi1;
int sayi2;
int secim;
int sonuc;
printf("c Hesap Makinesi\n");
printf(".....................................\n");
printf("menu\n");
printf("1-toplama\n");
printf("2-cikarma\n");
printf("3-carpma\n");
printf("4-bolme\n");
printf("5-mod islem\n");
printf("6-cikis\n");
printf("lutfen secim yapiniz\n");
scanf("%d",&secim);
 if(secim!=6){
	printf("1.sayiyi giriniz\n");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz\n");
	scanf("%d",&sayi2);
	switch (secim) {
		case 1:
		sonuc=sayi1+sayi2;
		printf("sayilarin toplami=%d",sonuc);
		break;
		case 2:
		sonuc=sayi1-sayi2;
		printf("sayilarin farki=%d",sonuc);
		break;
		case 3:
		sonuc=sayi1*sayi2;
		printf("sayilarin carpimi=%d",sonuc);
		break;
		case 4:
		if(sayi2 != 0)
		{
					sonuc = sayi1/sayi2;
					printf("sayilarin bolumu=%d",sonuc);
		}
					else
					{
						printf("Hata Bolme isleminde bolen 0 olmamali\n");
					}
		break;
		case 5:
		if(sayi1>sayi2)
		{
			sonuc = (sayi1)%(sayi2);
			printf("%d mod %d = %d",sayi1,sayi2,sonuc);
		}
			else 
			{
			sonuc = (sayi2)%(sayi1);
			printf("%d mod %d = %d",sayi2,sayi1,sonuc);
			}
		break;
 	}
 }
 printf("\n\n-------------------------------------------------");
 printf("\nc hesap makinesini kullandiginiz icin tesekkurler");
     
 getch ();
 return 0;
}


