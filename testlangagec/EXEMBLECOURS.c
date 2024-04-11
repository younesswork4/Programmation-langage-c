
#include <stdio.h>
void mess() {
 printf("Vous n'avez fait aucune erreur\n");
 return ;
}
int plus(int x, int y){
 mess() ; /* appel d'une fonction sans arguments */
 return (x+y) ;
}
int main(){
 int x, y, r;
 x = 5; y = 235;
 r = plus(x, y); /* appel d'une fonction avec arguments */
 printf("%d + %d = %d", x, y, r);
}
