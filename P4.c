/*P4.c*/
/*Nome: Melissa de Albuquerque Barbosa*/
/*Matrícula: 11811EBI030*/

#include <stdio.h>

int ackermann (int , int);
int main(){
   int m, n;
   scanf("%d%d", &m, &n);
   printf("\"%d\" + \"%d\" resulta em \"%d\"\n", m, n, ackermann(m,n));
   return 0;
}

int ackermann(int m, int n){
   if(m==0) return n+1;
   else if(m>0 && n==0) ackermann(m-1,1);
   else if(m>0 && n>0) ackermann(m-1, ackermann(m, n-1));
}
