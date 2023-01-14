#include<stdio.h>
int main()
{
  int in[10],du[10],np,i,total_investment=0,ch;
  float re,profit,loss,profit_amount[10],loss_amount[10];

do{
printf("--------------WELCOME TO THE PROFTI / LOSS CALCULATION SYSTEM ------------------\n");

printf("1.Want to calculate the profit / loss\n");
printf("2.Formula for calculating the profit\n");
printf("3.Formula for calculating the loss\n");
printf("4.Exit\n");
printf("Enter the correct choice -\n");
scanf("%d",&ch);

switch(ch)
{
	case 1: printf("********* CALCULATION OF PROFIT / LOSS *************\n");
  printf("Enter the number of partners - \n");
  scanf("%d",&np);

  for(i=1;i<=np;i++)
  {
  	printf("Enter the investment of %d partner - \n",i );
  	scanf("%d",&in[i]);
  	printf("Enter the duration of %d partner - \n",i );
  	scanf("%d",&du[i]);
  	total_investment = total_investment + in[i]*du[i];
  }
printf("The total investment of all partners is %d\n",total_investment );

printf("Please Enter the return of investmet -\n");
scanf("%f",&re);

if (re>total_investment)
{
	printf("Congratution The makes a profit !!\n");
	profit = re - total_investment;
	printf("The total profit amount is %f\n",profit );
	for(i=1;i<=np;i++)
	{
		profit_amount[i] = (in[i]*du[i]*profit) /total_investment;
		printf("The profit of %d partner is %f\n",i,profit_amount[i] );
	}
}
else
{
	printf("Sorry The makes a Loss !!\n");
	loss = total_investment - re;
	printf("The total loss amount is %f\n",loss );
	for(i=1;i<=np;i++)
	{
		loss_amount[i] = (in[i]*du[i]*loss) /total_investment;
		printf("The loss of %d partner is %f\n",i,loss_amount[i] );
	}
}
break;
case 2:
		printf("FORMULA TO CACULATE THE PROFIT\n");
		printf("1.Profit = Return on investmet - total_investment\n");
		printf("2.Individual Profit = ( investmet * duration * profit ) / total_investment\n");
break ;
case 3:
		printf("FORMULA TO CACULATE THE LOSS\n");
		printf("1.loss = total_investment - Return on investmet \n");
		printf("2.Individual loss = ( investmet * duration * loss ) / total_investment\n");
break ;
case 4:
		printf("THANK YOY FOR USING THIS SYSTEM \n *****\n");
break;

default :
		 printf("Enter correct choice -\n");   
}
}while(ch!=4);
return 0;
}