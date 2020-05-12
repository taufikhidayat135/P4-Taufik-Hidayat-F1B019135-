#include <stdio.h>
int main()
{
int i;
char nama[10]={'T','A','U','F','I','K'};
char nama2[10]="TAUFIK";
printf("Array per Karakter = ");
for(i=0;i<=10;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
