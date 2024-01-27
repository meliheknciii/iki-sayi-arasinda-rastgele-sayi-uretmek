#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// klavyeden girilen iki sayi arasinda rastgele sayi uretecek bir program yaziniz.
int rastgeleSayi (int alt_sinir,int ust_sinir){
	srand(time(NULL));
	int rastgeleSayi = rand() % (ust_sinir-alt_sinir+1) + alt_sinir;
	return rastgeleSayi;
	
}
int main() {
	int alt_sinir,ust_sinir;
	printf("iki sayi giriniz. girdiginiz sayilarin arasinda bir rastgele sayi uretilecektir\n");
	printf("ilk sayi : "); scanf("%d",&alt_sinir); printf("ikinci sayi : "); scanf("%d",&ust_sinir);
	printf("uretilen rastgele sayi : %d",rastgeleSayi(alt_sinir,ust_sinir));
	return 0;
}
