#include <stdio.h>
#include <stdlib.h>
void encrypt();
void decrypt();
void main()
{
	int choice;
	printf("\n\nWelcome to Encryption-Decryption:\n");
	printf("\n********************************\n");
	printf("\nEnter your choice:");
	printf("\n*******************\n");
	printf("\nPress 1 for encryption and 0 for decryption...");
	scanf("%d",&choice);
	if(choice==1){
		encrypt();
	}
	else if(choice==0){
		decrypt();
	}
	else{
		printf("Invalid choice");
	}

	
	
}
void encrypt(){
	char fname[20], ch;
	FILE *fpts, *fptt;
	printf("\n\n Encrypt a text file :\n");
	printf("--------------------------\n"); 	
	
	printf(" Input the name of file to encrypt : ");
	scanf("%s",fname);	

	fpts=fopen(fname, "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(1);
	}
	fptt=fopen("temp.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp.txt ..!!");
		fclose(fpts);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fpts);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch+100;
			fputc(ch, fptt);
		}
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen(fname, "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(3);
	}
	fptt=fopen("temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		exit(4);
	}
	while(1)
	{
		ch=fgetc(fptt);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fpts);
		}
	}
	printf(" File %s successfully encrypted ..!!\n\n", fname);
	fclose(fpts);
	fclose(fptt);
}
void decrypt(){
	char ch, fname[20];
	FILE *fpts, *fptt;
	
	printf("\n\n Decrypt a text file :\n");
	printf("--------------------------\n"); 	
	
	printf(" Input the name of file to decrypt : ");
	scanf("%s",fname);	
	
	fpts=fopen(fname, "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(7);
	}
	fptt=fopen("temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		exit(9);
	}
	while(1)
	{
		ch=fgetc(fptt);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch-100;
			fputc(ch, fpts);
		}
	}
	printf(" The file %s decrypted successfully..!!\n\n",fname);
	fclose(fpts);
	fclose(fptt);

}
