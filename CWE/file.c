#include <stdio.h>
#include <stdlib.h>

int main() {
    // TODO: Open the input file for reading
    FILE *fin= fopen("input.txt", "r");
    // TODO: Open the output file for writing
    FILE *fout = fopen("output.txt", "w");
    // TODO: Read data from the input file, compute averages, and write to the output file
    int num;
    int sum = 0;
    double avg = 0;
    int count = 0;
    while(fscanf(fin, "%d", &num) == 1){
        sum += num;
        count++;
    }
    if(count > 0){
        avg = sum / count;
    }
    fprintf(fout, "Average: %lf \n", avg);
    // TODO: Close the files
    fclose(fin);
    fclose(fout);
    printf("Averages calculated and written to output.txt\n");

    return 0;
}