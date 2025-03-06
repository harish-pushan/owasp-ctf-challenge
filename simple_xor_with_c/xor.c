#include<stdio.h>
#include <string.h>
#include <ctype.h>
void encode_(char *word,int key,char *cipher){
    int len = strlen(word);
    for (int i= 0;i<len;i++){
        cipher[i]=(word[i]^key);
        //printf("%s\n",cipher[i]);
    }
    cipher[len]='\0';
    
}

void decode_(char *cipher,int key,char *decoded_string){
    int len = strlen(cipher);
    for(int i= 0;i < len ; i++){
        decoded_string[i]= cipher[i]^key;
    }
    decoded_string[len]='\0';
    printf("%d",len);
     
}
int main(){
    
    char word[] = "hello";
    int key = 2456;
    char cipher[strlen(word)+1];
    char decoded_string[strlen(word)+1];
    encode_(word,key,cipher);
    printf("%s\n",cipher);
    decode_(cipher,key,decoded_string);
    printf("%s\n",decoded_string);
    
    return 0;
}