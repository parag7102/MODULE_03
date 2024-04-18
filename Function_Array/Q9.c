//9. WAP to show difference between Structure and Union.
#include <stdio.h>

//stucture
struct StructExample {
    int i;
    float f;
    char c;
};

//union
union UnionExample {
    int i;
    float f;
    char c;
};

int main() {
    struct StructExample se;
    union UnionExample ue;

    se.i = 10;
    se.f = 20.5;
    se.c = 'a';

    ue.i = 10;
    ue.f = 20.5;
    ue.c = 'a';

    printf("Structure values: %d, %f, %c\n", se.i, se.f, se.c);
    printf("Union values: %d, %f, %c\n", ue.i, ue.f, ue.c);

    return 0;
}
