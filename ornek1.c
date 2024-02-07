#include <stdio.h>
/* gcc ornek2.c -o ornek2 -fno-stack-protector */

int a[10],i,j;

int main()
{
	/* dizi elemanları giriliyor */
	for(i=0;i<=10;i++){
		printf("\n%d. sayıyı giriniz:",i);
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		j=i;
	}
	/* dizi elemanları yazdırılıyor */
	for(i=0;i<=j;i++)
		printf("%d\n",a[i]);
}
