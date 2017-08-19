#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, a[10], b[10], count = 0, c, d;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for(c=0;c<n;c++)
        scanf("%d",&a[c]);  //Getting the array elements

    for(c=0;c<n;c++) //For removing duplicate elements
    {
        for(d=0;d<count;d++)
        {
            if(a[c]==b[d])
                break;
        }
        if(d==count)
        {
            b[count] = a[c];
            count++;
        }
    }
    printf("Array after removing duplicate elements\n");
    for(c=0;c<count;c++)
        printf("%d\t",b[c]);

    system("pause");
    return 0;
}
