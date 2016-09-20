#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
     
     if (argc!=2) {
        printf ("Usage: ./caesar k\n");
        return 1;
    }
    else  {
         int key=atoi(argv[1]);            //convert string to an int
         printf("plaintext: ");
         string s=get_string();
         printf("ciphertext: ");
         int n=strlen(s)-1;
         for (int i=0; i<=n; i++) {
              if (isalpha(s[i]) && s[i]>=97 && s[i]<=122) {
                  printf("%c", ((s[i]+key)-97)%26+97);           //check the letters(lower/upper) and encrypt the text
              }                                                  //according to the formula ci=(pi+k)mod26 -(cs50 advice)
              else if(isalpha(s[i]) && s[i]>=65 && s[i]<=90){

               printf("%c",((s[i]+key)-65)%26+65);
               }
               else {

               printf("%c", s[i]);

           }
               
              
         }
         printf("\n");
       return 0;
    }
    
}