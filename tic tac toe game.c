#include<stdio.h>
char matrix[3][3];
char check();
void initmatrix();
void getplayermove();
void getcomputermove();
void displaymatrix();
int main()
{
	char done;
	printf("This is the game of the Tic Tac Toe.\n ");
	printf("You will be playing against the comuter.\n");
	done= ' ';
	void initmatrix();
	do
	{
		displaymatrix();
		getplayermove();
		done=check();
		if(done!= ' ') break;
		getcomputermove();
		done=check();
	}while(done== ' ');
	if(done=='x') printf("You won!\n");
	else printf("I won!!!\n");
	displaymatrix();
	return 0;
}
void initmatrix()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) matrix[i][j]= ' ';
	}
}
void getplayermove()
{
	int x,y;
	printf("Enter x,y coordinates for your move: \n");
	scanf("%d%*c%d",&x,&y);
	x--,y--;
	if(matrix[x][y]!= ' ')
	{
		printf("Invalid move, try again.\n");
		getplayermove();
	}
	else matrix[x][y]= 'x';
}
void getcomputermove()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		if(matrix[i][j]==' ') break;
		if(matrix[i][j]==' ') break;
	}
	if(i*j==9)
	{
		printf("Draw\n");
		/*exit(0);*/
	}
	else matrix[i][j]= '0';
}
void displaymatrix()
{
	int t;
	for(t=0;t<3;t++)
	{
		printf(" %c | %c | %c ",matrix[t][0],matrix[t][1],matrix[t][2]);
		if(t!=2) printf("\n---|---|---\n");
	}
	printf("\n");
}
char check()
{
	int i;
	for(i=0;i<3;i++)
	{
		if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2]) return matrix[i][0];
	}
	for(i=0;i<3;i++)
	{
		if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i]) return matrix[0][i];
	}
	if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0]) return matrix[0][2];
	return ' ';
}
