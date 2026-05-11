#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    int length;
    int flag=0;
    printf("Enter the string:");
    scanf("%s",str);
    length=strlen(str);
    int i=0, j=length-1;
    while(i<=j){
        if(str[i]!=str[j]){
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0){
        printf("Pallindorme");
    }
    else{
        printf("Not Pallindrome");
    }
}