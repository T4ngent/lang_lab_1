#include <iostream>
/* функция преобразует символы строки к верхнему регистру
* Параметры:
* s - указатель на строку с нулевым окончанием
* Результат:
* преобразует строку "на месте" */
using namespace std;
void toUpperCase(char * s)
{
    int i = 0;
    while(s[i] != 0) {
        if (s[i]<123 && s[i]>96])
        s[i] = s[i] - 32;
        i++;
    }
}
int main()
{
    char test[] = "test";
    toUpperCase(test);
    cout << test << endl;
    char hello[] = "Hello! World";
    toUpperCase(hello);
    cout << hello << endl;
    return 0;
}