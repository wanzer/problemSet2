#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    if (argc != 2) {
            printf("Usage: ./vigenere + key_word\n");
            return 1;
         }
    for(int i=0; i<strlen(argv[1]); i++) {
    if (!isalpha(argv[1][i])) {
        printf("Usage: ./vigenere + key_word\n");
        return 1;
        }
        
    }
        int numKey=0;
        int lenKey=strlen(argv[1]);            
        int toNum[lenKey];                     //lenght of cipher key assigned to an array toNum[]
        for (int j=0; j<lenKey; j++) {
            toNum[j]=toupper(argv[1][j])-65;   //the letters(key word) were converted to numbers, A = 0 till Z = 25 (cs50 advice)
        }
        printf("plaintext: ");
        string text=GetString();
        printf("ciphertext: ");
        int textLen=strlen(text);
        for (int k=0; k<textLen; k++) {
            
            if (!isalpha(text[k])){
            printf("%c",text[k]);
                }
            else {
                if (islower(text[k])){
                    printf("%c",(((text[k]+toNum[numKey])-97)%26)+97);   //check the letters(lower/upper) and encrypt the given text
                    }                                                    //according to formula ci=(pi+kj)mod26
                    else if (isupper(text[k])) {                          
                     printf("%c",(((text[k]+toNum[numKey])-65)%26)+65);   
                    }
                if (numKey<lenKey-1){
                numKey++;                //increase counter for the key array.
                }
                else {
                    numKey=0;
                }
            }    
        }
    printf("\n");
    return 0;
}

