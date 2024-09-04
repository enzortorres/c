#include <stdio.h> // HACKERRANK  

int main() {
    char ch;          
    char str[100];     
    char sentence[100]; 

    scanf(" %c", &ch);
    scanf("%s", str);
    fgets(sentence, sizeof(sentence), stdin);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sentence); 

    return 0;
}

