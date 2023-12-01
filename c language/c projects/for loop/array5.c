//#include <stdio.h>
//int main(){
//	int num, i, element[50], j, count= 0, nm;
//	
//	printf("Input the number of elements to be stored in the array: ");
//	scanf("%d", &num);
//	
//	printf("Input %d elements in the array:\n", num);
//	
//	for(i=0; i<num; i++){
//		printf("Element - %d: ", i);
//		scanf("%d", &element[i]);		
//	}
//	for(j=0; j<num; j++){
//		for(i=0;i<j;i++){
//		
//			if(element[i] == element[j]){
//				nm = element[i];
//				count = count + 1;
//				break;	
//			}
//		}
//	}
//	printf("%d\n", count);
//	printf("%d\n", nm);
//	
//	return 0;
//}

#include <stdio.h>
int main() {
    int num, i, element[50], j, count = 0;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &num);
    
    printf("Input %d elements in the array:\n", num);
    
    for (i = 0; i < num; i++) {
        printf("Element - %d: ", i);
        scanf("%d", &element[i]);
    }
    
    // Loop through the array to find duplicate elements
    for (i = 0; i < num; i++) {
        for (j = i + 1; j < num; j++) {
            if (element[i] == element[j]) {
                count++;
                break; // Break the inner loop after finding a duplicate
            }
        }
    }
    
    printf("Total number of duplicate elements found in the array: %d\n", count);
    
    return 0;
}
