#include<stdio.h>

void encrypt(char pt[20], char ct[30], int key)
{
	int i=0;
	while(pt[i]!='\0')
	{
		if(pt[i]!=32)
		{
			ct[i]=pt[i]+key;
		}
		else
			ct[i]=32;
		i++;
	}
	ct[i]='\0';
	puts(ct);
}
void decrypt(char ct[30], char pt[20], int key)
{
	int i=0;
	while(ct[i]!='\0')
	{
		if(ct[i]!=32)
		{
			ct[i]=ct[i]-key;
		}
		else
			ct[i]=32;
		i++;
	}
	ct[i]='\0';
	puts(ct);
}
int main()
{
	int key,choice;
	char pt[20],ct[30];
	printf("Enter the plain text to be encrypted: ");
	fgets(pt,sizeof(pt),stdin);
	printf("Enter the key value: ");
	scanf("%d",&key);
	encrypt(pt,ct,key);
	printf("Enter 1 to decrypt the message: \n");
	scanf("%d",&choice);
	if(choice)
		decrypt(ct,pt,key);
	else
		return 0;
}



