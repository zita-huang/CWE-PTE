#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void input_values(int *arr, int size);
int calculate_sum(int *arr, int size);
double calculate_average(int *arr, int size);
int find_minimum(int *arr, int size);
int find_maximum(int *arr, int size);
int* resize_array(int *arr, int old_size, int new_size);

int main() {
    // TODO: Ask the user for a size to make the array
    int size;
    printf("Size of array: ");
    scanf("%d", &size);
    // TODO: Allocate memory for the integer array
    int *arr = malloc(size * sizeof(int));
    // TODO: Input values into the array
    printf("Input values into the array of size %d: \n", size);
    input_values(arr, size);
    // TODO: Perform each arithmetic operation and print to stdout
    calculate_sum(arr, size);
    calculate_average(arr, size);
    find_maximum(arr, size);
    find_minimum(arr, size);
    // TODO: Resize the array
    int new_size;
    printf("New size of the array: ");
    scanf("%d", &new_size);
    // TODO: Input values into the resized array if it is larger
    int old_size = size;
    printf("Input new values into %d array: \n", new_size);
    resize_array(arr, old_size, new_size);
    // TODO: Perform arithmetic operations again on the resized array
    size = new_size;
    calculate_sum(arr, size);
    calculate_average(arr, size);
    find_maximum(arr, size);
    find_minimum(arr, size);
    // TODO: Free allocated memory
    free(arr);
    return 0;
}

void input_values(int *arr, int size) {
    // TODO: 
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

int calculate_sum(int *arr, int size) {
    // TODO: calculate the sum of all the integers in the array
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("Sum: %d \n", sum);
    return 0;
}

double calculate_average(int *arr, int size) {
    // TODO: calculate the average of the integers in the array
    double avg = 0;
    double add = 0;
    for(int i = 0; i < size; i++){
        add += arr[i];
        avg = (add) / size;
    }
    printf("Average: %lf \n", avg);
    return 0.0;
}

int find_minimum(int *arr, int size) {
    // TODO: find the min value in the array
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum: %d \n", min);
    return 0;
}

int find_maximum(int *arr, int size) {
    // TODO: find the max value in the array
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum: %d \n", max);
    return 0;
}

int* resize_array(int *arr, int old_size, int new_size) {
    // TODO: resize the array with the new size and return the new array pointer
    arr = realloc(arr, new_size * sizeof(int));
    if(new_size > old_size){
        for(int i = new_size - old_size; i < new_size; i++){
            scanf("%d", &arr[i]);
        }
    }
    return NULL;
}
