#include<stdio.h>
#include<string.h>
void search(char pattern[100],char text[]);
int main()
{
	char text[100],pattern[100];
	int i;
	printf("Enter elements in text:\n");
	for(i=0;i<10;i++)
	{
		scanf("%c",&text[i]);
	}
	printf("Enter element in pattern:\n");
	for(i=0;i<4;i++)
	{
		scanf("%c",&pattern[i]);
	}
	search(pattern,text);
	return 0;
}
void search(char *pat, char *txt)
{
	int i,j;
    int M = strlen(pat);
    int N = strlen(txt);
    for (i = 0; i <= N - M; i++)
    {
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
 
        if (j == M)
           printf("Pattern found at index %d \n", i);
    }
}

