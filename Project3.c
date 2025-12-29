#include <stdio.h>
#include <string.h>
int main() {
    char Alpabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char msg[101];
    int order, key;

    printf("do you want to encode(0) or decode(1) a message:\n");
    scanf("%d", &order);
    getchar();

    printf("What is your message (100 letter is max):\n");
    fgets(msg, 101, stdin);

    msg[strcspn(msg, "\n")] = '\0';

    printf("message is : %s\n", msg);

    printf("what is the shift number (1 to 25)\n");
    scanf("%d", &key);

    if (key > 25) {
        key = key - 25;
    }


    if(order == 0) {
        for (int i = 0; msg[i] != '\0'; i++) {
            for (int j = 0; j < 26; j++) {
                if (msg[i] == Alpabet[j]){
                    if ((j + key) > 26) {
                        msg[i] = Alpabet[j + key - 26];
                        break;
                    }else {
                        msg[i] = Alpabet[j + key];
                        break;
                    }
                }
            }
        }
        printf("Encoded message: %s\n", msg);
    }

    return 0;
}
    