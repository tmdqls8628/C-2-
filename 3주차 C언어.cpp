#include <stdio.h>

int main() {
    int N;
    printf("��ǰ ���� ���� �Է��ϼ���: ");
    scanf("%d", &N);

    int stock[100] = { 0 };
    int sold[100] = { 0 };
    int result[100] = { 0 };

    printf("%d���� ��ǰ�� ���� �԰� ������ �Է��ϼ���:\n", N);
    for (int i = 0; i < N; i++) {
        printf("��ǰ %d �԰� ����: ", i + 1);
        scanf("%d", &stock[i]);
    }

    printf("%d���� ��ǰ�� ���� �Ǹ� ������ �Է��ϼ���:\n", N);
    for (int i = 0; i < N; i++) {
        printf("��ǰ %d �Ǹ� ����: ", i + 1);
        scanf("%d", &sold[i]);
    }

    for (int i = 0; i < N; i++) {
        result[i] = stock[i] - sold[i];
    }

    int id;
    printf("��� Ȯ���� ��ǰ ID�� �Է��ϼ��� (1 ~ %d): ", N);
    scanf("%d", &id);

    printf("��ǰ %d�� ���� ��� ����: %d\n", id, result[id - 1]);

    printf("��� ��ǰ�� ��� ����:\n");
    for (int i = 0; i < N; i++) {
        printf("%d", result[i]);
        if (i != N - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
