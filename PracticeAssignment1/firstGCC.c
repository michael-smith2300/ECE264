#include<stdio.h>

void intro();
void recommended();

int main(void) {
    intro();
    recommended();
    return(0);
}

void intro() {
    printf("=====Introduction=====\n\n");
    printf("Let's learn how to use the GNU C Compiler!\n\n");
    printf("The first thing you should do is to compile your program with an executable name. \n"
            "This lets you run a program with a unique name for an executable,\n"
            "rather than just running a.out. \n"
            "The -o flag is used to specify output executable name. \n\n"
            "Example: gcc -o gcc1 firstGCC.c\n\n");
}

void recommended() {
    //printf();
}
