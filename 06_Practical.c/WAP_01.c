#include <stdio.h>
// Define an enumeration for the days of the week
enum Day
{
    Sunday,    // Default value is 0
    Monday,    // Default value is 1
    Tuesday,   // Default value is 2
    Wednesday, // Default value is 3
    Thursday,  // Default value is 4
    Friday,    // Default value is 5
    Saturday   // Default value is 6
};
#include <stdio.h>
int main()
{
    enum Day today;
    printf("Enter a number (0-6) to represent a day of the week: ");
    scanf("%d", &today);
    switch (today)
    {
    case Sunday:
        printf("Today is Sunday.\n");
        break;
    case Monday:
        printf("Today is Monday.\n");
        break;
    case Tuesday:
        printf("Today is Tuesday.\n");
        break;
    case Wednesday:
        printf("Today is wednesday.\n");
        break;
    case Thursday:
        printf("Today is Thursday.\n");
        break;
    case Friday:
        printf("Today is Friday.\n");
        break;
    case Saturday:
        printf("Today is saturday.\n");
        break;
    default:
        printf("Invalid input! Please enter a number between 0 and 6.\n");
    }
    return 0;
}