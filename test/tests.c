#include "ctest.h"
#include "menu.h"
#include "vubortemy.h"
#include "vuborx.h"
#include "vvod.h"

CTEST(enter, check_word_equal)
{
    char* a = "tea";
    char* b = "tea";
    int real = check_word(a, b);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, check_word_registr)
{
    char* a = "tea";
    char* b = "Tea";
    int real = check_word(a, b);
    unsigned int exp = 0;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, check_word_diff)
{
    char* a = "tea";
    char* b = "water";
    int real = check_word(a, b);
    unsigned int exp = 0;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, check_word_empty)
{
    char* a = "";
    char* b = "";
    int real = check_word(a, b);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, Exit_if_BACK_b)
{
    int s = 98;
    int real = backmenu(s);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, Exit_if_BACK_m)
{
    int s = 109;
    int real = back_m(s);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vvod_correct)
{
    char key = '1';
    int real = proverkavvoda(key);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vvod_no_correct)
{
    char key = '9';
    int real = proverkavvoda(key);
    unsigned int exp = 0;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vubor_no_correct)
{
    char key = 'f';
    int real = proverkavvoda1(key);
    unsigned int exp = 0;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vubor_correct)
{
    char key = '1';
    int real = proverkavvoda1(key);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vubor_correct_1)
{
    char key = 'z';
    int real = proverkavvoda1(key);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vuborx_correct)
{
    char key = '1';
    int real = proverkavvoda2(key);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vuborx_correct_1)
{
    char key = 'm';
    int real = proverkavvoda2(key);
    unsigned int exp = 1;
    ASSERT_EQUAL(real, exp);
}

CTEST(enter, vuborx_no_correct)
{
    char key = 'z';
    int real = proverkavvoda2(key);
    unsigned int exp = 0;
    ASSERT_EQUAL(real, exp);
}
