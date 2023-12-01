#include <stdio.h>

int main() {
    FILE *file;
    char registration[11];
    char name[20];
    int dosages;
    int oneDosageCount = 0;
    int twoDosagesCount = 0;

    file = fopen("vcard.dat", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Student Details:\n");

    while (fscanf(file, "%s %s %d", registration, name, &dosages) == 3) {
        printf("Registration: %s, Name: %s, Dosages: %d\n", registration, name, dosages);
        
        if (dosages == 1) {
            oneDosageCount++;
        } else if (dosages == 2) {
            twoDosagesCount++;
        }
    }

    fclose(file);

    printf("\nNumber of students with one dosage: %d\n", oneDosageCount);
    printf("Number of students with two dosages: %d\n", twoDosagesCount);

    return 0;
}
