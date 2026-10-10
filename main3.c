#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double UrunTutari, odenen;
	
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
	/* kurus cinsindean birimler 200tl,100tl,50tl,20tl,10tl,1tl
	50kr,25kr,10kr,5kr,1kr */
	long birimler[] = {20000, 10000, 5000, 2000, 1000 , 500, 100, 50, 25, 10, 5, 1};
	int n = sizeof(birimler) / sizeof(birimler[0]);
	
    printf("Para ustu: %ld.%02ld TL\n", paraUstu / 100, paraUstu % 100);
	
	int i = 0;
while (i < n) {
    long adet = paraUstu / birimler[i];
    if (adet > 0) {
        if (birimler[i] >= 100)
            printf("%ld adet %ld TL\n", adet, birimler[i] / 100);
        else
            printf("%ld adet %ld kurus\n", adet, birimler[i]);
        paraUstu %= birimler[i];
    }
    i++;
}

	return 0;
}
