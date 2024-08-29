#include <stdio.h>
#include <string.h>

int main() {
    char id[8], p[6], file_id[8], file_pass[6];
    int n = 1, found = 0;
    FILE *file;

    do {
        printf("\nStudent_ID: ");
        scanf("%s", id);

        printf("\nPassword: ");
        scanf("%s", p);

        // Open the file
        file = fopen("user.txt", "r");
        if (file == NULL) {
            printf("Error opening file!\n");
            return 1;
        }

        // Read each line from the file and compare
        while (fscanf(file, "%s %s", file_id, file_pass) != EOF) {
            if (strcmp(id, file_id) == 0 && strcmp(p, file_pass) == 0) {
                found = 1;
                break;
            }
        }

        fclose(file);  // Close the file

        if (found) {
            printf("\nSuccessfully Logged In\n");
            break;  // Exit the loop since login was successful
        } else {
            printf("\nWrong ID or Password, try again (%d attempts left)\n", 5 - n);
            n++;
        }

        if (n > 5) {
            printf("\nAccess Denied\n");
            return 1;  // Exit the program after 5 failed attempts
        }

    } while (n <= 5);

    return 0;
}
