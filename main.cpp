/*
Репозиторий к задаче:
//https://github.com/s-getmanov/tp_homework_35.git
*/

#include <stdio.h>

main()
{

    //Задание 1

    int i = 1;
    int number_of_iter = 9;

    printf("\n");
    printf("Вывод Hello:\n");
    printf("\n");

    while (i <= number_of_iter)
    {
        printf("Hello\n");
        i++;
    }

    printf("\n");
    printf("Вывод чисел от 0, количество итераций 15:\n");
    printf("\n");

    i = 0;
    number_of_iter = 14;

    while (i <= number_of_iter)
    {
        printf("%i\n", i);
        i++;
    }

    printf("\n");
    printf("Вывод нечетных чисел, количество итераций 15:\n");
    printf("\n");

    i = 1;
    number_of_iter = 15;

    while (i <= number_of_iter)
    {
        printf("%i\n", i);
        i = i + 2;
    }

    //Задание 2

    i = 5;
    number_of_iter = 15;
    int summ;

    while (i <= number_of_iter)
    {
        summ = summ + i;
        i++;
    }

    printf("\n");
    printf("Сумма чисел от 5 до 15 - %i\n", summ);
    printf("\n");
}
