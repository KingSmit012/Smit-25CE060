#include <stdio.h>
#include <string.h>

union Book {
    int accession_no;
    char title[100];
    char author[100];
    float price;
    int issued_flag;
};

int main() {
    union Book book;

    int accession_no, issued_flag;
    char title[100], author[100];
    float price;

    printf("Enter book details:\n");

    printf("Accession Number: ");
    scanf("%d", &accession_no);

    printf("Title: ");
    getchar();
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    printf("Author Name: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0';

    printf("Price: ");
    scanf("%f", &price);

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &issued_flag);

    printf("\n--- Book Details ---\n");

    book.accession_no = accession_no;
    printf("Accession Number: %d\n", book.accession_no);

    strcpy(book.title, title);
    printf("Title: %s\n", book.title);

    strcpy(book.author, author);
    printf("Author: %s\n", book.author);

    book.price = price;
    printf("Price: %.2f /- \n", book.price);

    book.issued_flag = issued_flag;
    if (book.issued_flag == 1)
        printf("Status: Issued\n");
    else
        printf("Status: Available\n");

    return 0;
}
