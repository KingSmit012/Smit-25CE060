#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 50

// Sub-structure for Coach
struct Coach {
    char name[50];
    int age;
    int experience;
};

// Main structure for Team (includes nested structure)
struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

// Function prototypes
void addTeam(struct Team teams[], int *count);
void searchTeam(struct Team teams[], int count);
void displayTeams(struct Team teams[], int count);

int main() {
    struct Team teams[MAX_TEAMS];
    int count = 0;
    int choice = 0;

    while (choice != 4) {
        printf("\n=== CHARUSAT Sports Team Management ===\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        if (choice == 1) {
            addTeam(teams, &count);
        }
        else if (choice == 2) {
            searchTeam(teams, count);
        }
        else if (choice == 3) {
            displayTeams(teams, count);
        }
        else if (choice == 4) {
            printf("Exiting program. Goodbye!\n");
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to add a new team
void addTeam(struct Team teams[], int *count) {
    if (*count >= MAX_TEAMS) {
        printf("Cannot add more teams! Maximum limit reached.\n");
        return;
    }

    struct Team newTeam;

    printf("Enter Team Name: ");
    fgets(newTeam.teamName, sizeof(newTeam.teamName), stdin);
    newTeam.teamName[strcspn(newTeam.teamName, "\n")] = '\0';

    // Check for duplicate
    for (int i = 0; i < *count; i++) {
        if (strcmp(teams[i].teamName, newTeam.teamName) == 0) {
            printf("Team already exists! Duplicate not allowed.\n");
            return;
        }
    }

    printf("Enter Sport Type: ");
    fgets(newTeam.sportType, sizeof(newTeam.sportType), stdin);
    newTeam.sportType[strcspn(newTeam.sportType, "\n")] = '\0';

    printf("Enter Coach Name: ");
    fgets(newTeam.coach.name, sizeof(newTeam.coach.name), stdin);
    newTeam.coach.name[strcspn(newTeam.coach.name, "\n")] = '\0';

    printf("Enter Coach Age: ");
    scanf("%d", &newTeam.coach.age);
    printf("Enter Coach Experience (in years): ");
    scanf("%d", &newTeam.coach.experience);
    getchar(); // clear buffer

    teams[*count] = newTeam;
    (*count)++;

    printf("Team added successfully!\n");
}

// Function to search for a team
void searchTeam(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams available to search.\n");
        return;
    }

    char keyword[50];
    printf("Enter Team Name or Sport Type to search: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(teams[i].teamName, keyword) == 0 || strcmp(teams[i].sportType, keyword) == 0) {
            printf("\n--- Team Found ---\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Experience: %d years\n", teams[i].coach.experience);
            found = 1;
        }
    }

    if (!found)
        printf("No team found with the given name or sport.\n");
}

// Function to display all teams
void displayTeams(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams to display.\n");
        return;
    }

    printf("\n--- List of All Teams ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Experience: %d years\n", teams[i].coach.experience);
    }
}
