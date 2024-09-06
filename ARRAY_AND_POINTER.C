#include <stdio.h>
int main(){
    // Pointer And working 
   int a = 3;
   int *b = &a;
   printf("%d\n",b);
   
   // Null Pointer 

   int * ptra = NULL;
   printf("%p\n",ptra);
  

    // Pointer Arithmetic 

    int c = 4;
    int * ptra1 = &c;
    printf("SIZE OF INT - %d\n",ptra1+1); // Here int take 4 bite in this laptop 

    char c1 = '4';
    char * ptra11 = &c1;
    printf("%d\n",ptra11+2); // Character take 2 bites in this laptop 


    // Array and Pointer joined together 

    int arr[]={1,2,3,5};
    int * point = &arr[2];
    printf("%d\n",point);

    int arrr[] = {1,2,3,4,5};
    printf("Value in array on zero is - %d\n",arr[0]);
    printf("addeess of array on zero is - %d\n",&arr[0]);
    printf("address of array on position zero is - %d\n",arr);
    printf("address  of  array on First element is - %d\n",&arr[1]);
    printf("address of array on position first is - %d\n",arr+1);
    
    printf("addeess of array on zero is - %d\n",*(&arr[0]));
    printf("address of array on position zero is - %d\n",*(arr));
    printf("address  of  array on First element is - %d\n",*(&arr[1]));
    printf("address of array on position first is - %d\n",*(arr+1));



    return 0;
}