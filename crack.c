#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <crypt.h>
#include <unistd.h>
#include <time.h>

int main(int argc, string argv[])
{
    int i = 0;   //Cycle
    int j = 0;   //Cycle
    int k = 0;   //Cycle
    int l = 0;   //Cycle
    int m = 0;   //Cycle

    string sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string ct;    //Received the data to desencrypt
    char salt [2];

    char pt1 [2];    //Transform to one character plain text
    char pt2 [3];    //Transform to two character plain text
    char pt3 [4];    //Transform to three character plain text
    char pt4 [5];    //Transform to four character plain text
    char pt5 [6];    //Transform to four character plain text

    //Receiving the initial information

    ct = argv[1];

    if (argc != 2 || strlen(argv[1]) != 13)
    {
        printf("Usage: %s hash\n", argv[0]);
        return 1;
    }

    //testing

    //char *p = crypt("santi","50");
    //printf("Hash=%s\n",p);

    //Garanting that use DES

    salt[0] = argv[1][0];
    salt[1] = argv[1][1];

    //Only one character plain text

    pt1[1] = '\0';

    for (i = 0; i <= 49; i++)
    {
        pt1[0] = sc[i];
        if (strcmp(crypt(pt1, salt), ct) == 0)
        {
            printf("%s\n", pt1);
            return 0;
        }
    }

    //Only two character plain text

    pt2[2] = '\0';

    for (i = 0; i <= 49; i++)
    {
        for (j = 0; j <= 49; j++)
        {
            pt2[0] = sc[i];
            pt2[1] = sc[j];

            if (strcmp(crypt(pt2, salt), ct) == 0)
            {
                printf("%s\n", pt2);
                return 0;
            }
        }
    }

    //Only three character plain text

    pt3[3] = '\0';

    for (i = 0; i <= 49; i++)
    {
        for (j = 0; j <= 49; j++)
        {
            for (k = 0; k <= 49; k++)
            {
                pt3[0] = sc[i];
                pt3[1] = sc[j];
                pt3[2] = sc[k];

                if (strcmp(crypt(pt3, salt), ct) == 0)
                {
                    printf("%s\n", pt3);
                    return 0;
                }
            }
        }
    }

    //Only four character plain text

    pt4[4] = '\0';

    for (i = 0; i <= 49; i++)
    {
        for (j = 0; j <= 49; j++)
        {
            for (k = 0; k <= 49; k++)
            {
                for (l = 0; l <= 49; l++)
                {

                    pt4[0] = sc[i];
                    pt4[1] = sc[j];
                    pt4[2] = sc[k];
                    pt4[3] = sc[l];

                    if (strcmp(crypt(pt4, salt), ct) == 0)
                    {
                        printf("%s\n", pt4);
                        return 0;
                    }
                }
            }
        }
    }

    //Only four character plain text

    pt5[5] = '\0';

    for (i = 0; i <= 49; i++)
    {
        for (j = 0; j <= 49; j++)
        {
            for (k = 0; k <= 49; k++)
            {
                for (l = 0; l <= 49; l++)
                {
                    for (m = 0; m <= 49; m++)
                    {

                        pt5[0] = sc[i];
                        pt5[1] = sc[j];
                        pt5[2] = sc[k];
                        pt5[3] = sc[l];
                        pt5[4] = sc[m];

                        if (strcmp(crypt(pt5, salt), ct) == 0)
                        {
                            printf("%s\n", pt5);
                            return 0;
                        }

                    }

                }

            }
        }
    }

}