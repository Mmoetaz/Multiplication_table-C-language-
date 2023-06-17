/*Creating a multiplication table */

#include<stdio.h>
void multiple(){
    int i,j;
    for(i=1;i<11;i++){
        for(j=0;j<11;j++){
            printf("%d X %d = %d\n",i,j,i*j);
        }
        printf("__________________________\n");
    }

}



main(){
    multiple();
}
