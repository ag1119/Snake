
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
int getkey();
int navigate(int);
char a[22][70],b[300][2],k=1, ch; int i,j,p,q,r,s,x=6,score=0;


void blink()
{k:
{ p=rand()%20+1;
  q=rand()%58+1;
  r=rand()%20+1;
  s=rand()%58+1; }
if((a[p][q]=='*')||(a[p][q]=='-')||(a[p][q]=='|'))
 goto k;
 a[p][q]='O';}




void ini()
{ clrscr();
for(i=0;i<22;i++)
{for(j=0;j<60;j++)
a[i][j]=' ';}
for(i=1;i<60;i++)
{a[1][i]='-';a[21][i]='-';}
for(i=1;i<22;i++)
{a[i][1]='|';a[i][60]='|';}
for(i=0;i<=x;i++)
b[i][0]=10;
for(i=0;i<=x;i++)
b[i][1]=17-i;
for(i=0;i<=x;i++)a[b[i][0]][b[i][1]]='*';
a[b[0][0]][b[0][1]]='o';
blink();
}




void gen()
{for(i=0;i<=x;i++)a[b[i][0]][b[i][1]]='*';
a[b[0][0]][b[0][1]]='o';
clrscr();
for(i=0;i<22;i++)
{for(j=0;j<70;j++)
printf("%c",a[i][j]); printf("\n");}
gotoxy(62,2);printf("score %d",score);
}


void proceed()
{
a[b[x][0]][b[x][1]]=' ';
for(i=x;i>0;i--)
b[i][0]=b[i-1][0];
for(i=x;i>0;i--)
b[i][1]=b[i-1][1];}




void main()
{
clrscr();
textbackground(YELLOW);
textcolor(BLACK);
randomize();
ini();
while(1)
{

gen();
proceed();
b[0][1]+=1;
delay(120);
if((a[b[0][0]][b[0][1]]=='*')||(a[b[0][0]][b[0][1]]=='-')||(a[b[0][0]][b[0][1]]=='|'))
{gotoxy(24,11);
printf("  GAME OVER  %c",k);delay(3000);exit(0);}
if(a[b[0][0]][b[0][1]]=='O'){x=x+1; blink();score+=1;}

if(kbhit())ch=getch();
if(ch==72) goto u;
 if(ch==80) goto d;
 if(ch==75) goto l;
 if(ch==77) goto r;
 if(ch==27) exit(0);

 }

u:
{while(1)
{
proceed();
gen();
b[0][0]-=1;
delay(140);
if((a[b[0][0]][b[0][1]]=='*')||(a[b[0][0]][b[0][1]]=='-')||(a[b[0][0]][b[0][1]]=='|'))
{gotoxy(24,11);
printf("  GAME OVER  %c",k);delay(3000);exit(0);}
if(a[b[0][0]][b[0][1]]=='O'){x=x+1; blink();score+=1;}

if(kbhit())ch=getch();
if(ch==72) goto u;
 if(ch==80) goto d;
 if(ch==75) goto l;
 if(ch==77) goto r;
 if(ch==27) exit(0);
}}

d:
{while(1)
{
proceed();
gen();
b[0][0]+=1;
delay(140);
if((a[b[0][0]][b[0][1]]=='*')||(a[b[0][0]][b[0][1]]=='-')||(a[b[0][0]][b[0][1]]=='|'))
{gotoxy(24,11);
printf("  GAME OVER  %c",k);delay(3000);exit(0);}
if(a[b[0][0]][b[0][1]]=='O'){x=x+1; blink();score+=1;}
if(kbhit())ch=getch();
if(ch==72) goto u;
 if(ch==80) goto d;
 if(ch==75) goto l;
 if(ch==77) goto r;
 if(ch==27) exit(0);
} }

l:
{while(1)
{
proceed();
gen();
b[0][1]-=1;
delay(120);
if((a[b[0][0]][b[0][1]]=='*')||(a[b[0][0]][b[0][1]]=='-')||(a[b[0][0]][b[0][1]]=='|'))
{gotoxy(24,11);
printf("  GAME OVER  %c",k);delay(3000);exit(0);}
if(a[b[0][0]][b[0][1]]=='O'){x=x+1; blink();score+=1;}
if(kbhit())ch=getch();
if(ch==72) goto u;
 if(ch==80) goto d;
 if(ch==75) goto l;
 if(ch==77) goto r;
 if(ch==27) exit(0);
} }

r:
{while(1)
{
proceed();
gen();
b[0][1]+=1;
delay(120);
if((a[b[0][0]][b[0][1]]=='*')||(a[b[0][0]][b[0][1]]=='-')||(a[b[0][0]][b[0][1]]=='|'))
{gotoxy(24,11);
printf("  GAME OVER  %c",k);delay(3000);exit(0);}
if(a[b[0][0]][b[0][1]]=='O'){x=x+1; blink();score+=1;}
if(kbhit())ch=getch();
if(ch==72) goto u;
 if(ch==80) goto d;
 if(ch==75) goto l;
 if(ch==77) goto r;
 if(ch==27) exit(0);
} }
}