#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,uchoice,cochoice,c=0,p=0;
	char s[20];
	char d[]={'r','p','s' },pl,cl;
	printf("Enter your name");
	scanf("%[^\n]s",s);
	printf("Welcome");
	printf(" %s",s);
	printf("\n  quick recap to the Rules of the game ");
	printf("\n==================================================================");
	printf("\n=================================================");
	printf("\n=================================");
	printf("\n   Enter 1 for selecting rock");
	printf("\n     r for rock ");
	printf("\n   Enter 2 for selecting paper");
	printf("\n     p for paper");
	printf("\n   Enter 3 for selecting scissor");
	printf("\n     s for scissor");
	for(i=1;i<=3;i++)
	{
		printf("\nEnter your choice");
		scanf("%d",&uchoice);
		pl=d[uchoice-1];
		printf("\n Your choice is %c",pl);
		cochoice=(rand()%3)+1;
		cl=d[cochoice-1];
		printf("\ncomputer choice is %c",cl);
		
		if(cl==pl)
		printf("\nDraw match"); 
		 else if((cl=='s')&&(pl=='p'))
		{
		  c++;
		  printf("\nYou lost the game");
     	}
     	 else if((cl=='p')&&(pl=='s'))
		{
		  p++;
		  printf("\nYou won the game");
     	}
     	 else if((cl=='s')&&(pl=='r'))
		{
		  p++;
		  printf("\nYou won the game");
     	}
     	 else if((cl=='r')&&(pl=='s'))
		{
		  c++;
		  printf("\nYou lost the game");
     	}
     	else if((cl=='r')&&(pl=='p'))
		{
		  p++;
		  printf("\nYou won the game");
     	}
     	else if((cl=='p')&&(pl=='r'))
		{
		  c++;
		  printf("\nYou lost the game");
     	}
	}
	printf("\nFinally your score is %d",p);
	printf("\ncomputer's score is %d",c);
		if(p>c)
		{
		printf("\n=============================================");
		printf("\nYou are the winner");
	    }
		else if(c>p)
		{
			printf("\n===========================================");
		printf("\nBetter luck next time");
	    }
		else
		{
		printf("\n==============================================");
		printf("\nThe match is drawn");
	    }
}
