//Chintan Patel
//LDRP-ITR
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int pos,i,value,flag=0,player=1,count=1,temp,cp=1;
char a[10],x='1';
void output();
void win();
void input();
void introduction();
int main()
{
	chintan:
	system("cls");
	printf("\n***** ***** ****   ***** ***** ****   ***** ***** *****");
	printf("\n  *     *   *        *   *   * *        *   *   * *    ");
	printf("\n  *     *   *        *   ***** *        *   *   * ***  ");
	printf("\n  *     *   *        *   *   * *        *   *   * *    ");
	printf("\n  *   ***** ****     *   *   * ****     *   ***** *****");
	printf("\n\n");
	printf("\nPRESS ANY TIME 0 TO EXIT...");
	x='1';
	for(i=1;i<=9;i++)
	{
		a[i]=x;
		x++;
	}
	printf("\n\nPRESS 1 FOR INTRODUCTION");
	printf("\n\nPRESS 2 TO CONTINUE:");
	scanf("%d",&cp);
	if(cp==1)
	{
		introduction();
		goto chintan;
	}
	else if(cp==2)
	{
		system("cls");
		printf("\n 1 | 2 | 3");
		printf("\n-----------");
		printf("\n 4 | 5 | 6");
		printf("\n-----------");
		printf("\n 7 | 8 | 9");
		while(flag!=1)
		{
			input();
			output();
			win();
		}
	}
	else
		exit(0);
	
	return 0;
}
void introduction()
{
	system("cls");
	printf("\n\n===========MADE BY CHINTAN R PATEL==========");
	printf("\n 1 | 2 | 3");
	printf("\n-----------");
	printf("\n 4 | 5 | 6              ==>GAME BOARD ");
	printf("\n-----------");
	printf("\n 7 | 8 | 9");
	printf("\n\nTwo players can play this game.");
	printf("\n\nPlayer 1 has symbol @.");
	printf("\n\nPlayer 2 has symbol *.");
	printf("\n\nIf any player sets his symbol in one line");
	printf("\nhe will be considered as winner.");
	printf("\n\nEach player has to give simply a number(1-9) to add his symbole.");
	//printf("\n\nNo one can give the number in seted place.");
	printf("\n\n\nPRESS ANY KEY TO CONTINUE");
	getch();
}
void input()
{
	if(player%2==1)
	{
		printf("\nPlayer 1 turn...");
		printf("\nEnter position:");
		scanf("%d",&pos);
		if(pos==0)
			exit(0);
		else if(pos<10)
		for(i=1;i<=9;i++)
		{
			if(i==pos)
			{
				if(a[pos]=='@'||a[pos]=='*')
				{
					temp=1;
				}
				else
				{
					a[i]='@';
					temp=0;
				}
				break;
			}
		}
	}
	else
	{
		printf("\nPlayer 2 turn...");
		printf("\nEnter position:");
		scanf("%d",&pos);
		if(pos==0)
			exit(0);
		else if(pos<10)
		for(i=1;i<=9;i++)
		{
			if(i==pos)
			{
				if(a[pos]=='@'||a[pos]=='*')
				{
					temp=1;
				}
				else
				{
					a[i]='*';
					temp=0;
				}
				break;
			}
		}
	}
	player++;
}
void output()
{
	system("cls");
	if(temp==1)
	{
		printf("\nPOSITION IS NOT EMPTY...");
		printf("\n\n %c | %c | %c",a[1],a[2],a[3]);
		printf("\n-----------");
		printf("\n %c | %c | %c",a[4],a[5],a[6]);
		printf("\n-----------");
		printf("\n %c | %c | %c",a[7],a[8],a[9]);
		count--;
		player--;

	}
	else if(pos>9)
	{
		printf("\nPLEASE ENTER VALID POSITION...");
		printf("\n\n %c | %c | %c",a[1],a[2],a[3]);
		printf("\n-----------");
		printf("\n %c | %c | %c",a[4],a[5],a[6]);
		printf("\n-----------");
		printf("\n %c | %c | %c",a[7],a[8],a[9]);
		count--;
		player--;
	}
	else
	{
		printf("\n %c | %c | %c",a[1],a[2],a[3]);
		printf("\n-----------");
		printf("\n %c | %c | %c",a[4],a[5],a[6]);
		printf("\n-----------");
		printf("\n %c | %c | %c",a[7],a[8],a[9]);
	}
	count++;
}
void win()
{
	if( (a[1]==a[4])&&(a[4]==a[7]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if( (a[1]==a[2])&&(a[2]==a[3]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if( (a[1]==a[5])&&(a[5]==a[9]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if( (a[2]==a[5])&&(a[5]==a[8]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if( (a[3]==a[6])&&(a[6]==a[9]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if( (a[4]==a[5])&&(a[5]==a[6]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if( (a[7]==a[8])&&(a[8]==a[9]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if( (a[3]==a[5])&&(a[5]==a[7]) )
	{
		printf("\nPLAYER %d WINS...",player%2+1);
		flag=1;
	}
	else if(count==10)
	{
		printf("\nMATCH DROWED...");
		flag=1;
	}
}
