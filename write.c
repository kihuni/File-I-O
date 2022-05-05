#include <string.h>
#include <stdio.h>

int main()
{   
    
    FILE *filePointer;

    // store data to be written in dataToBeWritten

    char dataToBeWritten[255] = "I am trying to get the concept of programming right";

    //open a file

    filePointer = fopen("test.txt", "w");

    if(filePointer == NULL)
    {
            printf("File failed to open");
    }
    else
    {           
            //writing the data into the file
            printf("file is now opened.\n");

                if(strlen (dataToBeWritten)> 0)
                {
                        fputs(dataToBeWritten, filePointer);
                        fputs("\n", filePointer);
                }

                //cloding the file
                fclose(filePointer);

                printf("Data successfully read in file test.txt\n");
                printf("The file is now close\n");
    }
    return 0;
}   



