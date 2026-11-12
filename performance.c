/*Recreating the student performance code in C*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

typedef const char *string;
typedef struct 
{
    string name;
    int scores[3];
}
students;

float find_average(string name);
int main(void)
{
    return find_average("Jordan");    
}

float find_average(string name) 
{
        // Students data these initialisation method is used other than the previous assignment method 
    
    students student[] = {
        {"Jordan", {0, 0, 0}},
        {"Jude", {97, 34, 89}},
        {"Sarah", {90, 85, 92}},
        {"David", {90, 75, 80}},
        {"Miracle", {78, 94, 81}},
        {"Michael", {60, 70, 65}}
    };

    bool verify = false;

    size_t length = sizeof(student) / sizeof(student[0]);
    for (int i = 0; i < length; i++)
    {
/*Getting the iteration of the scores*/
        int count = 0;

        size_t score_length = sizeof(student[i].scores) / sizeof(student[i].scores[0]);
        if (strcmp(name, student[i].name) == 0) 
        {
            verify = true;
            for (int j = 0; j < score_length; j++)
            {
                int score = student[i].scores[j];
                count += score;
            }

            float average = (float)count / score_length;

                // Edge case for student with poor grade.

            if (average <= 0.0) 
            {
                printf("Poor grade, student average is low\n");
            }

            else if (average >= 70.0)
            {
                printf("Student passed\n");
            }

            else 
            {
                printf("%2.1f", average);
            } 
        }

    }

    if (verify == false)
    {
        printf("Student not available\n");
    }

    return 0.0f;
}

