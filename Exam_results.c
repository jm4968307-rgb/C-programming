#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file or file not found.\n");
        return 1;
    }

    printf("STUDENT RESULTS:\n");
    printf("-----------------------------\n");

    // Read all student records until end of file
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n", s.marks);
        printf("-----------------------------\n");
    }

    fclose(fp);
    return 0;
}