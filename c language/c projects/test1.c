#include<stdio.h>

struct Item{
	
	int bookNo, student, bookCount;
	float bookPrices, allPrices;
		
}book1, book2, book3;

int main()
{
	printf("Enter the book no: ");
	scanf("%d", &book1.bookNo);
	printf("Enter the number of students: ");
	scanf("%d", &book1.student);
	printf("Enter the book count: ");
	scanf("%d", &book1.bookCount);
	printf("Enter the book price in rupees: ");
	scanf("%f", &book1.bookPrices);
	book1.allPrices = book1.bookCount * book1.bookPrices;
	
	
	printf("\nEnter the book no: ");
	scanf("%d", &book2.bookNo);
	printf("Enter the number of students: ");
	scanf("%d", &book2.student);
	printf("Enter the book count: ");
	scanf("%d", &book2.bookCount);
	printf("Enter the book price in rupees: ");
	scanf("%f", &book2.bookPrices);
	book2.allPrices = book2.bookCount * book2.bookPrices;
	
	printf("\nEnter the book no: ");
	scanf("%d", &book3.bookNo);
	printf("Enter the number of students: ");
	scanf("%d", &book3.student);
	printf("Enter the book count: ");
	scanf("%d", &book3.bookCount);
	printf("Enter the book price in rupees: ");
	scanf("%f", &book3.bookPrices);
	book3.allPrices = book3.bookCount * book3.bookPrices;
	
	printf("Book No\t\tStudent\t\tBook Count\t\Book price\t\tAll Price\n");
	printf("%d%16d%18d%20.2f%25.2f\n", book1.bookNo, book1.student, book1.bookCount, book1.bookPrices, book1.allPrices);
	printf("%d%16d%18d%20.2f%25.2f\n", book2.bookNo, book2.student, book2.bookCount, book2.bookPrices, book2.allPrices);
	printf("%d%16d%18d%20.2f%25.2f", book3.bookNo, book3.student, book3.bookCount, book3.bookPrices, book3.allPrices);
	
	return 0;
			
}
