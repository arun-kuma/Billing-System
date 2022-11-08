#include <stdio.h>
  int percent();
  int manual();
  int no_dis();

     int a,qua[10],bill_id,i,n;
    float tot,ipri,dis,rate[10];
    char cname[20],cphone[10],cadd[300],item[20][20],date[10];
 int main()
  {
      printf("\n\t\t\t\t\t\t\t\t\t******HELLO!!******");
      printf("\n\t\t\t\t\t\t\t\t*****ENTER THE DETAILS HERE*****");
    printf("\n\n\n\t\t\t*)Enter the Bill id=");
    scanf("%d",&bill_id);

   printf("\n\t\t\t*)Enter the Date=");
   scanf("%s",date);


   printf("\n\t\t\t*)Enter the name of Customer=");
   scanf("%s",cname);

   printf("\n\t\t\t*)Enter the Address of customer=");
   scanf("%s",cadd);

   printf("\n\t\t\t*)Enter the Phone number of customer=");
   scanf("%s",cphone);



   printf("\n\t\t\t*)Total no.of itmes purchsed=");
   scanf("%d",&n);
   printf("\n\n\n\n\t\t\t\t\t\t\t\t\t*****ITEM DETAILS*****");
   for(i=1;i<=n;i++)
{
	printf("\n\n\n\t\t\t*)name of the item %d:",i);
	scanf("%s",item[i]);

	printf("\n\t\t\t*)price of the item %s:",item[i]);
	scanf("%f",&rate[i]);

	printf("\n\t\t\t*)quantity of the item %s:",item[i]);
	scanf("%d",&qua[i]);
	ipri=ipri+(qua[i]*rate[i]);

}
       printf("\n\t\t\t*)total price=%.3f\n",ipri);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t*****DISCOUNT SECTION*****");
     printf("\n\n\n\n\t\t\tDISCOUNT APPLICABLE: \t1)IN PERCENTAGE\n\t\t\t\t\t\t2)MANUAL DISCOUNT\n\t\t\t\t\t\t3)NO DISCOUNT\n\t\t\tEnter the choice:");
    scanf("%d",&a);

	 if (a!=1&&a!=2&&a!=3)
	{

	 for(a;a!=1&&a!=2&&a!=3;a)
    {
  	printf("\n\t\t\t\t\t\t\t\t\t!!PLEASE SELECT A VALID OPTION!!");
  	printf("\n\t\t\tEnter the choice:");
     scanf("%d",&a);
  	 switch(a)
     {
     	case 1 : percent();
     	break;
     	case 2 : manual();
     	break;
     	case 3 : no_dis();
     	break;
    }
	continue;
	}
   }
   else
   {
   	switch(a)
     {
     	case 1 : percent();
     	break;
     	case 2 : manual();
     	break;
     	case 3 : no_dis();
     	break;
    }
   }

}
     int percent()
    {
	      float m;
    	printf("\n\n\n\n\t\t\t DISCOUNT TO BE APPLIED IS(in precentage):");
    	scanf("%f",&m);

    	dis=ipri*(m/100);
    	tot=ipri-dis;

    printf("\n\n\n\n\t\t\t\t*****************************************WELCOME***************************************************");

    printf("\n\n\n\n\t\t\t\t\tBill id:%d",bill_id);

   printf("\t\t\t\t\t\t\t\tDate: %s",date);

   printf("\n\n\t\t\t\t\tName of Customer:%s",cname);

   printf("\n\t\t\t\t\tAddress of customer:%s",cadd);

   printf("\n\t\t\t\t\tPhone number of customer:%s",cphone);

   printf("\n\n\t\t\t\t\t\t\titem name\tprice\t\tquantity\ttotal");

   for(i=1;i<=n;i++)
   {

    printf("\n\n\t\t\t\t\t\t\t%s\t\t%.3f\t\t%d\t\t%.3f\n",item[i],rate[i], qua[i],qua[i]*rate[i]);
   }

    printf("\n\t\t\t\t\tOverall discount=%f",dis);
    printf("\n\t\t\t\t\tprice after the discount:%.3f",tot);


   printf("\n\n\n\t\t\t\t*****************************************Thank You***************************************************");
}
   int manual()
   {
         float m;
    	printf("\n\n\n\n\t\t\t DISCOUNT TO BE APPLIED IS(in manual):");
    	scanf("%f",&m);

    	dis=m;
    	tot=ipri-dis;

   printf("\n\n\n\n\t\t\t\t*****************************************WELCOME***************************************************");

    printf("\n\n\n\n\t\t\t\t\tBill id:%d",bill_id);

   printf("\t\t\t\t\t\t\t\tDate: %s",date);

   printf("\n\n\t\t\t\t\tName of Customer:%s",cname);

   printf("\n\t\t\t\t\tAddress of customer:%s",cadd);

   printf("\n\t\t\t\t\tPhone number of customer:%s",cphone);

   printf("\n\n\t\t\t\t\t\t\titem name\tprice\t\tquantity\ttotal");

   for(i=1;i<=n;i++)
   {

    printf("\n\n\t\t\t\t\t\t\t%s\t\t%.3f\t\t%d\t\t%.3f\n",item[i],rate[i], qua[i],qua[i]*rate[i]);
   }

    printf("\n\t\t\t\t\tOverall discount=%f",dis);
    printf("\n\t\t\t\t\tprice after the discount:%.3f",tot);


   printf("\n\n\n\t\t\t\t*****************************************Thank You***************************************************");

   }
   int no_dis()
   {
   	printf("\n\n\n\n\t\t\t\t*****************************************WELCOME***************************************************");

    printf("\n\n\n\n\t\t\t\t\tBill id:%d",bill_id);

   printf("\t\t\t\t\t\t\t\tDate: %s",date);

   printf("\n\n\t\t\t\t\tName of Customer:%s",cname);

   printf("\n\t\t\t\t\tAddress of customer:%s",cadd);

   printf("\n\t\t\t\t\tPhone number of customer:%s",cphone);

   printf("\n\n\t\t\t\t\t\t\titem name\tprice\t\tquantity\ttotal");

   for(i=1;i<=n;i++)
   {

    printf("\n\n\t\t\t\t\t\t\t%s\t\t%.3f\t\t%d\t\t%.3f\n",item[i],rate[i], qua[i],qua[i]*rate[i]);
   }
   printf("\n\t\t\t total price=%.3f\n",ipri);
   printf("\n\n\n\t\t\t\t*****************************************Thank You***************************************************");
   }
