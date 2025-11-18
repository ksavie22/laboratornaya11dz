#include <stdio.h>
#include <locale.h>
#define N 10  

int main() {
    int array[N];
    int i, posled_polozh_index = -1;
    int sum = 0;
    setlocale(LC_CTYPE, "RUS");
    
    printf("Введите %d целых чисел (положительных и отрицательных):\n", N);
    for (i = 0; i < N; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    //  индекс последнего положит
    for (i = 0; i < N; i++) {
        if (array[i] > 0) {
            posled_polozh_index = i;
        }
    }

    // Выводим исходный массив
    printf("\nИсходный массив: ");
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    
    if (posled_polozh_index == -1) {
        printf("В массиве нет положительных элементов.\n");
    }
    else {
        printf("Последний положительный элемент: array[%d] = %d\n",
            posled_polozh_index, array[posled_polozh_index]);

        // сумм до послполож
        if (posled_polozh_index > 0) {
            for (i = 0; i < posled_polozh_index; i++) {
                sum += array[i];
            }
            printf("Сумма элементов до последнего положительного элемента: %d\n", sum);
            printf("Элементы для суммирования: ");
            for (i = 0; i < posled_polozh_index; i++) {
                printf("%d", array[i]);
                if (i < posled_polozh_index - 1) {
                    printf(" + ");
                }
            }
            printf(" = %d\n", sum);
        }
        else {
            printf("Последний положительный элемент, суммировать нечего.\n");
        }
    }

    return 0;
}