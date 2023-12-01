#include <stdio.h>
#include <string.h>

	struct book{
		
		char max;
		int i, j, noOfCopies, noOfReaders;
		char bookName[50];
		char bookID[50];
		
	}book[3][4];
	
	int main(){
		struct book books[3][4];
		
		int h, i, j;
		char max;
		int maxReaders =0;
		
		for(i=0; i<3; i++){
			printf("Book %d\n", i+1);
			
			for(j=0; j<4; j++){
				if(j==0){
					printf("Book ID: ");
					scanf("%s", &books[i][j].bookID);
				}
				else if(j==1){
					printf("Book name: ");
					scanf("%s", &books[i][j].bookName);
				}
				else if(j==2){
					printf("No of copies: ");
					scanf("%d", &books[i][j].noOfCopies);
				}
				else if(j==3){
					printf("No of readers: ");
					scanf("%d", &books[i][j].noOfReaders);
				}
				
				if(maxReaders < books[i][3].noOfReaders){
					maxReaders = books[i][j].noOfReaders;
					strcpy(max, books[i][1].bookName);
				}
				
			}
			printf("\n");
		}
		
				
		
		printf("The most popular book is %s\n", max);
	return 0;
}
//#include <stdio.h>
//
//struct book {
//    int noOfCopies, noOfReaders;
//    char bookName[50];
//    char bookID[50];
//};
//
//int main() {
//    struct book books[3][4]; // Define a 2D array of 'book' structures
//
//    int i, j;
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 4; j++) {
//            if (j == 0) {
//                printf("Book ID: ");
//                scanf("%s", books[i][j].bookID);
//            } else if (j == 1) {
//                printf("Book name: ");
//                scanf("%s", books[i][j].bookName);
//            } else if (j == 2) {
//                printf("No of copies: ");
//                scanf("%d", &books[i][j].noOfCopies);
//            } else if (j == 3) {
//                printf("No of readers: ");
//                scanf("%d", &books[i][j].noOfReaders);
//            }
//        }
//    }
//
//    return 0;
//}
