#include <stdio.h>
#include <string.h>

int main()
{
   char arr[100],arr1[100];

   while(1){
   printf("Enter a string to reverse\n");
   gets(arr);
   arr1=strrev(arr);
  if(arr1==arr){
    printf("Pal\n");
  }else
    printf("NOT\n");
   }
   //printf("Reverse of entered string is \n%s\n",arr);

   return 0;
}
