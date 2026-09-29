//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    int day;
    int month;
    int year;

    day = 0;
    month = 0;
    year = 0;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month)
    {
        case 1:
            printf("%02d-Jan-%04d\n", day, year);
            break;
        case 2:
            printf("%02d-Feb-%04d\n", day, year);
            break;
        case 3:
            printf("%02d-Mar-%04d\n", day, year);
            break;
        case 4:
            printf("%02d-Apr-%04d\n", day, year);
            break;
        case 5:
            printf("%02d-May-%04d\n", day, year);
            break;
        case 6:
            printf("%02d-Jun-%04d\n", day, year);
            break;
        case 7:
            printf("%02d-Jul-%04d\n", day, year);
            break;
        case 8:
            printf("%02d-Aug-%04d\n", day, year);
            break;
        case 9:
            printf("%02d-Sep-%04d\n", day, year);
            break;
        case 10:
            printf("%02d-Oct-%04d\n", day, year);
            break;
        case 11:
            printf("%02d-Nov-%04d\n", day, year);
            break;
        case 12:
            printf("%02d-Dec-%04d\n", day, year);
            break;
        default:
            printf("Invalid month\n");
    }

    return 0;
}