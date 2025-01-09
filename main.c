#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef bool (*Predicate)(int);

int *take_while(size_t len_in, const int array[len_in], Predicate p, size_t *len_out);
bool is_even(int n) {
    return n % 2 == 0;   // true or false
}

int main() {
    int array[] = {2, 4, 6, 8, 1, 3, 5};
    size_t len_in = sizeof(array) / sizeof(array[0]);
    size_t len_out = 0;

    int *result = take_while(len_in, array, is_even, &len_out);

    printf("Result: ");
    for (size_t i = 0; i < len_out; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}




int *take_while(size_t len_in, const int array[len_in], Predicate p, size_t *len_out)
{

int *res = (int*)malloc(len_in * sizeof(int)) ;
int count = 0 ;

    for (int i = 0; i < len_in; i++)
    {
        if(p(array[i])){
            res[count++] = array[i]; 
        }else{
            break;
        }
    }

    *len_out = count;

    return res;
}
