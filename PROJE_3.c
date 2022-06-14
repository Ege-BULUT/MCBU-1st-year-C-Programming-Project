#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
                /* Project's Third Subject/Question. */
int main()
{

    int matrix_1[100][100], matrix_2[100][100];
    int addition[100][100], transpose, multiplication[100][100];
    int secim, column, column2, row, row2;
    int c, r, k;
    srand(time(NULL));
        printf(" Choose one of them and enter the number of choosen one:\n");
        printf(" 1.) Transpose\n 2.) Addition\n 3.) Multiplication\n");
        scanf("%d", &secim);

    if(secim==1){                                                         //Transpose.
        printf("\n\nPlease enter dimensions what you want");
            printf("\nrow: ");      scanf("%d",&row);
            printf("\ncolumn: ");   scanf("%d",&column);

    for(c=0; c<column; c++){                                              //Random matris olusturma islemi.
        for(r=0; r<row; r++){
            matrix_1[r][c] = rand() % 100 ;
        }
    }
printf("\n matrix1 : \n");                                                //Matrisi gosteren kod.

    for(c=0; c<column; c++){
        for(r=0; r<row; r++)
            printf("%d\t",matrix_1[r][c]);
        printf("\n\n");
    }
        // i = r // j = c //

              printf("\n Transpose : \n")  ;                              //Matrisin Transpozesi.
  for (r = 0; r < row; r++)
    {
        for (c = 0; c<column; c++)                                        //sonucu gosteren kod.
        {
            printf("%d\t", matrix_1[r][c]);
        }
        printf("\n\n");
    }

}
    else if(secim==2){                                                   //Addition.

    printf("\n\nPlease enter first matrix's dimensions what you want");
            printf("\nrow: ");      scanf("%d",&row);
            printf("\ncolumn: ");   scanf("%d",&column);

    for(r=0; r<row; r++){                                               //Random 1.matris olusturma islemi.
        for(c=0; c<column; c++){
            matrix_1[r][c] = rand() % 100 ;
            }
        }
    for(r=0; r<row; r++){                                               //Random 1.matris olusturma islemi.
        for(c=0; c<column; c++){
            matrix_2[r][c] = rand() % 100 ;
            }
        }

        printf("\n matrix1 : \n");                                      //1. Matrisi gosteren kod.
    for(c=0; c<column; c++){
        for(r=0; r<row; r++)
            printf("%d\t",matrix_1[r][c]);
        printf("\n\n");
    }
        printf("\n matrix2 : \n");                                      //2. Matrisi gosteren kod.
    for(c=0; c<column; c++){
          for(r=0; r<row; r++)
            printf("%d\t",matrix_2[r][c]);
        printf("\n\n");
        }
printf("\n ADDITION OF TWO MATRIX :\n");                                //Toplama isleminin yapilmasi.

 for(c=0; c<column; c++){
          for(r=0; r<row; r++)
                addition[r][c]=matrix_1[r][c]+matrix_2[r][c];
        }
for(c=0; c<column; c++){                                                //Sonucun gosterilmesi.
          for(r=0; r<row; r++)
            printf("%d\t",addition[r][c]);
        printf("\n\n");
    }
}
    else if (secim==3){                                                 //Multiplication.

    printf("\n\nPlease enter first matrix's dimensions what you want"); //ilk matris boyutlarinin alinmasi.
            printf("\nrow: ");      scanf("%d",&row);
            printf("\ncolumn: ");   scanf("%d",&column);

        for(r=0; r<row; r++){                                           //ilk matrisi random olusturma.
        for(c=0; c<column; c++){
            matrix_1[r][c] = rand() % 10 ;
            }
        }
    printf("\n\nPlease enter second matrix's dimensions what you want");//ikinci matris boyutlarinin alinmasi.
           printf("\nrow: ");      scanf("%d",&row2);
           printf("\ncolumn: ");   scanf("%d",&column2);

        for(r=0; r<row2; r++){                                         //ikinci matrisi random olusturma.
        for(c=0; c<column2; c++){
            matrix_2[r][c] = rand() % 10 ;
            }
        }
if (column != row2){
        printf("\nfirst matrix's row and second matrix's column must be same. Please set again.\n");
        return 0;
        }
else if (column = row2){



             printf("\n matrix1 : \n");

    for(c=0; c<column; c++){
        for(r=0; r<row; r++)
            printf("%d\t",matrix_1[r][c]);
        printf("\n\n");
    }
        printf("\n matrix2 : \n");
          for(c=0; c<column2; c++){
          for(r=0; r<row2; r++)
            printf("%d\t",matrix_2[r][c]);
        printf("\n\n");
        }


 printf("\nCarpma islemi basliyor:\n");                 //r = row için sayac, c= column icin sayac
    int counter, c, r, deger;                           // row satir, column sutun
    int multiplication[row][column2];
    for(r = 0; r<row2; r++){
        for(c = 0; c<column; c++){
            deger = 0;
            for(counter = 0; counter<column; counter++){
                deger += matrix_1[counter][c] * matrix_2[r][counter];
                }
            multiplication[r][c] = deger;
            }

    }

    for(r=0; r<row2; r++){
        for(c=0; c<column; c++){
            printf("%d\t", multiplication[c][r]);
            }
        printf("\n\n\n");
        }
}


        getch();

return 0;
        }
}
