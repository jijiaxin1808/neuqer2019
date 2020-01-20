#include<iostream>
#include<string>
using namespace std;
void change(char* ,char*); 
int main()
{
	char c1[100],c2[100];
	int i=0;
	cin.get(c1,100);
	change(c1,c2);
	while(c2[i]!='\0')
	{
		cout<<c2[i++];
	}
} 
void change(char *c1,char *c2)
{
	int i=0,j=0;
	while(c1[i]!='\0')
	{
		if(c1[i]==' ')
		{
			c2[j++]='%';
			c2[j++]='2';
			c2[j++]='0';
		}else{
			c2[j++]=c1[i];
		}
		i++;
	}
	c2[j]='\0';
}
