#include<stdio.h>

const int a[] = {2, 5, 8, 4};
const int b[] = {5, 9, 0, -3};

int scaler_product(const int *a, const int *b, size_t count){
	size_t i;
	int scaler_product = 0;
	for(i = 0; i < count; i++){
		scaler_product += a[i] * b[i];
	}

	return scaler_product;
}

int main(){
	size_t count = sizeof(a) / sizeof(a[0]);
	printf("The scaler product is: %d", scaler_product(a, b, count));
}