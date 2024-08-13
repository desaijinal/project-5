#include<stdio.h>

main()
{
    int i,j,r,c,row,column;
	printf("Enter row size=");
	scanf("%d",&r);
	printf("Enter column size=");
	scanf("%d",&c);
	
	
    int a[r][c];
    int rowsum=0,columnsum=0;
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
	
	
	printf("Enter row number 0 to %d = ",r-1);
	scanf("%d",&row);
	printf("Elements of row %d = ",row);
	for (j=0;j<c;j++) 
	{
        printf("%d",a[row][j]);
        rowsum=rowsum+a[row][j];
    }
    printf("\nSum of row %d = %d\n",row,rowsum);
    
    
    printf("Enter column number 0 to %d = ",c-1);
	scanf("%d",&column);
	printf("Elements of column %d = ",column);
	for (i=0;i<r;i++) 
	{
        printf("%d",a[i][column]);
        columnsum=columnsum+a[i][column];
    }
    printf("\nSum of column %d = %d\n",column,columnsum);
    
}