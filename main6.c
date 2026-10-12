#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double UrunTutari, odenen;
	long adet;
	
	printf("Urun Tutari (127.40 TL):");
	scanf("%lf",&UrunTutari);
	printf("odenen tutar (200 TL):");
	scanf("%lf",&odenen);
	
	/*Kurusa cevir */
	long urun = (long)(UrunTutari* 100+0.5);
	long odenenK = (long)(odenen* 100 +0.5);
		
	
	long paraUstu = odenenK - urun;
	
    printf("Para ustu: %ld.%02ld TL\n", paraUstu / 100, paraUstu % 100);
    
	adet = paraUstu / 20000;
    printf("%ld adet 200 TL\n", adet);
    paraUstu = paraUstu % 20000;

    adet = paraUstu / 10000;
    printf("%ld adet 100 TL\n", adet);
    paraUstu = paraUstu % 10000;

    adet = paraUstu / 5000;
    printf("%ld adet 50 TL\n", adet);
    paraUstu = paraUstu % 5000;

    adet = paraUstu / 2000;
    printf("%ld adet 20 TL\n", adet);
    paraUstu = paraUstu % 2000;

    adet = paraUstu / 1000;
    printf("%ld adet 10 TL\n", adet);
    paraUstu = paraUstu % 1000;

    adet = paraUstu / 500;
    printf("%ld adet 5 TL\n", adet);
    paraUstu = paraUstu % 500;

    adet = paraUstu / 100;
    printf("%ld adet 1 TL\n", adet);
    paraUstu = paraUstu % 100;

    adet = paraUstu / 50;
    printf("%ld adet 50 kurus\n", adet);
    paraUstu = paraUstu % 50;

    adet = paraUstu / 25;
    printf("%ld adet 25 kurus\n", adet);
    paraUstu = paraUstu % 25;

    adet = paraUstu / 10;
    printf("%ld adet 10 kurus\n", adet);
    paraUstu = paraUstu % 10;

    adet = paraUstu / 5;
    printf("%ld adet 5 kurus\n", adet);
    paraUstu = paraUstu % 5;

    adet = paraUstu / 1;
    printf("%ld adet 1 kurus\n", adet);


	return 0;
}
