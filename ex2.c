#include <stdio.h>

int main(){
 int Taille;
 printf("quelle est nbr d'element de tableau:");
 scanf("%d",&Taille);

 int element[Taille];

 printf("enter the elements:\n");
 for (int i = 0; i < Taille; i++ ){
 printf("element %d = " ,i);
 scanf("%d",&element[i]);
 }
 printf("les elements sont ") ;
 for(int i = 0 ; i < Taille ; i++){
    printf("%d \t",element[i]);
 }

    return 0;

}


   //printf("%d", tab[0]);
    //for(int i = 1 ; i < 10 ; i++) printf(", %d", tab[i]);

 //for(int i = 0; i < Taille; i++)
// printf("the array elements are: %d", element[i] );
