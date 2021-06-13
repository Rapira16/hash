#include "../geek.h"
int countMoney(){ 
    int fifty = 50; // указываем стоимость монеты
    int ten = 10;
    int five = 5;
    int two = 2; 
    int one = 1;
    int num1 = 0; // количество монет разных номеналов
    int num2 = 0;
    int num5 = 0;
    int num10 = 0;
    int num50 = 0;
    int SUMMA = 0; // сумма
    while (SUMMA <= 98){ // определяем количество монет с разными номеналами
        SUMMA = SUMMA + fifty;
        num50++;
    }
    printf("amount of 50's: %d\n", num50);
    while (SUMMA <= 48){
        SUMMA = SUMMA + ten;
        num10++;
    }
    printf("amount of 10's: %d\n", num10);
    while (SUMMA <= 8){
        SUMMA = SUMMA + five;
        num5++;
    }
    printf("amount of 5's: %d\n", num5);
    while (SUMMA <= 3){
        SUMMA = SUMMA + two;
        num2++;
    }
    printf("amount of 2's: %d\n", num2);
    while (SUMMA <= 1){
        SUMMA = SUMMA + one;
        num1++;
    }
    printf("amount of 1's: %d\n", num1);

}
int main(const int argc, const char** argv) {
    int h = 8; // указываем код для каждого элемента 
    int e = 5;
    int l = 12;
    int o = 15;
    int sum = 0;
    int arr[5] = {h, e, l, l, o}; // вводим слово по буквам
        for (int i = 0; i < 5; i++){ // проходим по слову и складываем коды
            sum = sum + arr[i];
        }
    printf("%d", sum);
    return 0;
}