// #include <conio.h> engga diperlu in  ini komentar
#include <stdio.h>
#define size 99

void sort(int[], int);

main()
{
  int x[size], i, n, uang, hasil[size];
  printf("\nBanyaknya jenis koin: ");
  scanf("%d", &n);


  printf("\nMasukan Dari nilai uang yang Terbesar ! \n");
  for (i = 1; i <= n; i++)
  {
    printf("Masukkan jenis koin ke %d -> (Rp): ", i);
    scanf("%d", &x[i]);
  }

  sort(x, n);
  printf("\nJenis koin yang tersedia (Rp): \n");

  for (i = 1; i <= n; i++)
  {
    printf("%d \t", x[i]);
  }
  printf("\n\nMasukkan nilai yang ingin dipecah: Rp. ");
  scanf("%d", &uang);
  printf("\n\nHasil algoritma greednya adalah: \n");

  for (i = 1; i <= n; i++)
  {
    hasil[i] = uang / x[i];
    uang = uang % x[i];
  }

  for (i = 1; i <= n; i++)
  {
    printf("\aKoin Rp %d", x[i]);
    printf("-an sebanyak: %d keping ", hasil[i]);
    printf("\n");
  }
  printf("\n");
  //  getch();engga diperluin , ini komentar
  return 0;
}


void sort(int a[], int siz)
{
  int pass, hold, j;

  for (pass = 1; pass <= siz ; pass++){
    for (j = 0; j <= siz - 2; j++)
    {
      if (a[j + 1])
      {
        hold = a[j + 1];
        a[j + 1] = a[j + 2];
        a[j + 2] = hold;
      }
    }}
}
