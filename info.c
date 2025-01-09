//=========================================================================================================//

//КОМАНДЫ ДЛЯ ПРОЕКТОВ

//=========================================================================================================//

// gcc -g main/*.c -o build/Debug/a.out  
// gcc -g ${workspaceFolder}/main/*.c -o ${workspaceFolder}/build/Debug/a.out  




// TASK JSON
// {
//     "version": "2.0.0",
//     "tasks": [
//         {
//             "label": "build",
//             "type": "shell",
//             "command": "gcc",
//             "args": [
//                 "-g",                               // Флаг для отладки
//                 "${workspaceFolder}/main/*.c",      // Все .c файлы в папке main
//                 "-o", "${workspaceFolder}/build/Debug/a.out"  // Путь к выходному файлу
//             ],
//             "group": {
//                 "kind": "build",
//                 "isDefault": true
//             },
//             "problemMatcher": ["$gcc"],
//             "detail": "Сборка программы в выходной файл a.out"
//         }
//     ]
// }

// LAUNCH JSON 
// {
//   "version": "0.2.0",
//   "configurations": [
    
//     {
//       "name": "C/C++ Runner: Debug Session",
//       "type": "cppdbg",
//       "request": "launch",
//       "args": [],
//       "stopAtEntry": false,
//       "externalConsole": false,
//       "cwd": "${workspaceFolder}",
//       "program": "${workspaceFolder}/build/Debug/a.out", 
//       "MIMode": "gdb",
//       "miDebuggerPath": "gdb",
//       "setupCommands": [
//         {
//           "description": "Enable pretty-printing for gdb",
//           "text": "-enable-pretty-printing",
//           "ignoreFailures": true
//         }
//       ]
//     }
//   ]
// }


















//=========================================================================================================//

//УКАЗАТЕЛЬ НА char С ДИНАМИЧЕСКОЙ ПАМЯТЬЮ

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "str1.h"

// int main()
// {
//     int n = 55;
//     char *arr;

//     char *new_ptr = memory(n); 



//     printf("%s", new_ptr);



//     free(new_ptr);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include "str1.h"

// char* memory(int size){
    
//     char *ptr = (char*)malloc(size * sizeof(char));
//     fgets(ptr , size , stdin); 

//     for (int i = 0; ptr[i] != '\0'; i++){
//         if (ptr[i] >= 'a' && ptr[i] <= 'z') {
//             ptr[i] = ptr[i] - 32; // Преобразуем в верхний регистр
//         }
//         else if (ptr[i] >= 'A' && ptr[i] <= 'Z') {
//             ptr[i] = ptr[i] + 32; // Преобразуем в нижний регистр
//         }
//     }

// return ptr ;
// }

//=========================================================================================================//

//УКАЗАТЕЛЬ НА int С ДИНАМИЧЕСКОЙ ПАМЯТЬЮ

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "str1.h"

// int main()
// {

// int N;                               *arr - млжем не писать тк всё работает через указатель он и есть наш массив!)

// scanf("%d" , &N); 


// int *new_ptr =  memory(N);

//     for(int i = 0 ; i < N; i++){
//         printf("%d " , new_ptr[i]);
//     }

// free(new_ptr);
//     return 0;

// #include <stdio.h>
// #include <stdlib.h>
// #include "str1.h"

// int* memory(int size){
//     int *ptr = (int*)malloc(size * sizeof(int)); 

//     for(int i = 0 ; i < size; i++){
//         scanf("%d" , &ptr[i]);
//     }

//     for(int i = 0 ; i < size ; i++){
//         ptr[i] = ptr[i] + 2 ; 
//     }

// return ptr ;
// }

//=========================================================================================================//

//УКАЗАТЕЛЬ БЕЗ ДИНАМИЧЕСКОГО МАССИВА ТИПА int,ОБЫЧНЫЙ!

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "str1.h"

// int main()
// {

// int N ;
// int arr[100] ;

