//scanf ile birden fazla veri okumak
#include"stdio.h"
main(){
	int sayi1=0,sayi2=0,sayi3=0;
	printf("lutfen 3 tane tam sayi giriniz.\n");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	printf("Toplam %d",sayi1+sayi2+sayi3);
}
