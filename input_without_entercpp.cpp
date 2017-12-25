# include <stdio.h>
# include <conio.h>
# include <iostream>

using namespace std;
int main ( void )
{
int cha;
char ch;
while(1)
{
if ( kbhit() )
{
ch = getch();
cha = ch;
if(cha=='x')
{
	cout<<"gukha";
}
if(cha=='y')
{
	cout<<"mutkha";
}
}
}
return 0;
}
