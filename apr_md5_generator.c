#include <stdio.h>
#include "apr-1/apr_md5.h"
int main(int argc, const char *argv[])
{
    if (argc != 3)
    {
        printf("%s\n", "usage: apr_md5_generator password salt");
        return -1;
    }

    const char* password = argv[1];
    const char* salt = argv[2];
    char hash[100];
    char c=' ';
    int i=0;
    apr_md5_encode(password, salt, hash, sizeof hash);
    while( c != '\0')
    {
        c=hash[i];
        printf("%c", c);
        i++;
    }
    printf("\n");
    return 0;
}
