// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>

// typedef struct Pure_Odd_Digits_Primes_Data
// {
//     unsigned lower, beneath, above;
// } podp_data;

// //--------------------------------------------------------

// podp_data only_odd_digit_primes(unsigned number)
// {

//     int val = 0, val_count = 0;
//     int count = 0, val_1 = 0;
//     int divisor_found, divisor_found_two;

//     podp_data result = {0, 0, 0};

//     for (int i = 3; i < number; i++)
//     {
//         if (i % 2 == 1)
//         {
//             val = i;
//             divisor_found_two = 0;
//             int isvalid = 1;
//             if (val >= 10)
//             {
//                 int tens = val / 10;
//                 if (tens % 2 == 0)
//                 {
//                     isvalid = 0;
//                 }
//             }
//             if (isvalid)
//             {
//                 for (int j = 3; j < val; j++)
//                 {
//                     if (val % j == 0)
//                     {
//                         // printf(" val : %d j : %d\n", val, j);
//                         if (divisor_found_two == 0)
//                         {
//                             divisor_found_two = 1;
//                             break;
//                         }
//                     }
//                 }
//             }
//             if (divisor_found_two == 1)
//             {
//                 val_count++;
//             }
//         }
//     }

//     for (int i = 3; i < number; i++)
//     {
//         if (i % 2 == 1)
//         {
//             val = i;
//             divisor_found = 1;
//             for (; val > 0; val /= 10)
//             {
//                 int digit = val % 10;
//                 if (digit % 2 == 0)
//                 {
//                     divisor_found = 0;
//                     break;
//                 }
//             }
//             if (divisor_found)
//             {
//                 // printf("divisor_found : %d \n" , i);
//                 count++;
//             }
//         }
//     }

//     // printf("\n");

//     // printf("%d %d \n", count, val_count);

//     result.lower = count - val_count;

//     //------------------------------------------------------------------------

//     int max = 0, flag = 0;

//     for (int i = number; i >= 3; i--)
//     {
//         if (i % 2 == 1)
//         {
//             max = i;
//             flag = 0;
//             for (int j = max - 1; j >= 3; j--)
//             {
//                 if (max % j == 0)
//                 {
//                     flag = 1;
//                     break;
//                 };
//             }
//             if (flag == 0)
//             {
//                 result.beneath = max;
//                 break;
//             }
//         }
//     }
//     // printf("max : %d " , max);
//     // printf("\n ");

//     //-----------------------------------------------------------------------------------------------

//     int val_above;
//     for (int i = number;; i++)
//     {
//         if (i % 2 == 1)
//         {
//             val_above = i;
//             int val_del = i;
//             int flag_above = 1;
//             int flag_del = 0;
//             if (val_above /= 10)
//             {
//                 int temp = val_above % 10;
//                 if (temp % 2 == 0)
//                 {
//                     flag_above = 0;
//                 }
//             }
//             if (flag_above)
//             {
//                 for (int j = 3; j < val_del; j++)
//                 {
//                     // int flag_del = 0 ;
//                     if (val_del % j == 0)
//                     {
//                         if (flag_del == 0)
//                         {
//                             flag_del = 1;
//                         }
//                     }
//                 }
//                 if (flag_del == 0)
//                 {
//                     result.above = val_del;
//                     break;
//                 }
//             }
//         }
//     }

//     return result;
// }

// //--------------------------------------------------------

// int main()
// {

//     unsigned n = 223;

//     podp_data res = only_odd_digit_primes(n);

//     printf("%u %u %u\n", res.lower, res.beneath, res.above);

//     return 0;
// }