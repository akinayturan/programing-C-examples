#include "stdio.h"
#include "time.h"

void sirala(int deger[]);
void ust(int ilk,int deger[]);
void histogram(int deger[]);

int main () {
    
    srand(time(NULL));
    
    int degerler[20] = {0};
    int i=0;
    int alinan=0;
    int menu=0;
    int alinacak =0;

    degerler[3]=29;
    degerler[4]=20;
    degerler[5]=11;
    degerler[6]=73;
    degerler[13]=90;
    degerler[14]=55;
    degerler[17]=81;
    degerler[18]=64;

    for (i=0;i<19;i++){
         if (degerler[i]==0){
            printf("Lutfen dizimizin %d. elemani icin 2 basamakli bir tam sayi giriniz : ", i);
            scanf ("%d",&alinan) ;
            degerler[i]=alinan;
         }
     }
     
     printf("Degerler alindi , ne yapmak istiyorsun ?");
     
     do{
      printf("1- Sirala \n");
      printf("2- Ust Al \n");
      printf("3- 20den kucukse histogram ciz. \n");
      printf ("4- Cikis \n");
      printf("------------------------------------ \n");
      
      printf("Seciminizi yapiniz : \n");
      scanf("%d", &menu);
      
      switch (menu) {
                   
                   case 1: 
                        sirala(degerler);
                        break;
                   case 2: 
                        printf("Kacinci elemanin ustunu alicaksin ? :");
                        scanf("%d", &alinacak );
                        ust(alinacak , degerler);
                        break;
                           
                   case 3: 
                        histogram(degerler);
                        break;
                   }
                   
     }while(menu=!4);
     
     system("PAUSE");
     return 0;
}


void sirala(int deger[]){
     
     int j=0;
     
     for (j=0; j<19;j++){
          printf("%d.Deger : %d \n",j+1,deger[j]);
         }
}

void ust(int ilk, int deger[]){
     int rastgele = rand()%4+2;
     int i;
     int sonuc=1;
     
     for (i=0;i<rastgele;i++){
         sonuc*=deger[ilk];
         }
         
     printf ("ilk Deger : %d     -     Ust : %d         -  Sonuc : %d", deger[ilk] , rastgele , sonuc);
}

void histogram(int deger[]){
     int i;
     int j;
     
     for(i=0; i<19;i++){
            if (deger[i]<20) {
                printf("%d : " , deger[i]);
                for (j=0; j<deger[i] ; j++){
                         printf ("*");
                    }
            }
            printf ("\n");
     }
     
}
