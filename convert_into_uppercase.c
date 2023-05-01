#include<stdio.h>

int main(){
char str[20];
int i;
printf("Enter the string : ");
gets(str);
for(i=0;str[i];i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
}
printf("The given string is converted in uppercase '%s'",str);
return 0;
}