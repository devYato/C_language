#include <stdio.h>

FILE *openFile(const char *fileName) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error during file open %s\n", fileName);
        return NULL;
    }
    return file;
}

void closeFile(FILE *file) {
    if (file != NULL) {
        fclose(file);
    }
}

int main() {
    FILE *file = openFile("example.txt");
    if (file != NULL) {
        // Perform file operations here
        // For example, read from the file or write to it
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            printf("%s", buffer);
        }
        
        closeFile(file);
    }
    return 0;
}
// This code defines functions to open and close a file, handling errors if the file cannot be opened.