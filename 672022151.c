#include <stdio.h>
#include <stdlib.h>

// Muhammad Rafly Ramadhani / 672022151

int main(){
int i, j, n, k;
{
    printf("---------------------\n");
    printf("=  Tugas Menu Kuis  =\n");
    printf("---------------------\n");
    printf("\n");
    printf("1.   LEVEL 1   \n");
    printf("2.   LEVEL 2   \n");
    printf("3.   LEVEL 3   \n");
    printf("4.   KELUAR     \n");
    printf("\n");
    printf("---------------------\n");
    printf("\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &n);

    switch(n){
     int i,j,n;
   case 1 :
    printf("Masukkan Angka : ");
    scanf("%d",&n);
       for(i=0; i<=n; i++){
        for(j=0; j<=i;j++){
    printf("%3d", i+j);

           }
    printf("\n");
           }
        break;

   case 2 :
    printf("Masukkan Angka : ");
    scanf("%d",&n);
        for(i=0; i<=n; i++){
        for(i=0; i<=n; i++){
        for(j=1; j<=i;j++){
    printf("%3d", i*j);

           }
    printf("\n");
           }
        break;
    }

  case 3:
    printf("Masukan Angka : ");
    scanf("%d",&n);
        for (i=1; i<=n; i++){
            for (j=1; j<=n-i; j++){
    printf(" ");
                }
        for (k=1; k<=i; k++){
    printf("%d", k);
                }
        for (j=i-1; j>=1; j--){
    printf("%d", j);
                }
    printf("\n");
            }
        for (i=n-1; i>=1; i--){
            for (k=1; k<=n-i; k++){
    printf(" ");
                }
        for (j=1; j<=i ;j++){
    printf("%d", j);
                }
        for (j=i-1; j>=1; j--){
    printf("%d", j);
                }
    printf("\n");
            }
            break;

   case 4:
    printf("\n");
    printf("  KELUAR DARI MENU  ");
    printf("\n");
        break;

  default:
    printf("\n");
    printf(" Pilihan Tidak Ada!!! ");
    printf("\n");
        break;
}
}
}
