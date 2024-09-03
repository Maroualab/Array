#include <stdio.h>

int main(){

int n;
int elements[n];

 printf("array size is: ",n);
 scanf("%d",&n);

 for(int i=0;i<n;i++){
    printf("element %d = ",i);
    scanf("%d",&elements[i]);
 }

int min=elements[0];

for (int i=1; i< n ;i++)
    if (elements[i]< min)
    min = elements[i];

    printf("the smallest element is : %d",min);
 return 0;
}
