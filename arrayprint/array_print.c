#include <stdio.h>

void array_print(int* A, int size);

void main() 
{
	int a[10];
	for(int i=0;i<10;i++)
	scanf_s("%d", &a[i]);
	array_print(&a, 10);

}

void array_print(int* A, int size) 
{
	int i;
	printf("A[%d]={\n\t",size);
	for (i = 0;i < size;i++) {
		printf("%d", A[i]);
		if (i != size - 1)printf(",");
		//A[i] = i + 1;
	}
	printf("\n\t}");
}

