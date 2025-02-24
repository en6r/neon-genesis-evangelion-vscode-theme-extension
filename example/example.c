#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Single-line comment for testing

/*
 * Multi-line comment for theme testing
 */

#define MAX_SIZE 100

typedef struct {
    int id;
    char name[50];
} Item;

void display_item(const Item *item) {
    printf("ID: %d, Name: %s\n", item->id, item->name);
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b); // Testing pointer arithmetic and casting
}

int main() {
    printf("Testing VSCode Theme for C\n");

    Item item = {1, "VSCode Theme"};
    display_item(&item);

    int numbers[] = {5, 3, 8, 1};
    size_t n = sizeof(numbers) / sizeof(numbers[0]);

    qsort(numbers, n, sizeof(int), compare);

    for (size_t i = 0; i < n; ++i) {
        printf("Number: %d\n", numbers[i]);
    }

    char *dynamic_string = (char *)malloc(MAX_SIZE * sizeof(char));
    if (dynamic_string == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    strcpy(dynamic_string, "Dynamic memory test");
    printf("%s\n", dynamic_string);
    free(dynamic_string);

    return 0;
}
