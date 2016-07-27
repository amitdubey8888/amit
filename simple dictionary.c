#include<stdio.h>
#include<string.h>
char *dic[][40]={"atlas", "a volumes of mapes.",
                 "car", "a motorised vehical.",
				 "telephone", "a communucaion device.",
				 "airplane", "a flying machine.",
				 " "};
				 int main()
				 {
				 	char word[100], ch;
				 	char **p;
				 	do
				 	{
				 		puts("Enter word:");
				 		scanf("%s",word);
				 		p=(char **)dic;
				 		do
				 		{
				 			if(!strcmp(*p,word))
				 			{
				 				puts("meaning:");
				 				puts(*(p+1));
				 				break;
							 }
							 if(!strcmp(*p,word)) break;
							 p=p+2;
						 }while(*p);
						 if(!*p) puts("word not in dictionary.");
						 printf("Another? (Y/N):");
						 scanf("%c",&ch);
					 }while(ch!='n');
					 return 0;
				 }
