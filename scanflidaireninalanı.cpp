//dairenin alaný scanf ile
#include"stdio.h"
main(){
	double pi=3.1415;
	double yaricap=0;
	printf("Lutfen yaricap degerini giriniz.\n");
	printf("yaricap = ");
	scanf("%lf",&yaricap);
	printf("*** Dairenin alani ***\n");
	// printf("--------------\n");
	printf("Alan = %f",pi*yaricap*yaricap);
}
