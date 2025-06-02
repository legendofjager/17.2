#include "TASK.h"

int main(void) {
    char input[100];     // Буфер для вводимой строки
    char output[100];    // Буфер для результата
    int n, m;            // Параметры для подстроки

    // Ввод данных с клавиатуры
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Удаление символа новой строки

    printf("Enter start index (n): ");
    scanf("%d", &n);

    printf("Enter substring length (m): ");
    scanf("%d", &m);

    // Обработка строки
    mading(input, output, n, m, strlen(input));

    // Вывод результата
    printf("Result: %s\n", output);

    return 0;
}
