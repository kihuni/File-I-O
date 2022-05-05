
![manipulating files in c](https://github.com/kihuni/File-I-O/blob/main/Manipulatin%20file%20in%20c.png)


## The process of writing and reading files:

- Declare file pointer of type FILE, like below:
    
    This will refer to the file being created/read

    `FILE *filePointer`

- Write a function to open/read/create the file using fopen()

    `filePointer = fopen("fileName", fileMode)`

    The mode is used to determine if either the file will be read/write only and also cames with other attributes:
    

                “r” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. If the file cannot be opened fopen( ) returns NULL.
                “rb” – Open for reading in binary mode. If the file does not exist, fopen( ) returns NULL.
                “w” – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
                “wb” – Open for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created.
                “a” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
                “ab” – Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created.
                “r+” – Searches file. If is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. Returns NULL, if unable to open the file.
                “rb+” – Open for both reading and writing in binary mode. If the file does not exist, fopen( ) returns NULL.
                “w+” – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL, if unable to open file.
                “wb+” – Open for both reading and writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created.
                “a+” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
                “ab+” – Open for both reading and appending in binary mode. If the file does not exist, it will be created.

                            *N/B The above modes attributes are copied from GEEKSForGEEKS*

- To read from file, we use fscanf()/fgets():

            ```
            FILE * filePointer;

            filePointer = fopen("fileName", "r")

            fgets(filePointer,"%s" str);
            ```
- To write to a file, we use fprintf()/fputs functions:


            ```
            FILE * filePointer;

            filePointer = fopen("fileName", "w")

            fputs(filePointer,"%s" "we are heros");
            ```

- Finally, to close a file, we use fclose functions:
            ```
            FILE * filePointer;

            filePointer = fopen("fileName", fileMode
            .......files operations

            fclose(filePointer);
             ```
### Conclusion

- Clone the repo and test the programs for yourself and see how every process works. And if you want to learn more:

    [GeeksforGeeks](https://www.geeksforgeeks.org/basics-file-handling-c/)


