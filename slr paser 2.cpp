#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
#include"c:\tc\bin\SLR.h"

int S=0,i=0,j=0,state[20];
char TNT[15];
struct node
{	int pno,dpos;	};
struct t
{	char s;
	int n;		};
struct t1
{	struct t lr[10];
	int gr[5];	};
struct t1 action[15];
struct node closure[10][10];
int g[15][10];
int l;
void sclosure(int,int);
int added(int);
int t_into(char);
void print_table(int);
void parser(void);
void find_closure(int,int);
void SLR(void);
void main()
{	clrscr();
	mainf();
	getch();
	for(int i=0;i<tnt;i++)
  		TNT[i]=NT[i];
	for(int j=0;j<tt;j++)
	{	TNT[i]=T[j];
  		i++;	}
	strcat(T,"$");
	i=j=0;
	SLR();
	print_table(S);
	getch();	}
void SLR()
{	int clno,no=0,x,y,z,len,cnt=-1,d=0;
	closure[i][j].pno=0;
	closure[i][j++].dpos=3;
	find_closure(no,3);
	sclosure(i,j);
	state[i]=j;
	S=0;
	do
	{	cnt++;
  		z=state[cnt];
  		for(int k=0;k<tnt+tt;k++)
  		{	i++;
   			j=0;d=0;
   			for(int l=0;l<z;l++)
   			{	x=closure[cnt][1].pno;
    				y=closure[cnt][1].dpos;
    				if(prod[x][y]==TNT[k])
    {	 d=1;
	 closure[i][j].pno=x;
	 closure[i][j++].dpos=++y;
	 if((y<strlen(prod[x])) && (isupper(prod[x][y])))
	   find_closure(x,y);		}	}
   if(d==0)
   {	i--;
    	continue;	}
   sclosure(i,j);
   else
   {	action[cnt].lr[k-tnt].s='S';
    	action[cnt].lr[k-tnt].n=clno;
   }
   if(added(i-1)!=-1)
    i--;
   else
   {	S++;
    	for(l=0;l<state[i];l++)
    	{	if(closure[i][1].pno==0)
	 	{	action[i].lr[tt].s='A';
	  		continue;	}
	 		len=(strlen(prod[closure[i][l].pno])-1);
	 		if(len==closure[i][l].dpos)
	 		{	char v=prod[closure[i][l].pno][0];
	  			int u=nt_no(v);
	  			for(x=0;x<strlen(foll[u]);x++)
	  			{ int w=t_ino(foll[u][x]);
	   			  action[i].lr[w].s='R';
	  			  action[i].lr[w].n=closure[i][l].pno;}}}}}}
				  while(cnt!=S);	}
void print_table(int states)
{	int lin=5;
	cout<<"\n\n Parser Table: \n";
	for(int i=0;i<tt;i++)
  		cout<<"\t"<<T[i];
  		cout<<"\t$";
	for(i=0;i<tnt;i++)
   	cout<<"\t"<<NT[i];
  cout<<"\n______________________________________________________________\n";
  for(i=0;i<=states;i++)
  {	gotoxy(l,lin);
   	cout<<"I"<<i<<"\t";
   	for(int j=0;j<=tt;j++)
  	{	if(action[i].lr[j].s!='\x0')
    		{	if(action[i].lr[j].s=='A')
	 		{	cout<<"Acc";
	  			continue;	}
    else
	 cout<<"\t";	}
   for(j=0;j<tnt;j++)
    if(action[i].gr[j])
    {	 cout<<action[i].gr[j];
	 cout<<"\t";	}
    else
	 cout<<"\t";
    lin++;
    cout<<"\n";		}
   cout<<"\n______________________________________________________";		}
void sclosure(int clno,int prodno)
{ struct node temp;
  for(int i=0;i<prodno-1;i++)
  { for(int j=i+1;j<prodno;j++)
   {  if(closure[clno][i].pno>closure[clno][j].pno)
    {	 temp=closure[clno][i];
	 closure[clno][i]=closure[clno][j];
	 closure[clno][j]=temp;	}}}
  for(i=0;i<prodno-1;i++)
  {for(j=i+1;j<prodno;j++)
   {if((closure[clno][i].dpos>closure[clno][j].dpos) &&
	   (closure[clno][i].pno==closure[clno][j].pno))
    {	 temp=closure[clno][i];
	 closure[clno][i]=closure[clno][j];
	 closure[clno][j]=temp;}}}}
int added(int n)
{ int d=1;
  for(int k=0;k<=n;k++)
  {if(state[k]==state[n+1])
   { d=0;
return(k);	}	}
  return(-1);      }
void find_closure(int no,int dp)
{ int k;
  char temp[5];
  if(isupper(prod[no][dp]))
  {for(k=0;k<tp;k++)
   {if(prod[k][0]==prod[no][dp])
    {	 int t_ino(char t)
{  for(int i=0;i<=tt;i++)
   if(T[i]==t)
    return(i);
  return(-1);		}
char pops2;
struct node1
{	char s2;int s1;		};
struct node1 stack[10];
int pops1,top=0;
void parser(void)
{ int r,c;
  struct t lr[10];
  char t,acc='f',str[10];
  cout<<"Enter I/p String To Parse: ";
  cin>>str;
  strcat(str,"$");
  stack[0].s1=0;
  stack[0].s2='\n';
  cout<<"\n\n STACK";
  cout<<"\t\t INPUT";
  cout<<"\t\t ACTION";
  for(int j=0;j<strlen(str);j++)
   cout<<str[j];
  do
  {r=stack[top].s1;
   c=find_index(str[i]);
   if(c==-1)
    cout<<"\n Error! Invalid String!";
   return;	}
  while(top!=0);
  switch(action[r],lr[c].s)
  {case 'S':	{  push(str[i],action[r].lr[c].n);
		   i++;
		   cout<<"\t\t\t Shift";
		   break;	}
  case 'R':	{ t=prod[action[r].lr[c].n][3];
		  do	{	pop();	}
		  while(pops2!=t);
		  t=prod[action[r].lr[c].n][0];
		  r=stack[top].s1;
		  c=find_index(t);
		  push(t,action[r].gr[c-tt-1]);
		  cout<<"\t\t\t Reduce";
		  break;}
  case 'A':{	  cout<<"\t\t\t Accept";
		  cout<<"\n\n\n String accepted";
		  acc='t';
		  getch();
		  return;	}
  default: {	  cout<<"\n\n\n Error! String not accepted!";
		  getch();
		  exit(0);}}
for(j=0;j<=top;j++)
  cout<<stack[j].s2<<stack[j].s1;
if(top<4)
  cout<<"\t\t\t";
else
  cout<<"\t\t";
for(j=i;j<strlen(str);j++)
  cout<<str[j];
if(acc=='t')
  return;	}
int find_index(char temp)
{for(int i=0;i<=tt+tnt;i++)
 {if(i<=tt)
  { if(T[i]==temp)
    return(i);}
    else
   if(NT[i-tt-1]==temp)
    return(i);	}
return(-1);	}
void push(char t2,int t1)
{++top;
stack[top].s1=t1;
stack[top].s2=t2;
return;		}
void pop(void)
{pops1=stack[top].s1;
pops2=stack[top].s2;
--top; getch(); }

