#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int i;

    printf("Enter plain text: ");
    fgets(text, sizeof(text), stdin);

    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = (text[i] - 'A' + 3) % 26 + 'A';
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = (text[i] - 'a' + 3) % 26 + 'a';
        }
    }

    printf("Cipher text: %s", text);

    return 0;
}
