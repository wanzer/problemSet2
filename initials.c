#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#define SPACE ' '

int main() {
    //Enter name and surname
    string s=get_string();
    if (s[0]>=97 && s[0]<=122) {
            printf("%c",toupper(s[0]));
        }
        else {
            printf("%c",s[0]);
        }
        for (int i=0; i<strlen(s); i++) {
            if (s[i]==SPACE) {
                if ((s[i+1]>=65 && s[i+1]<=90) || (s[i+1]>=97 && s[i+1]<=122)) {
                    printf("%c",toupper(s[i+1]));
                }
            }
        }
        
    
    
    
    printf("\n");
    
    
}

