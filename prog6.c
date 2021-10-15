#include <stdio.h>
int main (void){
    int iNn1,iNn2,iNn3,iCount1,iCount2;
    scanf("%d",&iNn1);
    iNn3 = iNn1-1;
    iNn2 = iNn3;
    for(iCount1 = 0; iCount1 < iNn1; iCount1++){
        for(iCount2 = 0; iCount2 < ((iNn1-1) * 2 + 1); iCount2++){
            if(iCount2 <= iNn3 && iCount2 >= iNn2){
                printf("*");              
            }else {
                printf(" ");
            }  
        }
        iNn2--;
        iNn3++;
        printf("\n");
   }
}