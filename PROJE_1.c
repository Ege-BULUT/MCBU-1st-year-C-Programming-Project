#include <stdio.h>
#include <stdlib.h>


int iterativesum(int, int);
int recursivesum(int, int);

int main()

{    /* Project's First Subject/Question. */

int num;
int cycle;
int counter;
    printf("Please set two integer for summation \n \n first integer : ");
            scanf("%d", &num);
        printf("\n Second integer : ");
            scanf("%d", &cycle);


               printf("\n  Iterative result is : %d\n ", iterativesum(num, cycle));
    printf("\n \n");

             printf("\n  Recursive result is : %d\n",recursivesum(num, cycle));


return 0;
}

iterativesum(num, cycle){
int i1;
int i2;
int num1;
    num1=num-1;
        for(i2=1; i2<=cycle; i2++){
            for(i1=1; i1<=num1; i1++){
                num=num+i1;
                }
            num1=num-1;
        }
    num1=num1+1;

return num1;
}


int recursivesum(num, cycle){
   if(cycle==0){
    return num;
   }
   else if(cycle==1){
        return recursive(num);
                }
        num=recursive(num);

return recursivesum(num,cycle-1);
}
int recursive(num){
  if(num==1){
    return 1;
  }

return num + recursive(num-1);
}
