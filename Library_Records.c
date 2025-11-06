#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char title[100];
    
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title (type 'exit' to stop):\n");

    while (1) {
        printf("Book Title: ");
        fgets(title, sizeof(title), stdin);

        
        if (strncmp(title, "exit", 4) == 0)
            break;

        
        fputs(title, fp);
        printf("Book title successfully stored!\n");
    }

    fclose(fp);
    printf("All entries have been saved in borrowed_books.txt\n");
    return 0;
}