// // Задача 1. Дан непустой массив A из N элементов.
// // Найти номер первого экстремального (минимального или максимального) 
// // элемента в нем.
// int task1(unsigned A[], size_t N)
// {
//   return -1;
// }

#include "stdio.h"
#include "stddef.h"

int task1(unsigned A[], size_t N) {
    if (N == 0) {
        return -1;  
    }

    size_t first_extremum_index = 0;  
    unsigned min_value = A[0];  
    unsigned max_value = A[0];  


    for (size_t i = 1; i < N; ++i) {
        if (A[i] < min_value) {
            min_value = A[i];
            first_extremum_index = i;
        }
        else if (A[i] > max_value) {
            max_value = A[i];
            first_extremum_index = i;
        }
    }

    return first_extremum_index; 
}

    return first_extremum_index;  
}
