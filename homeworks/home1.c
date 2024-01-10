#include <stdio.h>

int main() {
    char name[5];
    int birthYear, currentYear, age;

    printf("Як вас звуть? ");
    scanf("%s", name);

    printf("Якого року ви народилися? ");
    scanf("%d", &birthYear);

    printf("Який зараз рік? ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    printf("Тобі %d років, і тебе звуть %s\n", age, name);

    return 0;
}
