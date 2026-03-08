#include <stdio.h>
#include <stdlib.h>

struct Books
{
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books *CBook);

int main()
{

    printf("Enter Book ID :");
    scanf("%d", &ComputerBook.BookID);

    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);

    DisplayData(&ComputerBook);

    return 0;
}

void DisplayData(struct Books *CBook)
{

    printf("Book ID : %d \n", (*CBook).BookID);
    printf("Book Title : %s \n", CBook->BookTitle);
}

//(*CBook).BookID คือ การเข้าถึงตัวแปร BookID ที่อยู่ข้างใน Struct โดยผ่านตัวแปร Pointer ที่ชื่อว่า CBook
//CBook->BookTitle คือ วิธีเขียนแบบ ย่อ(Shorthand) ของ(*CBook).BookTitle "ชี้ไปดึงตัวแปร BookTitle ออกมาจาก Struct"
