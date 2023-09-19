#include <stdio.h>
#include <string.h>
#define MAX_VICTIMS 10

struct Victim {
    char name[50],country[50];
    int age;
};

int size = 0; // Current number of victims
void displayIntegerAges(struct Victim victims[]) {
    int integerCount = 0;
    printf("Victims with integer ages:\n");
    for (int i = 0; i < size; i++) {
        if (victims[i].age == (int)victims[i].age) {
            printf("Name: %s\n", victims[i].name);
            printf("Age: %d\n", victims[i].age);
            printf("Country: %s\n", victims[i].country);
            printf("\n");
            integerCount++;
        }
    }

    if (integerCount == 0) {
        printf("No victims with integer ages found.\n");
    }
}

// Function to display the menu
void displayMenu() {
    printf("======================================\n");
    printf("           Menu d'application        \n");
    printf("======================================\n");
    printf("[1] Afficher les donees\n");
    printf("[2] Ajouter une donnee\n");
    printf("[3] Rechercher une donnee\n");
    printf("[4] Supprimer une donnee\n");
    printf("[5] Supprimer les données en double\n");
    printf("[6] Generer le wordlist\n");
    printf("[7] Générer le wordlist dans un fichier .txt (bonus)\n");
    printf("[8] Afficher les donnees de type entier (bonus)\n");
    printf("======================================\n");
    printf("Tapez votre choix (1-8): ");
}

// Function to add a victim
void addVictim(struct Victim victims[], const char *name, int age, const char *country) {
    if (size < MAX_VICTIMS) {
        strcpy(victims[size].name, name);
        victims[size].age = age;
        strcpy(victims[size].country, country);
        size++;
        printf("Victim added successfully!\n");
    } else {
        printf("The list is full, cannot add more victims.\n");
    }
}

// Function to check if two victims are duplicates
int areVictimsDuplicate(struct Victim v1, struct Victim v2) {
    return (strcmp(v1.name, v2.name) == 0 &&
            v1.age == v2.age &&
            strcmp(v1.country, v2.country) == 0);
}

// Function to delete a victim by name
void deleteVictimByName(struct Victim victims[], const char *name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(victims[i].name, name) == 0) {
            for (int j = i; j < size - 1; j++) {
                victims[j] = victims[j + 1];
            }
            size--;
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Victim with the name '%s' deleted successfully.\n", name);
    } else {
        printf("No victim found with the name '%s'. Deletion failed.\n", name);
    }
}

// Function to delete duplicate victims
void deleteDuplicateVictims(struct Victim victims[]) {
    int newSize = size;
    for (int i = 0; i < newSize - 1; i++) {
        for (int j = i + 1; j < newSize;) {
            if (areVictimsDuplicate(victims[i], victims[j])) {
                for (int k = j; k < newSize - 1; k++) {
                    victims[k] = victims[k + 1];
                }
                newSize--;
            } else {
                j++;
            }
        }
    }

    size = newSize;
}

int main() {
    char name[50], country[50],searchName[50],victimNameToDelete[50];
    int numWords, age,choice;
    struct Victim victims[MAX_VICTIMS];
    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size == 0) {
                    printf("No victims to display.\n");
                } else {
                    printf("          List of victims:\n");
                    for (int i = 0; i < size; i++) {
                        printf("       Name: %s\n", victims[i].name);
                        printf("       Age: %d\n", victims[i].age);
                        printf("       Country: %s\n", victims[i].country);
                        printf("\n");
                    }
                }
                break;

            case 2:

                printf("Enter the name of the victim: ");
                scanf("%s", name);
                printf("Enter the age of the victim: ");
                scanf("%d", &age);
                printf("Enter the country of the victim: ");
                scanf("%s", country);
                addVictim(victims, name, age, country);
                break;

            case 3:
                printf("Enter the name to search for: ");
                scanf("%s", searchName);
                int found = 0;
                for (int i = 0; i < size; i++) {
                    if (strcmp(victims[i].name, searchName) == 0) {
                        printf("Victim found:\n");
                        printf("Name: %s\n", victims[i].name);
                        printf("Age: %d\n", victims[i].age);
                        printf("Country: %s\n", victims[i].country);
                        printf("\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("No victim found with the name: %s\n", searchName);
                }
                break;

            case 4:

                printf("Enter the name of the victim to delete: ");
                scanf("%s", victimNameToDelete);
                deleteVictimByName(victims, victimNameToDelete);
                break;

            case 5:
                deleteDuplicateVictims(victims);
                printf("Duplicate victims have been removed.\n");
                break;

            case 6:

                printf("Enter the number of words/names for the wordlist: ");
                scanf("%d", &numWords);
                if (numWords > 0) {
                    printf("Enter %d words/names:\n", numWords);
                    for (int i = 0; i < numWords; i++) {
                        printf("Word/name %d: ", i + 1);
                        scanf("%s", name);
                        printf("%s@gmail.com\n", name);
                    }
                } else {
                    printf("Invalid number of words/names. Please enter a positive number.\n");
                }
                break;

            case 7:
                if (size > 0) {
                    char filename[100];
                    printf("Enter the name of the output file (e.g., wordlist.txt): ");
                    scanf("%s", filename);
                    FILE *file = fopen(filename, "w");
                    if (file == NULL) {
                        printf("Unable to open the file for writing.\n");
                    } else {
                        printf("Enter %d words/names:\n", size);
                        for (int i = 0; i < size; i++) {
                            fprintf(file, "%s@gmail.com\n", victims[i].name);
                        }
                        fclose(file);
                        printf("Wordlist has been saved to %s.\n", filename);
                    }
                } else {
                    printf("No victims to generate a wordlist from.\n");
                }
                break;

            case 8:
                displayIntegerAges(victims);
                break;

            default:
                printf("Choix invalide. Veuillez choisir une option valide entre (1-8).\n");
                break;
        }
    } while (choice != 8);

    return 0;
}
