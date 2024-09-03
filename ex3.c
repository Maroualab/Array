#include <stdio.h>

int main(){

 int n;
 int elements[n];

 printf("array size is: ");
 scanf("%d",&n);

 for(int i=0;i<n;i++){
    printf("element %d = ",i);
    scanf("%d",&elements[i]);
 }
int sum=0;
for(int i=0;i<n;i++){
  //sum= sum + elements[i];
    sum+= elements[i];
}
  printf("the sum of the array is:%d",sum);
return 0;
}
