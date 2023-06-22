#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

typedef struct {
    int eno;
    char sno[10];
    float temp;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

LogEntry entry[MAX_ENTRIES];
int num = 0;
void extract() {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }
    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, file);
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        char *token;
        token = strtok(line, ",");
        entry[num].eno = atoi(token);
        token = strtok(NULL, ",");
        strcpy(entry[num].sno, token);
        token = strtok(NULL, ",");
        entry[num].temp = atof(token);
        token = strtok(NULL, ",");
        entry[num].humidity = atoi(token);
        token = strtok(NULL, ",");
        entry[num].light = atoi(token);
        token = strtok(NULL, ",");
        strcpy(entry[num].timestamp, token);
        num++;
    }
    fclose(file);
}
void display() {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < num; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",entry[i].eno,entry[i].sno,entry[i].temp,entry[i].humidity,entry[i].light,entry[i].timestamp);
    }
}
int main() {
    extract();
    display();
    return 0;
}
