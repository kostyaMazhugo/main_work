#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct student
{
    int id;
    char *name;
    struct student *next;
} student;

char *copy_name(char *copy_name_student)
{
    int j = 0;
    int size = strlen(copy_name_student);
    char *main_copy_name = (char *)malloc((size + 1) * sizeof(char));
    for (int i = 0; copy_name_student[i] != '\0'; i++)
    {
        main_copy_name[j++] = copy_name_student[i];
    }

    main_copy_name[j] = '\0';

    return main_copy_name;
}

student *student_unit(int index_student, char *name_student)
{
    student *unit_new_return = (student *)malloc(sizeof(student));
    unit_new_return->id = index_student;
    unit_new_return->name = copy_name(name_student);
    unit_new_return->next = NULL;

    return unit_new_return;
}

void last_index_input(student **unit_first_header, int id_val, char *name_last_index)
{
    student *unit_temp = student_unit(id_val, name_last_index);
    if (*unit_first_header == NULL)
    {
        *unit_first_header = unit_temp;
        return;
    }

    student *unit_last_index = *unit_first_header;

    while (unit_last_index->next != NULL)
    {
        unit_last_index = unit_last_index->next;
    }

    unit_last_index->next = unit_temp;
}

void delete_student_index(student **unit_delete_header, int id_delete)
{
    student *unit_first_delete = *unit_delete_header;
    student *prev_unit_delete = NULL;

    if (unit_first_delete != NULL && unit_first_delete->id == id_delete)
    {
        *unit_delete_header = unit_first_delete->next;
        free(unit_first_delete);
        return;
    }

    while (unit_first_delete != NULL && unit_first_delete->id != id_delete)
    {
        prev_unit_delete = unit_first_delete;
        unit_first_delete = unit_first_delete->next;
    }

    prev_unit_delete->next = unit_first_delete->next;
}

student *search_student_id(student *search_header_student, int id_search_student)
{
    student *search_id = search_header_student;

    while (search_id != NULL && search_id->id != id_search_student)
    {
        search_id = search_id->next;
    }

    return search_id;
}

void student_print(student *unit_pr)
{
    while (unit_pr != NULL)
    {
        printf("id : %d   name : %s \n", unit_pr->id, unit_pr->name);
        unit_pr = unit_pr->next;
    }
}

void student_search_print(student *search_print_pr, int id_search_pr)
{
    student *search_pr = search_student_id(search_print_pr, id_search_pr);
    if (search_pr != NULL)
    {
        printf("id : %d  name : %s ", search_pr->id, search_pr->name);
    }
    else
    {
        printf("NOT SEARCH ERROR");
    }
}

void memory_student(student *header)
{
    student *temp;
    while (header != NULL)
    {
        temp = header;
        header = header->next;
        free(temp);
    }
}

int main()
{
    student *list_student = NULL;

    last_index_input(&list_student, 1, "kostya");
    last_index_input(&list_student, 2, "Misha");
    last_index_input(&list_student, 3, "Dima");
    last_index_input(&list_student, 4, "Artemy");

    student_print(list_student);

    printf("\n");
    delete_student_index(&list_student, 3);
    printf("DELETE STUDENT : \n");
    student_print(list_student);

    printf("\n");
    printf("SEARCH STUDENT : \n");
    student_search_print(list_student, 13);

    memory_student(list_student);

    return 0;
}
