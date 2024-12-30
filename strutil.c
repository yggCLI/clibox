#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  

// Trim leading and trailing whitespace  
char* trim(char* str) {  
    char* end;  
    while (isspace((unsigned char)*str)) str++;  
    if (*str == 0) return str;  
    end = str + strlen(str) - 1;  
    while (end > str && isspace((unsigned char)*end)) end--;  
    end[1] = '\0';  
    return str;  
}  

int main(int argc, char* argv[]) {  
    if (argc != 2) {  
        printf("Usage: strutil trim <string>\n");  
        return 1;  
    }  
    printf("%s\n", trim(argv[1]));  
    return 0;  
}  