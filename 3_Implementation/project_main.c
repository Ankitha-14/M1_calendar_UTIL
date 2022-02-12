#include <stdio.h>
#include <stdlib.h>
#include "calender.h"



int main(int argc, char* argv[]){
    fp = fopen("note.bin", "r");
    if (fp == NULL) {
      fp = fopen("note.bin", "w");
    }
    fclose(fp);
    while(1) {
      printf("1. Find the day\n");
      printf("2. Print r of a month\n");
      printf("3. Add Note\n");
      printf("4. Exit\n");
      printf("Enter your choice: ");
      scanf("\n%c", &choice);
      switch(choice) {
        case '1':
        printf("Enter the day, month and year: ");
        scanf("%d %d %d", &day, &month, &year);
        printf("The day is : %s\n", getName(getDayNum(day, month, year)));
        break;
        case '2':
        printf("Enter the month and year: ");
        scanf("%d %d", &month, &year);
        printf("Please enter 's' to see the notes\n Press any other key to continue\n");
        calendarr(year, month);
        break;
        case '3':
        printf("Enter the day, month and year: ");
        scanf("%d %d %d", &note.day, &note.month, &note.year);
        flush();
        printf("Enter the note: ");
        fgets(note.note, 255, stdin);
        fp = fopen("note.bin", "a+");
        if (fp == NULL) {
          printf("File note.bin can not be opened\n");
          exit(1);
        }
        fwrite(&note, sizeof(Note), 1, fp);
        printf("Note added sucessfully\n");
        fclose(fp);
        break;
        case '4':
        printf("Bye!!");
        exit(0);
        break;
       
      }
    }
    return 0;
}
