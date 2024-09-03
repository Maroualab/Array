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

int max=elements[0];

for (int i=1; i< n ;i++)
    if (elements[i] > max)
    max = elements[i];

    printf("the largest element is : %d",max);
 return 0;
}
