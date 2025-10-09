
#include <stdio.h>

int main()
 {
 //variable declaration 
    char password[6];  
    int attempt = 0;

    printf("Enter password \n");
    scanf("%s", password);

    do {
        if (strcmp(password, "1234") == 0) {
            printf("Access Granted\n");
            break;
        } else {
            printf("Incorrect password.Try again: ");
            scanf("%s", password);
            attempt++;
        }
    } while (attempt < 3); 

    return 0;
}