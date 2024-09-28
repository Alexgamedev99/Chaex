#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit *readNumber(void);
struct digit *createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);

//add your prototype(s) here
struct digit* reverseNumber(struct digit* start);
int main(void) {
    struct digit *start, *backwards;
    start = readNumber();
    backwards = reverseNumber(start);
    printf("The reverse of ");
    printNumber(start);
    printf("is ");
    printNumber(backwards);
        
    freeNumber(start);
    freeNumber(backwards);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

//add your reverseNumber() function here
struct digit* reverseNumber(struct digit* start) {
    struct digit* reversedHead = NULL; // New list for reversed digits
    struct digit* current = start; // Start from the head of the original list

    // Traverse the original list
    while (current != NULL) {
        // Insert the current digit at the beginning of the new list
        struct digit* newNode = createDigit(current->num);
        newNode->next = reversedHead; // Point new node to the current head of reversed list
        reversedHead = newNode; // Update the head of the reversed list
        current = current->next; // Move to the next node in the original list
    }

    return reversedHead; // Return the head of the reversed linked list
}