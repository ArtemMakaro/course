#include "vuborx.h"
#include "look.h"
#include "menu.h"
#include "test.h"
#include "vubortemy.h"
#include "vvod.h"
#define ESCAPE 27
#define ENTER 13
#define BACK 9

int proverkavvoda2(char key) {
  if (key == '1' || key == '2' || key == '3' || key == '4' || key == 'm') {
    return 1;
  } else {
    return 0;
  }
}

void vuborx(int a) {
  setlocale(LC_ALL, "UTF-8");
  char key;
  FILE *file;
  do {
    print2();
    scanf("%c%*c", &key);
    if (proverkavvoda2(key)) {
      switch (a) {
      case '0':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Colors.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Colors.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '1':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Sport.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Sport.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '2':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Drinks.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Drinks.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '3':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Food.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Food.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '4':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Transport.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Transport.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '5':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Family.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Family.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '6':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Dayandmonth.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Dayandmonth.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '7':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Inter.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Inter.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '8':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Animals.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Animals.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      case '9':
        system("clear");
        switch (key) {
        case '1':
          system("clear");
          file = fopen("file/Professii.txt", "r");
          test(file, a);
          break;
        case '2':
          system("clear");
          file = fopen("file/Professii.txt", "r");
          look(file, a);
          break;
        case '3':
          system("clear");
          vubortemy();
          break;
        case '4':
          system("clear");
          printf("До новых встреч!\n");
          return;
          break;
        case 'm':
          system("clear");
          vvod();
          break;
        }
        break;
      }
    }
  } while (key != '1' && key != '2' && key != '3' && key != '4' && key != 'm');
}