// scanf("%d" , &N); 

// memory(N,arr);


//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include "str1.h"

// void memory(int size ,int *arr){


//     for(int i = 0 ; i < size; i++){
//         scanf("%d" , &arr[i]);
//     }

//     for(int i = 0 ; i < size ; i++){
//         printf("%d" , arr[i]);
//     }
// }

//=========================================================================================================//

//УКАЗАТЕЛЬ БЕЗ ДИНАМИЧЕСКОГО МАССИВА ТИПА char,ОБЫЧНЫЙ!

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "str1.h"

// int main()
// {

// char arr[100] ;

// memory(arr);


//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include "str1.h"

// void memory(char *arr){

// fgets(arr , 100 , stdin); 

//     for(int i = 0 ; arr[i] != '\0'; i++){
//         if(arr[i] >= 'a' && arr[i] <= 'z'){
//             arr[i] -= 32;
//         }else if(arr[i] >= 'A' && arr[i] <= 'Z'){
//             arr[i] += 32;
//         }
//     }

//         printf("%s" , arr);
// }

//=========================================================================================================//

//CОРТИРОВКА ПУЗЫРЬКОВЫМ МЕТОДОМ

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "sheet_one.h"
// #include "sheet_two.h"


// int main()
// {

// int *arr_one , *arr_second; 
// int size;

// scanf("%d" , &size);

// arr_one = memory_one(size);
// printf("input_one : \n");
// input(arr_one , size); 
// bubble(arr_one,size);

//     printf("First :  \n");

//     for(int i = 0 ; i < size ; i++){
//         printf("%d " , arr_one[i]);
//     }


// return 0; 
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include "sheet_one.h"

// int* memory_one(int size){
//     return (int*)malloc(size * sizeof(int));
// }

// extern void input(int *arr, int size)
// {
//     for(int i = 0 ; i < size; i++){
//         scanf("%d" , &arr[i]);
//     }
// }

// void bubble(int *arr , int size){
//     for(int i = 0 ; i < size - 1 ; i++){
//         for(int j = 0 ; j < size ;j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp ;
//             }
//         }
//     }
// }

//=========================================================================================================//

//CОРТИРОВКА МЕТОДОМ ВСТАВКОЙ

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "sheet_one.h"
// #include "sheet_two.h"


// int main()
// {

// int *arr_one , *arr_second; 
// int size;

// scanf("%d" , &size);

// arr_second = memory_two(size);
// printf("input_second : \n");
// input(arr_second , size); 
// table(arr_second , size); 

//     printf("second : \n");

//     for(int i = 0 ; i < size ; i++){
//         printf("%d " , arr_second[i]);
//     }

// return 0; 
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include "sheet_two.h"

// int* memory_two(int size){
//     return (int*)malloc(size * sizeof(int));
// }

// void table(int *arr ,int size){
//     for(int i = 1 ; i < size ; i++){
//         int emp = i ; 
//         while(emp > 0 && arr[emp-1] > arr[emp]){
//             int temp = arr[emp-1]; 
//             arr[emp-1] = arr[emp]; 
//             arr[emp] = temp ; 
//             emp--; 
//         }
//     }
// }

//=========================================================================================================//

//РЕКУРСИЯ ПРИМЕР

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void curs(int size) ;

// int main()
// {

// int number; 
// scanf("%d" , &number);
// curs(number);

// return 0; 
// }


// void curs(int size){

// char str[10]; 
// int i = 0;

// if(size < 0){
//     putchar(str[i++] = '-'); 
//     size *= -1 ;
// }

// if(size / 10){
//     curs(size / 10);  // 1234   123 12 1 
// }

// putchar(str[i++] = (size % 10) + '0');    // 1 12 123 1234

// str[i] = '\0';

// }

//=========================================================================================================//

//ПОДСЧЁТ БУКВ ИЗ АЛФАВИТА!!!!!!

//=========================================================================================================//

