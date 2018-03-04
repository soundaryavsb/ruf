#include <stdio.h>

int main(void) {
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("BILL DETAILS\n");
			printf("Your balance amount is 50\n");
		break;
		}
		case 2:
		{
			printf("TALK PLAN\n");
			printf("Take in 60 seconds then the amount is RS.1\n");
		break;
		}
		case 3:
		{
			printf("DEALS AND DISCOUNT\n ");
			printf("You talk more than 8 hour per day then your doscount is 5%\n");
		break;
		}
		case 4:
		{
			printf("INTERNET PLAN DETAILS\n");
			printf("Recharge for internet service RS.299 then your offer are \n");
			printf("70 days free unlimitted calls\n");
			printf("1024 mb per day\n");
		break;
		}
		case 5:
		{
			printf("VOICE, SMS AND ROMING PACKS\n");
			printf("30 rubees recharge then you get 50% offer for voice,sms and roming packs\n");
		break;
		}
		case 6:
		{
			printf("BILL PAY OR RECHARGE\n");
			printf("you pay 49 rupee for recharge\n");
		break;
		}
		case 7:
		{
			printf("BEST OFFER\n");
			printf("Rechare 500 then get offer of 50% for all");
		break;
		}
		case 8:
		{
			printf("WHAT'S NEW\n");
			printf("your want more offer then wait newyear");
		break;
		}
		default:
		{
			printf("default condition\n");
		}
	}
	return 0;
}
