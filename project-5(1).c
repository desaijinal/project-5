#include <stdio.h>

 main()
{
    int a[100]; 
    int i, n;

   
    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
    	printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }

    printf("All negative elements in array are : ");
    for(i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }

}