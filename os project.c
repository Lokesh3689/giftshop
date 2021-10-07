#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p[10][5],temp[5];
	int i,j,pt[15],wait_time[20],total_wt=0,pr[15],temp1,n;
	float average_wt;
	printf("Enter no of students:");
	scanf("%d",&n);
	if(p[i]< = p[j])
		printf("Enter the correct details");
	for(i=0;i<n;i++)
	{
		printf("enter students %d name:",i+1);
  		scanf("%s",&p[i]);
		printf("enter process time:");
		scanf("%d",&pt[i]);
		printf("enter no of gifts:");
		scanf("%d",&pr[i]);
	}
  	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]>pr[j])
			{
				temp1=pr[i];
				pr[i]=pr[j];
				pr[j]=temp1;
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
	wait_time[0]=0;
	for(i=1;i<n;i++)
	{
		wait_time[i]=0;
		for(j=0;j<i;j++)
			wait_time[i]=wait_time[i]+pt[j];
			total_wt=total_wt+wait_time[i];

	}
	average_wt=(float)total_wt/n;
	printf("S_name\t P_time\t No.Gifts\tW_time\n"); 
	for(i=0;i<n;i++)
	{
	   printf(" %s\t %d\t %d\t \t%d\n" ,p[i],pt[i],pr[i],wait_time[i]);
	}
	printf("total waiting time=%d\navg waiting time=%f",total_wt,average_wt);
	getch();
}


