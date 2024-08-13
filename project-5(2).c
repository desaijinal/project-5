#include<stdio.h>
main()
{
	int a[100][100];
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
	 max = a[i][j];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(max<a[i][j])
                max = a[i][j];
        }
    }
    printf("Largest Element = %d", max);
}