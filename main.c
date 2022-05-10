/*
    Tag des Jahres
    Autor: Emily Cwienk
    Erstellt am: 29.03.2022
*/

#include <stdio.h>

int leapyear(year){

    if (year % 400 == 0) {
    printf("Jahr ist ein Schaltjahr"); // tag pro monat [2] = 29
    

    } else if (year % 4 == 0) {
        printf ("Jahr ist ein Schaltjahr"); // tag pro monat [2] = 29
    }

    return 0;
}

int main(){

int days_per_month[12] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];

int year = 0;
printf("Jahr:");
scanf("%i", &year);

int month = 0;
printf("Monat:");
scanf("%i", &month);

int day = 0;
printf("Tag:");
scanf("%i", &day);

int result = 0;

leapyear(year);

for (int i = 0; i < month - 1; i++)
{
    result += days_per_month[i];
}

result += day;

printf("Das Datum '%i. %i. %i' ist der %i. Tag des Jahres", day, month, year, result);


}