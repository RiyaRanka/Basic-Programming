#include<stdio.h>
int compareString(char[],char[]);
int main(){
int flag;
char str1[80],str2[80];
printf("Please enter first string : ");
gets(str1);
printf("Please enter second string : ");
gets(str2);
flag=compareString(str1,str2);
if(flag==0){
    printf("Both strings are equal.\n");
}
else{
    printf("Both strings are not equal.");
}
return 0;
}

int compareString(char str1[],char str2[]){
    int i=0;
    while(str1[i]==str2[i]){
        if(str1[i]=='\0'|| str2[i]=='\0')
        break;
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0'){
        return 0;
    }
    else{
        return 1;
    }
}