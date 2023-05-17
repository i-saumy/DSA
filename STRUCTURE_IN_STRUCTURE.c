
#include <stdio.h>

struct address
{
    char phone[15];
    char city[25];
    int pin;
};
struct emp
{
    char name[25];
    struct address adr;
};
int main()
{
    struct emp e = {"SAUMY", "2105825", "Patna", 800003};
    printf("\nName = %s phone = %s", e.name, e.adr.phone);
    printf("\nCity = %s Pin =%d", e.adr.city, e.adr.pin);
}
