#include "pravila.h"
#include "vvod.h"

void pravila() {
  setlocale(LC_ALL, "UTF-8");
  char a;
  printf("1. Перед тем как приступить к тесту рекомендуем ознакомиться со "
         "словами "
         "из выбранной темы\n2. Слова в которых нужен пробел вводить через "
         "нижнее "
         "подчеркивание\n3. Слова в которых нужен дефис вводить через "
         "дефис\n4. Если в меню требуется выбрать цифру или букву, то при "
         "вводе последовательности учитывается только первый символ!");
  printf("Нажмите \"m\", чтобы вернуться в главное меню, любой другой "
         "символ "
         "для выхода из приложения:\n");
  scanf("%c%*c", &a);
  if (back_m(a)) {
    system("clear");
    vvod();
  } else {
    system("clear");
    printf("До новых встреч!\n");
    return;
  }
}
