    #include <stdio.h>

int main() {
    int a;

    printf("Enter age: ");
    scanf("%d", &a);

    if (a <= 12) {
        printf("Category is child");
    }
    else if (a < 18) {
        printf("Category is teenager");
    }
    else {
        printf("Category is adult");
    }

    return 0;
}