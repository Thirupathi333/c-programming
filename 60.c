#include <stdio.h>
#include <stdlib.h> /* required for atoi */

int main(void) {
    int  i=0,totalNums;
    double numbers[100];
    double atof ( const char * str ); 
    char line[100];  /* declare a char array */

    FILE *file;  /* declare a FILE pointer  */
    file = fopen("data.txt", "r");  /* open a text file for reading */

    while(fgets(line, sizeof line, file)!=NULL) {       /* keep looping until NULL pointer... */
       // printf("Lines of numbers.txt file are: %s", line);     
        numbers[i]=atoi(line);  /* convert string to double float*/
        i++;
    }
    totalNums = i;
    for (i=0 ; i<totalNums ; i++) {
        printf("\nThe number %d of %d is: %.0f", i+1, totalNums, numbers[i]);

    }
    fclose(file); 
    return 0;
}
