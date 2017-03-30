#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "apr-1/apr_md5.h"

void hello(const char *name)
{
    printf("%s\n", name);
    return;
}

static void md5pass()
{
    const char *pass = "hellojed", *salt = "sardine";
    char hash[100];

    apr_md5_encode(pass, salt, hash, sizeof hash);
        printf("%s\n", pass);

        int x=0;
        while(x<40)
        {
                printf("%c", hash[x]);
                x++;
        }
        printf("\n");

        int i = 0;
        i = apr_password_validate(pass, hash);
        printf("%d\n", i);

}

int main(int argc, const char *argv[])
{
    const char *s = "hello world";
    hello(s);
    md5pass();
    return 0;
}
