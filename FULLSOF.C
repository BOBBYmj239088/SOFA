#include<stdio.h>
#include<conio.h>
void main()
{
int bilsofa,pO2,count,Respsofa,e,v,m,gcstot,gcssofa,MAP,mapsofa,creatsofa,plate,platesofa,grandsofa;
float bil,creat,Resp;
clrscr();
printf("********************************************************************************\n");
printf("                             WELCOME TO THE PROGRAM FOR                 \n");
printf("       SEQUENTIAL ORGAN FAILURE ASSESSMENT (SOFA) SCORE CALCULATION\n");
printf("\n ******************************************************************************\n");
count=1;
while(count<=16)
{
/* bil*/ printf("\n Enter the Biliubin value \n");
scanf("%f",&bil);
printf("The Bilirubin value is %f \n",bil);
getch();
if(bil<=1.2)
{
bilsofa=0;
printf("The SOFA score for Bilirubin for the Subject: %d is %d \n",count,bilsofa);
}
else if((bil<=1.9)&(bil>=1.2))
	{
	bilsofa=1;
	printf("The SOFA score for Bilirubin for the Subject: %d is %d \n",count,bilsofa);
	}
else if((bil<=5.9)&(bil>=2.0))
	{
	bilsofa=2;
	printf("The SOFA score for Bilirubin for the Subject: %d is %d \n",count,bilsofa);
	}
else if((bil<=11.9)&(bil>=6.0))
	{
	bilsofa=3;
	printf("The SOFA score for Bilirubin for the Subject: %d is %d \n",count,bilsofa);
	}
else if(bil>=12)
	{
	bilsofa=4;
	printf("The SOFA score for Bilirubin for the Subject: %d is %d \n",count,bilsofa);
	}
	else
	{
	printf("Incorrect Bilirubin Value \n");
	}
/*creat*/
printf("\n Enter the Creatinine value \n");
scanf("%f",&creat);
printf("\n The Creatinine value is %f \n",creat);
if(creat<=1.2)
{
creatsofa=0;
printf("The SOFA score for Creatinine for the Subject: %d is %d \n",count,creatsofa);
getch();
}
else if((creat<1.9)&(creat>=1.2))
	{
	creatsofa=1;
	printf("The SOFA score for Creatinine for the Subject: %d is %d \n",count,creatsofa);
	getch();
	}
else if((creat<=3.4)&(creat>=2.0))
	{
	creatsofa=2;
	printf("The SOFA score for Creatinine for the Subject: %d is %d \n",count,creatsofa);
	getch();
	}
else if((creat<=4.9)&(creat>=3.5))
	{
	creatsofa=3;
	printf("The SOFA score for Creatinine for the Subject: %d is %d \n",count,creatsofa);
	getch();
	}
else if(creat>=5.0)
	{
	creatsofa=4;
	printf("The SOFA score for Creatinine for the Subject: %d is %d \n",count,creatsofa);
	getch();
	}
	else
	{
	printf("Incorrect Creatinine value \n");
	}
/*gcs*/
printf("\n ENTER THE VALUE FOR EYE MOVEMENT  \n");
scanf("%d",&e);
printf("\n ENTER THE VALUE FOR VERBAL SKILLS \n");
scanf("%d",&v);
printf("\n ENTER THE VALUE FOR MOTOR CAPACITY \n");
scanf("%d",&m);
printf("\n THE GCS YOU ENTERED IS E %d V %d M %d \n",e,v,m);
gcstot=e+v+m;
printf("\n The Total GCS value is %d \n",gcstot);
if(gcstot==15)
{
gcssofa=0;
printf("THE SOFA SCORE FOR THE GCS VALUE for the Subject: %d IS %d \n",count,gcssofa);
getch();
}
else if((gcstot>=13)&(gcstot<=14))
{
gcssofa=1;
printf("THE SOFA SCORE FOR THE GCS VALUE for the Subject: %d IS %d \n",count,gcssofa);
getch();
}
else if((gcstot>=10)&(gcstot<=12))
{
gcssofa=2;
printf("THE SOFA SCORE FOR THE GCS VALUE for the Subject: %d IS %d \n",count,gcssofa);
getch();
}
else if((gcstot>=6)&(gcstot<=9))
{
gcssofa=3;
printf("THE SOFA SCORE FOR THE GCS VALUE for the Subject: %d IS %d \n",count,gcssofa);
getch();
}
else if(gcstot<6)
{
gcssofa=4;
printf("THE SOFA SCORE FOR THE GCS VALUE for the Subject: %d IS %d \n",count,gcssofa);
getch();
}
else
{
printf("INCORRECT VALUE \n");
}/* map*/
printf("Enter the MAP value \n");
scanf("%d",&MAP);
printf("The MAP value is %d \n",MAP);
if(MAP>=70)
{
mapsofa=0;
printf("The SOFA score for MAP for the Subject: %d is %d \n",count,mapsofa);
}
else if(MAP<=70)
{
mapsofa=1;
printf("The SOFA score for MAP for the Subject: %d is %d \n",count,mapsofa);
}
else
{
printf("INCORRECT MAP VALUE \n");
}
printf("\n Enter the Platelet value (in Tousands) \n");
scanf("%d",&plate);
printf("\n The Platelet value is %d \n",plate);
getch();
if(plate>=150)
{
platesofa=0;
printf("The SOFA score for Platelet for the Subject: %d is %d \n",count,platesofa);
getch();
}
else if((plate<150)&(plate>=100))
	{
	platesofa=1;
	printf("The SOFA score for Platelet for the Subject: %d is %d \n",count,platesofa);
	getch();
	}
else if((plate<100)&(plate>=50))
	{
	platesofa=2;
		printf("The SOFA score for Platelet for the Subject: %d is %d \n",count,platesofa);
	getch();
	}
else if((plate>=20)&(plate<50))
	{
	platesofa=3;
	printf("The SOFA score for Platelet for the Subject: %d is %d \n",count,platesofa);
	getch();
	}
else if(plate<20)
	{
	platesofa=4;
	printf("The SOFA score for Platelet for the Subject: %d is %d \n",count,platesofa);
	getch();
	}
else
{
printf("Incorrect Platelet value \n");
}
printf("\n Enter the pO2 value \n");
scanf("%d",&pO2);
Resp=(pO2/0.4);
printf("\nThe Resp value is %f \n",Resp);
if(Resp>=400)
{
Respsofa=0;
printf("The SOFA score for Respiration for the Subject: %d is %d \n",count,Respsofa);
getch();
}
else if((Resp<400)&(Resp>=300))
{
Respsofa=1;
printf("The SOFA score for Respiration for the Subject: %d is %d \n",count,Respsofa);
getch();
}
else if((Resp<300)&(Resp>=200))
{
Respsofa=2;
printf("The SOFA score for Respiration for the Subject: %d is %d\n",count,Respsofa);
getch();
}
else if((Resp<200)&(Resp>=100))
{
Respsofa=3;
printf("The SOFA score for Respiration for the Subject: %d is %d \n",count,Respsofa);
getch();
}
else if(Resp<100)/*&(Resp!=(0&1&2&3)))*/
{
Respsofa=4;
printf("The SOFA score for Respiration for the Subject: %d is %d \n",count,Respsofa);
getch();
}
else
{
printf("INCORRECT RESPIRATION VALUE \n");
}
grandsofa=(bilsofa+Respsofa+gcssofa+mapsofa+creatsofa+platesofa);
printf("------------------------------------------------\n");
/* bilsofa,Respsofa,gcssofa,mapsofa,creatsofa */
/*platesofa */
/* gcstot,MAP,platea,bil,creat,Resp */
/*int bilsofa,pO2,count,Respsofa,e,v,m,gcstot,gcssofa,MAP,mapsofa,creatsofa,plate,platesofa,grandsofa;
float bil,creat,Resp;    */
printf("SOFA Score for Bilirubin level  : %f   is   : %d \n",bil,bilsofa);
printf("SOFA Score for Creatinine level : %f   is   : %d \n",creat,creatsofa);
printf("SOFA Score for MAP              : %d          is : %d \n",MAP,mapsofa);
printf("SOFA Score for Platelet level   : %d          is : %d \n",plate,platesofa);
printf("SOFA Score for Respiration level: %f  (pO2: %d) is : %d \n",Resp,pO2,Respsofa);
printf("SOFA Score for GCS(Sensorium)   : %d          is : %d \n",gcstot,gcssofa);
printf("\n -------------------------------------------------\n");
printf("    THE GRAND SOFA SCORE FOR THE SUBJECT : %d IS %d \n",count,grandsofa);
printf("\n -------------------------------------------------\n");
printf("\n -------------END OF PROGRAM----------------------\n");
getch();
count=count+1;
}
}
