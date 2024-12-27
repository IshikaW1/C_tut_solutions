#include <stdio.h>
#include <string.h>

void reverse_sentence(char str[]){
    int i, j, len, start, end;
    char temp;

    len=strlen(str);

    //reversng whole input string
    for(i=0, j=len-1; i<j; i++, j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    //reversing the indvidual words back to their original order
    start = 0;
    for(i=0; i<=len; i++){
        if(str[i]==' ' || str[i]=='\0'){
            end=i-1;
            while(start<end){
                temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++, end--;
            }
            start=i+1; //move to next word
        }
    }
}

void main(){
    char str[1000];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    //removing newline characters if present
    str[strcspn(str,"\n")]='\0';

    reverse_sentence(str);

    printf("Reversed sentence: \n%s", str);

}
