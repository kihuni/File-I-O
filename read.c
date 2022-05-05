#include <stdio.h>
#include <string.h>

int main()
{

    FILE *filePointer;

    char dataToBeRead[255];

    //open the existing file using fopen
    filePointer = fopen("test.txt", "r") ;

        if(filePointer == NULL)
        {
            printf("file failed to open");
        } 
        else
        {
            printf('The file is openned');

            while(fgets(dataToBeRead,255, filePointer) != NULL)
            {
                printf("%s", dataToBeRead);
            }

            //closing the file
            fclose(filePointer);

            printf("The file was successful read\n");
        }
return 0;

}

