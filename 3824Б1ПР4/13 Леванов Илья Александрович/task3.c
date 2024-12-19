// // Задача 3. Даны: символ ch и строка s. 
// // Сформировать новую строку, в которой после каждого вхождения символа ch 
// // в строку s вставлен символ ‘#’.
// // Пример: ch = ‘k’, s = “abckdgkefgk”, ответ: “abck#dgk#efgk#”.
// char* task3(char *s, char ch)
// {
//   return "task3";
// }

#include "stdio.h"
#include "stdlib.h"

char* task3(char* s, char ch) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    int count = 0;
    for (int i = 0; i < length; i++) {
        if (s[i] == ch) {
            count++;
        }
    }


    int new_len = length + count + 1; 
    char* result = (char*)malloc(new_len * sizeof(char));
    if (result == NULL) {
        return NULL; 
    }

    int j = 0;
    for (int i = 0; i < length; i++) {
        result[j++] = s[i];  
        if (s[i] == ch) {
            result[j++] = '#'; 
        }
    }

    result[j] = '\0';  
    return result;
}
