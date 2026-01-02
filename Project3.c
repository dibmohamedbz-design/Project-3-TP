#include <stdio.h>
#include <string.h>
int main() {
    char Alpabet_lowercase[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char Alpabet_uppercase[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char msg[101];
    int order = 0, key;

    do{
        printf("do you want to encode(0) or decode(1) a message:\n");
        scanf("%d", &order);
    } while ((order != 0) && (order != 1));
    getchar();// remove the "enter" from text

    printf("What is your message (100 letter is max):\n");
    fgets(msg, 101, stdin);

    msg[strcspn(msg, "\n")] = '\0';//replace "enter" with \0(end of line)

    do {
        printf("what is the shift number (1 to 25)\n");
        scanf("%d", &key);
    } while ((key < 0) || (key > 25));


    if(order == 0) {
        for (int i = 0; msg[i] != '\0'; i++) {
            //to the line end
            for (int j = 0; j < 26; j++) {
                //for lowercase latters
                if (msg[i] == Alpabet_lowercase[j]){
                    msg[i] = Alpabet_lowercase[(j + key) % 26];
                    break;
                }
                //for uppercase latters
                
                if (msg[i] == Alpabet_uppercase[j]){
                    msg[i] = Alpabet_uppercase[(j + key + 26) % 26];
                    break;
                }
                    
            }
        }
        printf("Encoded message: %s\n", msg);
    }

    if (order == 1) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                //for lowercase latters
                if (msg[i] == Alpabet_lowercase[j]) {
                    msg[i] = Alpabet_lowercase[(j - key + 26) % 26];
                    break;
                }
                //for uppercase latters
                
                if (msg[i] == Alpabet_uppercase[j]) {
                    msg[i] = Alpabet_uppercase[(j - key + 26) % 26];
                    break;
                }
            }
        }
        printf("Decoded message: %s\n", msg);
    }

    return 0;
}
    