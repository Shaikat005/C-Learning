#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int count;
    gets(string);

    printf("Duplicate characters in a given string: \n");
    for(int i = 0; i < strlen(string); i++) {
        count = 1;
        for(int j = i+1; j < strlen(string); j++) {
            if(string[i] == string[j] && string[i] != ' ') {
                count++;
                string[j] = '0';
            }
        }
        if(count > 1 && string[i] != '0'){
            printf("%c appeared %d times\n", string[i],count);
        }
    }

    return 0;
}
//https://www.javatpoint.com/program-to-find-the-duplicate-characters-in-a-string
