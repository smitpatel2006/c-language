// 2. Create a structure book with book title, author, publication, and price. Read the data of 3 books and display.
#include<stdio.h>
struct book
{
    char tital[20];
    char auther[20];
    char publi[20];
    int price;
};

void main()
{
    struct book b[3];
    for(int i=0;i<3;i++){
    printf("Enter a book tital");
    scanf("%s",b[i].tital);
    printf("Enter a book auther");
    scanf("%s", b[i].auther);
    printf("Enter a book tital");
    scanf("%s", b[i].publi);
    printf("Enter a book price");
    scanf("%d", b[i].price);
    }
    for (int i = 0; i < 3; i++){
        printf("Book name %s", b[i].tital);
        printf("Book auther %s", b[i].tital);
        printf("Book punli %s", b[i].tital);
        printf("Book price %d", b[i].tital);
    }
}
