#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[20];
    int age;
    float height;
    float percentage;

};

int main()
{
    struct student obj;
    struct student *ptr;

    strcpy(obj.name,"Zarak Jahan");
    obj.age = 22;
    obj.height = 186.0;
    obj.percentage = 98.0;
    ptr = &obj;
    printf("%s", obj.name);
    printf("\n%d", obj.age);
    printf("\n%f", obj.height);
    printf("\n%f", obj.percentage);
    printf("\n%d", ptr -> age);
    printf("\n%f", ptr -> height);
    printf("\n%f", ptr -> percentage);
    printf("\n%s", ptr -> name);
}