// bool IsIsogram(const char *string);

// int main()
// {

//     char str_one[] = "aA";

//     int res = IsIsogram(str_one);
//     printf("%d", res);

//     return 0;
// }

// bool IsIsogram(const char *string)
// {
//     int flag = 0;
//     int len = strlen(string);
//     unsigned char ch;
//     bool table[256] = {false}; //ВОТ ТУТ 

//     for (int i = 0; string[i] != '\0'; i++)
//     {

//         if ((string[i] >= 'A' && string[i] <= 'Z'))
//         {
//             ch = string[i] + 32;
//             if (table[(unsigned char)ch])
//             {
//                 flag = 1;
//                 break;
//             }
//             table[ch] = true;
//         }
//         else
//         {
//             ch = string[i];
//             if (table[(unsigned char)ch]) //ТУТ 
//             {
//                 flag = 1;
//                 break;
//             }
//             table[ch] = true;
//         }
//     }

//     return (flag == 1) ? false : true;
// }

//=========================================================================================================//

//СТРУКТУРА С ДИНАМИЧЕСКОЙ ПАМЯТЬЮ !!!!!!

//=========================================================================================================//

// typedef struct people
// {
//     char name[20]; 
//     int age;
// }pepe;



// int main()
// {

// int n = 1 ;

// pepe *person = (struct people*)malloc(n * sizeof(struct people));

// for(int i = 0 ; i < n ;i++){
//     scanf("%s" , person[i].name);
//     scanf("%d" , &person[i].age);
// }

// printf("NEXT    ::::::::   \n");

// for(int i = 0 ; i < n ;i++){
//     printf("NAME : %s AGE :  %d\n" , person[i].name , person[i].age);
// }

// free(person); 

//     return 0;
// }

//=========================================================================================================//

//ПРИМЕР НОМЕРА РАНДОМНОГО )))

//=========================================================================================================//

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>

// bool is_valid_ip(const char * arr); 

// int main() {
//     const char *ip = "abc.def.ghi.jkl";  // Пример корректного IP-адреса

//     if (is_valid_ip(ip)) {
//         printf("true\n");  // Если IP-адрес корректный
//     } else {
//         printf("false\n"); // Если IP-адрес некорректный
//     }

//     return 0;
// }

// bool is_valid_ip(const char * arr) {

// char len = strlen(arr); 
// char str[len]; 
// int j = 0  , num = 0 , flag = 0 , count = 0;

// for(int i = 0 ; arr[i] != '\0' ; i++){
//     if(arr[i] != '.' && arr[i] != '\n'){
//         if(arr[i] == ' '){
//             return false ;
//         }
//         if(arr[i] >= 'A' && arr[i] <= 'z'){
//             return false ;
//         }
//         if(arr[i] == '-'){
//             return false ; 
//         }
//         str[j++] = arr[i] ; 
//     }else{
//         if(j > 0){
//             str[j] = '\0'; 
//             if(str[0] == '0'){
//                 if(str[0] == '0' && (str[1] >= '0' && str[1] <= '9')){
//                     return false ; 
//                 }
//                 flag = 1; 
//             }
//             num = atoi(str); 
//             if(num < 256){
//                 flag = 1; 
//                 count++; 
//             }else{
//                 flag = 0 ;
//                 return false ;
//             }
//         }
//         j = 0 ;
//         num = 0; 
//     }
// }


//         if(j > 0){
//             str[j] = '\0' ;
//             if(str[0] == '0'){
//                 if(str[0] == '0' && (str[1] >= '0' && str[1] <= '9')){
//                     return false ; 
//                 }
//                 flag = 1; 
//             }
//             num = atoi(str); 
//             if(num < 256){
//                 flag = 1; 
//                 count++; 
//             }else{
//                 flag = 0 ;
//                 return false ;
//             }
//         }

// printf("%d \n" , count); 


// if(count == 4){
//     return true ;
// }else{
//     false ; 
// }
// }