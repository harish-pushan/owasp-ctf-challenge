#include<stdio.h>
#include <string.h>

void decode_(char *cipher,int key,char *deocded_string){
    int len = strlen(cipher);
    for(int i= 0;i < len ; i++){
        deocded_string[i]= cipher[i]^key;
    }
    deocded_string[len]='\0';
}


int main(){
    char cipher[6] = "�����";
    int key = 2456;
    char decoded_string[6];
    decode_(cipher,key,decoded_string);
    printf("%s",decoded_string);
    
    return 0;
}