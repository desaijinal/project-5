#include<stdio.h>
main()
{
	int a[3][3],t[3][3];
	int r,c,i,j,max;
	printf("Enter row size=");
	scanf("%d",&r);
	printf("Enter colum size=");
	scanf("%d",&c);
	printf("Enter Array Element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<r;i++)
	{
		 for (j=0; j<c;j++)
		 {
            t[j][i] = a[i][j];
         }
	
	}
   printf("transform of matrix=\n");
   for (i=0;i<r;i++)
	{
		 for (j=0;j<c;j++)
		 {
            printf(" %d",t[i][j]);
         }
         printf("\n");
	
	}
}