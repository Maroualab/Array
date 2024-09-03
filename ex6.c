#include <stdio.h>

int main(){

int n;
 printf("array size is: ",n);
 scanf("%d",&n);

int elements[n];
for(int i=0;i<n;i++){
    printf("element %d = ",i);
    scanf("%d",&elements[i]);
 }

 int f;
 printf("multiplication factor is ");
 scanf("%d",&f);

int Result;

printf("the new array is : ");

 for (int i=0;i<n;i++){
    Result = elements[i]*f ;
    printf("%d \t",Result);
 }


return 0;
}
