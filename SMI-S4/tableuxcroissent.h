
#ifdef TABLSUXCROISSENT_H_INCLUDE

void tableuxCriossent(int tab[n]){
  int i,x;
  int j;
 int tab[5]={5,7,8,1,2,7};
    for(i=0;i<=4;i++){
     for(j=i+1;j<=5;j++){
        if(tab[j]<=tab[i]){
         x=tab[j];
         tab[j]=tab[i];
         tab[i]=x;
       }
        }

    }
    for(i=0;i<=5;i++){
    printf("%d\n",tab[i]);
    }
}

#endif
