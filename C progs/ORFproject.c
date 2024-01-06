#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char seq[1000];
    int length;
    int i;
    int j;

    while (scanf("%s", seq) == 1)
    {
        bool startExist = false;

        length = strlen(seq);
        for (i = 0; i <= length - 3; i++)
        {
            if (seq[i] == 'A' && seq[i + 1] == 'T' && seq[i + 2] == 'G' && startExist == false)
            {
                printf("The start codon is at position %d\n", i + 1);

                startExist = true;

                for (j = i + 3; j <= length - 2; j = j + 3)
                {
                    if ((seq[j] == 'T' && seq[j + 1] == 'A' && seq[j + 2] == 'A') || (seq[j] == 'T' && seq[j + 1] == 'A' && seq[j + 2] == 'G') || (seq[j] == 'T' && seq[j+1] == 'G' && seq[j+2] == 'A'))
                    {
                        printf("There is stop codon at position %d\n", j + 1);


			printf("The sequence is:");

                        for (int a = i; a <= j + 2; a++)
                        {
                            printf("%c", seq[a]);
                        }

                        break;
                    }
                    else if (j + 3 > length - 2)
                    {
                        printf("There is no stop codon\n");
                    }
                }
            }
        }

        if (startExist == false)
        {
            printf("Start codon was not found!\n");
        }
    }

    return 0;
}
