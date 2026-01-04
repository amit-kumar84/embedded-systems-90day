#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("===== POINTERS AND ARRAYS =====\n");

    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    printf("==== ARRAY NAME AS POINTER ====\n");
    printf("Array name 'arr' points to address: %p\n", (void *)arr);
    printf("Pointer 'ptr' points to address: %p\n", (void *)ptr);
    printf("Both should be the same since 'arr' is the address of the first element.\n\n");

    printf("==== ACCESS ARRAY USING POINTER ====\n");
    printf("Using indexing: arr = %d\n", arr);
    printf("Useing pointer: ptr = %d\n", ptr);
    printf("Using dereference: *ptr = %d\n\n", *ptr);

    printf("==== POINTER ARITHMETIC ====\n");
    printf("ptr points to: %p (value = %d)\n", (void *)ptr, *ptr);
    ptr++; // Move to next element
    printf("After ptr++: %p (value = %d)\n", (void *)ptr, *ptr);
    ptr++; // Move to next element
    printf("After ptr++: %p (value = %d)\n", (void *)ptr, *ptr);
    ptr--; // Move back to previous element
    printf("After ptr--: %p (value = %d)\n\n", (void *)ptr, *ptr);

    printf("==== ACCESSING WITH OFFSETS ====\n");
    ptr = arr; // Reset pointer to start of array
    printf("*(ptr + 0) = %d\n", *(ptr + 0)); // First element
    printf("*(ptr + 1) = %d\n", *(ptr + 1)); // Second element
    printf("*(ptr + 2) = %d\n", *(ptr + 2)); // Third element
    printf("*(ptr + 3) = %d\n", *(ptr + 3)); // Fourth element
    printf("*(ptr + 4) = %d\n\n", *(ptr + 4)); // Fifth element

    printf("==== TRAVERSING ARRAY WITH POINTER ====\n");
    printf("Using pointer arithmetic:\n");
    ptr = arr; // Reset pointer to start of array
    for (int i = 0; i < 5; i++) {
        printf("arr [%d]: %d (address: %p)\n", i, *ptr, (void *)ptr);
        ptr++;
    }
    
}