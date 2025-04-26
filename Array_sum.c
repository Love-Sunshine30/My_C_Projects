#include<stdio.h>
const int array[] = {3, 5, 9, 3, 9, 6};

int array_sum(const int *array, size_t count){
	int i;
	int sum = 0;
	for(i = 0; i < count; i++){
		sum += array[i];
	}
	return sum;
}
int main(){
	size_t count = sizeof(array) / sizeof(array[0]);

	printf("The sum is: %d", array_sum(array, count)
		);

	return 0;
	
}