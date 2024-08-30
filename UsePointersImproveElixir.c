#include <stdio.h>

//Write your function prototype here
void DetermineAge(int**);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	DetermineAge(&ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void DetermineAge(int** a){
    if(**a >= 21){
        **a-=10;
    }
    else{
        **a*=2;
    }
}

/*
#include <stdio.h>

void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixir(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


void elixir(int *age){
	if (*age>20){
		*age -= 10;
	} else {
		*age *= 2;
	}
}
*/