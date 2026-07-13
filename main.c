#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ARGUMENT_LENGTH 64

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf(
            "usage: %s [STRING](Max length: %d)\n",
            argv[0],
            MAX_ARGUMENT_LENGTH
        );

        return 1;
    }

    if (strlen(argv[1]) > MAX_ARGUMENT_LENGTH)
    {
        printf("Argument exceeds max length.\n");
        printf("(Max length: %d)\n", MAX_ARGUMENT_LENGTH);

        return 1;
    }

    char message[MAX_ARGUMENT_LENGTH + 1] = "";
    char leet_message[MAX_ARGUMENT_LENGTH + 1] = "";

    strcpy(message, argv[1]);
    int message_length = strlen(message);

    int i;

    for (i = 0; i < message_length; i++)
    {
        switch (toupper(message[i]))
        {
            case 'A':
                leet_message[i] = '4';
                break;
            case 'B':
                leet_message[i] = '8';
                break;
            case 'C':
                leet_message[i] = '[';
                break;
            case 'D':
                leet_message[i] = ')';
                break;
            case 'E':
                leet_message[i] = '3';
                break;
            case 'G':
                leet_message[i] = '6';
                break;
            case 'I':
                leet_message[i] = '1';
                break;
            case 'O':
                leet_message[i] = '0';
                break;
            case 'S':
                leet_message[i] = '5';
                break;
            case 'T':
                leet_message[i] = '7';
                break;
            case 'Z':
                leet_message[i] = '2';
                break;
            default:
                leet_message[i] = message[i];
                break;
        }
    }

    printf("%s\n", leet_message);

    return 0;
}