#include <stdio.h>

int main() {
    FILE *file = fopen("binaryfile.bin", "wb");

    int numbers[] = {1, 2, 3, 4, 5};
    fwrite(numbers, sizeof(int), 5, file);

    fclose(file);

    return 0;
}