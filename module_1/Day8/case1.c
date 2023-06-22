#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define BUFFER_SIZE 4096
void upper(char* buffer) {
    for (int i = 0; buffer[i] != '\0'; i++) {
        buffer[i] = toupper(buffer[i]);
    }
}
void lower(char* buffer) {
    for (int i = 0; buffer[i] != '\0'; i++) {
        buffer[i] = tolower(buffer[i]);
    }
}
void sentence(char* buffer) {
    int capitalizeNext = 1;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (isspace(buffer[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            buffer[i] = toupper(buffer[i]);
            capitalizeNext = 0;
        } else {
            buffer[i] = tolower(buffer[i]);
        }
    }
}
int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }
    char* option = argv[1];
    char* spath = argv[2];
    char* dpath = argv[3];
    FILE* sfile = fopen(spath, "r");
    if (sfile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    FILE* dfile = fopen(dpath, "w");
    if (dfile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sfile);
        return 1;
    }
    char buffer[BUFFER_SIZE];
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE,sfile)) > 0) {
        if (strcmp(option, "-u") == 0) {
            upper(buffer);
        } else if (strcmp(option, "-l") == 0) {
            lower(buffer);
        } else if (strcmp(option, "-s") == 0) {
            sentence(buffer);
        }

        fwrite(buffer, 1, bytesRead,dfile);
    }
    printf("File copied successfully.\n");
    fclose(sfile);
    fclose(dfile);
    return 0;
}