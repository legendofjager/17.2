#include "TASK.h"

int main(void) {
    char input[100];     // ����� ��� �������� ������
    char output[100];    // ����� ��� ����������
    int n, m;            // ��������� ��� ���������

    // ���� ������ � ����������
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // �������� ������� ����� ������

    printf("Enter start index (n): ");
    scanf("%d", &n);

    printf("Enter substring length (m): ");
    scanf("%d", &m);

    // ��������� ������
    mading(input, output, n, m, strlen(input));

    // ����� ����������
    printf("Result: %s\n", output);

    return 0;
}
