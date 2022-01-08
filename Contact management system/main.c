#include <stdio.h>
#include <stdlib.h>

void addContact();
void viewContact();
void Help();
char fname[10];
char lname[10];
char phone_number[10];



int main() 
{
	int choice;
	printf("\n\n\t---------------Contact Management System---------------");
	printf("\n\t[1] Add Contact");
	printf("\n\t[2] View Contact");
	printf("\n\t[3] Help");
	printf("\n\t[4] Exist");
	printf("\n\tEnter your Choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1: 
			addContact();
			break;
		case 2:
			viewContact();
			break;
		case 3:
			Help();
			break;
		case 4:
			exit(1);
			break;
		default:
			printf("Enter correct choice !");
			main();
	}
}

void addContact(){
	system("cls");
	printf("\t Enter First Name: ");
	scanf("%s",fname);
	printf("\t Enter Last Name: ");
	scanf("%s",lname);
	printf("\t Enter First Name: ");
	scanf("%s",phone_number);
	if(strlen(phone_number)==10)
	{
		FILE *fp;
		fp=fopen("contact.txt","w");
		fputs(fname,fp);
		fputs(lname,fp);
		fputs(phone_number,fp);
		printf("\n\t Contact Added Successfully!");
		fclose(fp);
	}
	else{
		printf("\t Enter 10 Digit Phone Number Only!");
		
	}
	main();
}

void viewContact(){
	system("cls");
	char rfname[10];
	char rlname[20];
	char rphone_number[20];
	FILE *fp;
	fp=fopen("contact.txt", "r");
	fgets(rfname,9,fp);
	fgets(rlname,5,fp);
	fgets(rphone_number,11,fp);
	printf("\n\t---------------List Contact---------------");
	printf("\n\t First Name: %s",rfname);
	printf("\n\t Last Name : %s",rlname);
	printf("\n\t Phone Number : &s",rphone_number);
	main();
	
}


void Help()
{
	printf("\n\t This is your CMA");
	main();
	
	
}



