#include <stdio.h>
#include <string.h>

#define MAX_FILES 5
#define MAX_NAME_LENGTH 50

char files[MAX_FILES][MAX_NAME_LENGTH];
int fileCount = 0;

void addFile()
{
    if(fileCount >= MAX_FILES)
    {
        printf("\nStorage Full!\n");
        return;
    }

    printf("\nEnter File Name: ");
    scanf("%s", files[fileCount]);

    fileCount++;

    printf("File Added Successfully!\n");
}

void viewFiles()
{
    if(fileCount == 0)
    {
        printf("\nNo Files Found!\n");
        return;
    }

    printf("\n===== FILES =====\n");

    for(int i = 0; i < fileCount; i++)
    {
        printf("%d -> %s\n", i, files[i]);
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== MORPHFS v1 =====\n");
        printf("1. Add File\n");
        printf("2. View Files\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addFile();
                break;

            case 2:
                viewFiles();
                break;

            case 3:
                printf("\nExiting MorphFS...\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
