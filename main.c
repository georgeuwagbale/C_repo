#include <stdio.h>


int main(){
    char name[] = "George";
    char *my_name;
    my_name = name;
    int i;

    for (i=0;i<6;i++) printf("%s",name[i]);
    printf("%s", my_name);

    return 0;
}