#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *p, *tmp, *tmpl;

void insert_end(int);
void insert_beg(int);
void ldelete(int);
void display();

void main() {
    int val, n;
    p = NULL;
    
    do {
        printf("\n************************* MENU *************************\n");
        printf("\n1. INSERT AT END");
        printf("\n2. INSERT AT BEG");
        printf("\n3. DELETE FROM BEG");
        printf("\n4. DELETE FROM END");
        printf("\n5. DISPLAY");
        printf("\n6. EXIT");
        printf("\n Enter your choice: ");
        scanf("%d", &n);
        
       switch(n) {
    case 1: 
        printf("\n Enter the value ");
        scanf("%d", &val);
        insert_end(val);
        break;

    case 2: 
        printf("\n Enter the value ");
        scanf("%d", &val);
        insert_beg(val);
        break;

    case 4: 
        delete_beg();
        break;

    case 5: 
        delete_end();
        break;

    case 6: 
        display();
        break;

    case 7: 
        exit(0);
        break;

    default: 
        printf("\n Wrong Choice!");
        break;
}
printf("\nDo u want to continue?...");
    } while ('y'==getch());
}
    
