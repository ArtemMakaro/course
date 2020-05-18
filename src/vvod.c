#include "vvod.h"
#include "authors.h"
#include "menu.h"
#include "pravila.h"
#include "vubortemy.h"

int proverkavvoda(char key)
{
    if (key == '0' || key == '1' || key == '2' || key == '3') {
        return 1;
    } else {
        return 0;
    }
}

void vvod()
{
    setlocale(LC_ALL, "UTF-8");
    char key;
    do {
        system("clear");
        menu();
        scanf("%c%*c", &key);
        if (proverkavvoda(key)) {
            switch (key) {
            case '0':
                system("clear");
                pravila();
                break;
            case '1':
                system("clear");
                vubortemy();
                break;
            case '2':
                system("clear");
                authors();
                break;
            case '3':
                system("clear");
                printf("До новых встреч!\n");
                return;
                break;
            default:
                break;
            }
        }
    } while (key != '0' && key != '1' && key != '2' && key != '3');
}
