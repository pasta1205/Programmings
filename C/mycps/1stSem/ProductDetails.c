#include <stdio.h>
#include <string.h>
struct PRODUCT 
{
	char Pname[50];
	int PId;
	float price;
};

int main() 
{
	struct PRODUCT products[3]; 
	struct PRODUCT *ptr;
	int i;

	for (i = 0; i < 3; i++) 
	{
		printf("Enter details of product %d:\n", i + 1);
		printf("Enter Product Name: ");
		scanf(" %[^\n]", products[i].Pname);
		printf("Enter Product ID: ");
		scanf("%d", &products[i].PId);
		printf("Enter Product Price: ");
		scanf("%f", &products[i].price);
		printf("\n");
	}

	ptr = products;
	printf("Details of the products:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("Product %d:\n", i + 1);
		printf("Name: %s\n", (ptr + i)->Pname);
		printf("ID: %d\n", (ptr + i)->PId);
		printf("Price: %.2f\n\n", (ptr + i)->price);
	}
	return 0;
}
