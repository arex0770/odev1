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
	
	if(odenenK<urun){
		printf("odenen tutar yetersiz!\n");
		return 1;
		
	}
	
	long paraUstu = odenenK - urun;
	
    printf("Para ustu: %ld.%02ld TL\n", paraUstu / 100, paraUstu % 100);
	
	/* 200 TL */
    adet = paraUstu / 20000;
    if (adet > 0) printf("%ld adet 200 TL\n", adet);
    paraUstu = paraUstu % 20000;

    /* 100 TL */
    adet = paraUstu / 10000;
    if (adet > 0) printf("%ld adet 100 TL\n", adet);
    paraUstu = paraUstu % 10000;

    /* 50 TL */
    adet = paraUstu / 5000;
    if (adet > 0) printf("%ld adet 50 TL\n", adet);
    paraUstu = paraUstu % 5000;

    /* 20 TL */
    adet = paraUstu / 2000;
    if (adet > 0) printf("%ld adet 20 TL\n", adet);
    paraUstu = paraUstu % 2000;

    /* 10 TL */
    adet = paraUstu / 1000;
    if (adet > 0) printf("%ld adet 10 TL\n", adet);
    paraUstu = paraUstu % 1000;

    /* 5 TL */
    adet = paraUstu / 500;
    if (adet > 0) printf("%ld adet 5 TL\n", adet);
    paraUstu = paraUstu % 500;

    /* 1 TL */
    adet = paraUstu / 100;
    if (adet > 0) printf("%ld adet 1 TL\n", adet);
    paraUstu = paraUstu % 100;

    /* 50 kurus */
    adet = paraUstu / 50;
    if (adet > 0) printf("%ld adet 50 kurus\n", adet);
    paraUstu = paraUstu % 50;

    /* 25 kurus */
    adet = paraUstu / 25;
    if (adet > 0) printf("%ld adet 25 kurus\n", adet);
    paraUstu = paraUstu % 25;

    /* 10 kurus */
    adet = paraUstu / 10;
    if (adet > 0) printf("%ld adet 10 kurus\n", adet);
    paraUstu = paraUstu % 10;

    /* 5 kurus */
    adet = paraUstu / 5;
    if (adet > 0) printf("%ld adet 5 kurus\n", adet);
    paraUstu = paraUstu % 5;

    /* 1 kurus */
    adet = paraUstu / 1;
    if (adet > 0) printf("%ld adet 1 kurus\n", adet);

    system("pause");

	return 0;
}
