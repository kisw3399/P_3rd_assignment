#include<stdio.h>

int main()
{int i,n;
 float arr[100];

 printf("Enter total number of elements(1 to 100): ");
 scanf("%d", &n);

 for(i=0; i<n; i++){
  printf("Enter Number %d: ",i+1);
  scanf("%f", & arr[i]);
  }
  
 for(i=1; i<n; i++){
  if(arr[0] < arr[i]){
   arr[0]= arr[i];
   }
  }

 for(i=1; i<n; i++){
  if(arr[1] < arr[i] && arr[i] < arr[0] || arr[0] == arr[1]){
   arr[1]=arr[i];
   }
  }

 printf("The largest element = %.2f\n", arr[0]); 
 printf("Second Largest element = %.2f\n", arr[1]); 
 
 
  return 0;
}