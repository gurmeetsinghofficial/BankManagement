
#include<stdio.h>
#include<conio.h>
void main()
{
	struct mak
	{
		int b,p,a;
		char n[20],f[20],g[20];
	}m[100];
	int i,j,k,z,o,h[100],u;
	char v[20];
	clrscr();
	for(j=0;j<100;j++)
	{
		h[j]=0;
	}
	for(j=0;j<100;j++)
	{
		m[j].a=0;
	}
	printf("=================================GURUG============================================");
	start:
	printf("\n           Select option****\n             1.Existing Account\n             2.New Account\n		   3.Accounts below 1000\n		  4.Admin Login\n	      5.exit");
	scanf("%d",&i);
	switch(i)
	{
		case 5:
			break;
		case 4:
			printf("Enter Pin\n");
		icc:
		scanf("%d",&k);
		if(k!=3421)
		{
			printf("Press 1 to enter pin again\nand 2 to exit");
			scanf("%d",&k);
			if(k==1)
			{
				printf("enter Pin again:");
				goto icc;
			}
			else if(k==2)
			{
				goto start;
			}
		}

		abc:
		printf("Blocked accounts are:\n");
		k=1;
		for(j=0;j<100;j++)
		{
			if(m[j].a==949)
			{
				printf("%d=%s\n",k,m[j].n);
				k++;
			}
		}
		printf("if you wanna unblock press 1 or 2 to exit\n");
		scanf("%d",&k);
		if(k==1)
		{
		printf("Enter name of account holder:");
		scanf("%s",&v);
		for(j=0;j<100;j++)
		{
			if(strcmp(m[j].n,v)==0)
			{
				break;
			}
		}
		m[j].a=h[j];
		printf("your account has been unblocked\npress 1 to unblock another account or press 2 to go to main menu");
		ggg:
	       //	clrscr();
		scanf("%d",&k);
		if(k==1)
		{
		goto abc;
		}
		else if(k==2)
		{
		goto start;
		}
		else
		{
		printf("incorrect input");
		goto ggg;
		}
		}
		break;
		case 3:
			printf("account below 1000 are\n");
			for(j=0;j<100;j++)
			if(m[j].b<1000&&m[j].b>0)
			{
				printf("account name=%s\n",m[j].n);
			}
			printf("press 1 to go to main menu or press 2 to exit");
			scanf("%d",&k);
			clrscr();
			if(k==1)
			{
			goto start;
			}
			if(k==2)
			{
			break;
			}
		case 2:
		j=0;
		if(m[j].a!=0)
		{
			j++;
		}
		printf("Enter Account Number");
		scanf("%d",&m[j].a);
		printf("Enter Name:");
		scanf("%s",&m[j].n);
		printf("Enter balance         min=100\nbalance=");
		inb:
		scanf("%d",&m[j].b);
		if(m[j].b<100)
		{
			printf("insufficient amount\n");
			printf("enter amount again");
			goto inb;
		}
		printf("Enter Pin");
		inp:
		scanf("%d",&m[j].p);
		printf("Enter Pin again");
		scanf("%d",&k);
		if(k!=m[j].p)
		{
		printf("Pin doesn't match\nEnter Pin Again");
		goto inp;
		}
		printf("Your New Account is created\n");
		j++;
		clrscr();
		printf("Enter 1 to continue and 2 to exit");
		scanf("%d",&k);
		if(k==1)
		{
			goto start;
		}
		else
		{
		break;
		}
		default:
		clrscr();
		printf("Invalid Input please try again");
		goto start;
		case 1:
		fff:
		printf("Enter Account Number:");
		ina:
		scanf("%d",&o);
		for(j=0;j<100;j++)
		{
			if(o==m[j].a)
			{
			break;
			}
			else
			{
			printf("account number doesn't exist\npress 1 to continue or 2 to exit");
			scanf("%d",&k);
			if(k==1)
			{
			goto fff;
			}
			if(k==2)
			{
			clrscr();
			goto start;
			}
			}
		}
		u=3;
		printf("Enter Pin\n");
		inpp:
			if(u==0)
		{
			printf("your account has been blocked\nPlease contact admin for more details");
			h[j]=m[j].a;
			m[j].a=949;
		}
		printf("[[%d attempts left]]",u);
		scanf("%d",&k);
		if(k!=m[j].p)
		{
			printf("Press 1 to enter pin again\nPress 2 to change account number");
			scanf("%d",&k);
			if(k==1)
			{
				printf("enter Pin again:");
				u--;
				goto inpp;
			}
			else if(k==2)
			{
				printf("enter new account number:");
				goto ina;
			}
		}
		clrscr();
		printf("===============Account Holder's Name=%s\n	Select one option\n	",m[j].n);
		acc:
		clrscr();
		printf("1=Account Statement\n2=Withdrawal\n3=Deposit\n4=Change Pin\n5=forget pin\n6=sign out\n7=exit");
		scanf("%d",&z);
		switch(z)
		{
			clrscr();
			case 1:
			printf("Balance=%d\nIf you wanna continue press 1 and 2 to exit",m[j].b);
			a:
			scanf("%d",&k);
			if(k==1)
			{
				clrscr();
				goto acc;
			}
			else if(k==2)
			{
				break;
			}
			else
			{
				printf("invalid input");
				goto a;
			}
			break;
			case 2:
			b:
			printf("Enter Amount");
			scanf("%d",&k);
			m[j].b=m[j].b-k;
			if(m[j].b<0)
			{
				printf("insufficient balance");
				m[j].b=m[j].b+k;
				goto b;
			}
			printf("Balance=%d\nIf you wanna continue press 1 and 2 to exit",m[j].b);
			w:
			scanf("%d",&k);
			if(k==1)
			{
				clrscr();
				goto acc;
			}
			else if(k==2)
			{
				break;
			}
			else
			{
				printf("invalid input");
				goto w;
			}
			break;
			case 3:
			printf("Enter Amount");
			scanf("%d",&k);
			m[j].b=m[j].b+k;
			printf("Balance=%d\nIf you wanna continue press 1 and 2 to exit",m[j].b);
			e:
			scanf("%d",&k);
			if(k==1)
			{
				clrscr();
				goto acc;
			}
			else if(k==2)
			{
				break;
			}
			else
			{
				printf("invalid input");
				goto e;
			}
			break;
			case 4:
			t:
			clrscr();
			printf("Enter Old Pin:");
			scanf("%d",&k);
			if(m[j].p!=k)
			{
				printf("Wrong pin\nPress 1 to Enter Pin Again or 2 to forget pin");
				z:
				scanf("%d",&k);
				if(k==1)
				{
					printf("enter pin again");
					goto t;
				}
				else if(k==2)
				{
					goto y;
				}
				else
				{
					printf("invalid input");
					goto z;
				}
			}
				q:
				printf("enter new pin:");
				scanf("%d",&k);
				if(k==m[j].p)
				{
				printf("pin already exist\n");
				goto q;
				}
				m[j].p=k;
				printf("your pin is changed successfully\n");
				printf("If you wanna continue press 1 and 2 to exit",m[j].b);
			r:
			scanf("%d",&k);
			if(k==1)
			{
				clrscr();
				goto acc;
			}
			else if(k==2)
			{
				break;
			}
			else
			{
				printf("invalid input");
				goto r;
			}
			break;
			case 5:
			y:
			clrscr();
			printf("Enter Name:");
			gets(v);
			if(m[j].n!=v)
			{
			printf("Invalid name");
			goto y;
			}
			p:
			printf("enter balance:");
			scanf("%d",k);
			if(m[j].b!=k)
			{
				printf("balance doesn't match");
				goto p;
			}
			goto q;
			break;
			case 6:
			goto start;
			break;
			case 7:
			break;
			default:
			printf("invalid input");
			goto acc;
			break;
		}

	getch();
}
}