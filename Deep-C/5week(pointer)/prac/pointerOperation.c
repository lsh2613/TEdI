#include <stdio.h>
int main(){

    char *pc;
    int *pi;
    double *pd;

    pc=(char *) 1000;
    pi=(int *) 1000;
    pd=(double *) 1000;

    printf("증가 전  pc = %d, pi= %d pd = %d \n",pc, pi, pd);

    pc++;
    pi++;
    pd++;
    
    printf("증가 후  pc = %d, pi= %d pd = %d \n",pc, pi, pd);
    printf("pc+2 = %d, pi+2 = %d, pd +2 = %d", pc+2, pi+2 ,pd+2);



}