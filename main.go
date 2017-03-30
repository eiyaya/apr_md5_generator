package main

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "apr-1/apr_md5.h"

#cgo linux LDFLAGS: -laprutil-1

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
*/
import "C"

func main() {
	cs := C.CString("Hello World!")
	C.hello(cs)
	C.md5pass()
}
