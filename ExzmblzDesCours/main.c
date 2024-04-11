#include <stdio.h>
/*void mess() {
 printf("Vous n'avez fait aucune erreur\n");
 return ;
}
int plus(int x, int y){
 mess() ; /* appel d'une fonction sans arguments
 return (x+y) ;
}
*/
/*double conversion(double euros){
double dhs;
dhs = 10 * euros;
return dhs;
}
*/
/*typedef struct piont {
     int x;
     int y;

}piont;

void saiserPiont(){
piont p1;
int x,y;
x=p1.x;
y=p1.y;
printf("Donner x\n",x);
scanf("%d",&x);
printf("Donner y\n",y);
scanf("%d",&y);
}

int sumPiont(){
piont p1;
int x,y;
return (p1.x+p1.y);
}*/
/*int max(int n1, int n2){
return (n1>n2)?n1:n2;
}
int number(){
int number;
printf("Donner un nombre\n");
scanf("%d",&number);
return number;
}*/

/*void echange (int x, int y){
 int temp;
 printf("Debut fonction :\n x = %d \t y = %d\n", x, y);
 temp = x; x = y; y = temp;
 printf("Fin fonction :\n x = %d \t y = %d\n", x, y);
}
*/
void echange(int *a,int *b){
int temp;
temp=*a;*a=*b;*b=temp;
}
int main(){
    int x=2,y=5;
    echange(&x,&y);
     printf("x=%ld et y=%ld",x,y);
    /*int a = 2, b = 5;
 printf("Debut programme principal :\n a = %d \t b = %d\n", a, b);
 echange(a, b);
 printf("Fin programme principal :\n a = %d \t b = %d\n", a, b);*/
 /*int x, y, r;
 x = 5; y = 235;
 mess();
 r = plus(x, y); /* appel d'une fonction avec arguments
 printf("%d + %d = %d", x, y, r);*/
 /*double r;
 r=conversion(20);
 printf("20 euros = %.2f dhs\n",r);*/

 /*piont p1;
 int r,x,y;
 saiserPiont();
 r=sumPiont();
 printf("la sommation entre %d est %d egale %d\n",x,y,r);*/
 /*int A,B;
 A=number();
 B=number();
printf("le plus grand est %d\n",max(A,B));*/


return 0;
}
