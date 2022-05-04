#include <stdio.h>

int main()
{   
    //after calling the fopen an object of type
    // FILE is initialized, which contains all 
    // information necessary to control the stream
    FILE *fp;
    char buff[255];  
        // using fopen function to write a new file 
        // or open an existing file
        // The below function has two arguments:
        // 1st, file created or opened if it doesnt exist
        // 2nd, the mode of the file created
        fp = fopen("test.txt", "w+");
                
                // writing into the file

        // Function to a Write string in to file
        fprintf(fp, "Hello people \n");
        fputs("test for fputs if it will also run...\n", fp);
        
                
        //reading file
        fscanf(fp, "%s", buff);
        printf("1 : %s\n", buff);

        //fgets function reads upto 255 characters
        // from the input stream referenced by fp
        // then it copies the read string into the buffer buff
        //appending a null character to terminate the string
        fgets(buff, 255,fp);
        printf("2: %s\n", buff);

        fgets(buff, 255, fp);
        printf("3: %s\n", buff);
        //this closes the file
        fclose(fp);
    

}



