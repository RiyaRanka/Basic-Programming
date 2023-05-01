#include <stdio.h>
#include <string.h>  
int main(){
    char str[100], ch;
    int i, len, j;
    printf("Please enter a string : ");
    gets(str);
    printf("Please enter a character that you want to remove : ");
    scanf("%c", &ch);
    len = strlen(str);
    for(i = 0; i < len; i++){
        if(str[i] == ch){
            for(j = i; j < len; j++){
                str[j] = str[j + 1];
            }
            len--;
            i--;    
        } 
    }   
    printf("The new string after removing all occurrence of '%c' is '%s' ", ch, str);
    return 0;
}