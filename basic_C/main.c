#include <stdio.h>
#include <stdlib.h>
struct emp{
    char name[5];
    int age;
};

int main()
{
   int *a,b=9;
   a=&b;
   printf("%d",*a);
    return 0;
}
