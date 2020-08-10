// Initialize and display the member of the structure

#include<stdio.h>

int main(){
	int i;
	struct student{
		int rollNo;
		char name[30];
		char dept[30];
		char sex;
		float height, weight;
	};

	struct student data[3] = {
		{121, "Ravi", "Mech", 'm', 5.7, 68.8},
		{122, "vinod", "Elec", 'm', 6.0, 70.2},
		{123, "Sheela", "comp", 'f', 5.2, 55.5},
	};

	printf("The initialized contents are :\n");
	for(i=0; i <= 2; ++i){
		printf("\n ** RECORD NO. %d**\n", i+1);
		printf("%d\n", data[i].rollNo);
		printf("%s\n", data[i].name);
		printf("%s\n", data[i].dept);
		printf("%c\n", data[i].sex);
		printf("%f\n", data[i].height);
		printf("%f\n", data[i].weight);
	}
}


