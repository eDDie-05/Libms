
/*
    Library Management System in C

    Features:
    - Add Books
    - Display Books
    - Search Books
    - Issue Books
    - Return Books
    - Save Records to File
    - Load Records from File

    Concepts Used:
    - Structures
    - File Handling
    - Arrays
    - Functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

// Structure for Book
struct Book {
    int id;
    char title[50];
    char author[50];
    int issued; // 0 = Available, 1 = Issued
};

// Global array
struct Book books[MAX_BOOKS];
int count = 0;

// Function declarations
void loadBooks();
void saveBooks();
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();

int main() {
    int choice;

    // Load books from file
    loadBooks();

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Save Records\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                saveBooks();
                break;

            case 7:
                saveBooks();
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Load books from file
void loadBooks() {
    FILE *file = fopen("library.txt", "r");

    if (file == NULL) {
        return;
    }

    while (fscanf(file, "%d %s %s %d",
                  &books[count].id,
                  books[count].title,
                  books[count].author,
                  &books[count].issued) != EOF) {

        count++;
    }

    fclose(file);
}

// Save books to file
void saveBooks() {
    FILE *file = fopen("library.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %s %d\n",
                books[i].id,
                books[i].title,
                books[i].author,
                books[i].issued);
    }

    fclose(file);

    printf("Records saved successfully!\n");
}

// Add a new book
void addBook() {

    if (count >= MAX_BOOKS) {
        printf("Library is full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Title: ");
    scanf("%s", books[count].title);

    printf("Enter Author Name: ");
    scanf("%s", books[count].author);

    books[count].issued = 0;

    count++;

    printf("Book added successfully!\n");
}

// Display all books
void displayBooks() {

    if (count == 0) {
        printf("No books available!\n");
        return;
    }

    printf("\n===== Book List =====\n");

    for (int i = 0; i < count; i++) {

        printf("Book ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);

        if (books[i].issued == 0)
            printf("Status: Available\n");
        else
            printf("Status: Issued\n");

        printf("------------------------\n");
    }
}

// Search for a book by ID
void searchBook() {

    int id;
    int found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {

        if (books[i].id == id) {

            printf("\nBook Found!\n");
            printf("Book ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);

            if (books[i].issued == 0)
                printf("Status: Available\n");
            else
                printf("Status: Issued\n");

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found!\n");
    }
}

// Issue a book
void issueBook() {

    int id;
    int found = 0;

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {

        if (books[i].id == id) {

            if (books[i].issued == 1) {
                printf("Book is already issued!\n");
            } else {
                books[i].issued = 1;
                printf("Book issued successfully!\n");
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found!\n");
    }
}

// Return a book
void returnBook() {

    int id;
    int found = 0;

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {

        if (books[i].id == id) {

            if (books[i].issued == 0) {
                printf("Book is already available!\n");
            } else {
                books[i].issued = 0;
                printf("Book returned successfully!\n");
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found!\n");
    }
}