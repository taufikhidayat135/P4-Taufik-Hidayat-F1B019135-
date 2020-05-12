#include <stdio.h>
#include <conio.h>
Int main (){
int matrika [5][5];
int i, j, x, y;
printf ("Matrik Tranpose\n");
printf ("Masukkan jumlah baris = ");
scanf ("%i", &x);
printf ("Masukkan jumlah kolom = ");
scanf ("%i", &y);
printf ("Matrik \n");
for (i = 0; i< x; i++){
for (j = 0; j < y; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &matrika[i][j]);
}
}
for (i = 0; i< x; i++){
for (j = 0; j < y; j++){
printf ("%d ",matrika[i][j]);
}
printf ("\n");
}
printf ("Matrik tranpose \n");
for (i = 0; i< y; i++){
for (j = 0; j < x; j++){
printf ("%d ", matrika[j][i]);
}
printf ("\n");
}
getch();
}
