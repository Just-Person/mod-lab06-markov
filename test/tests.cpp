// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <ctime>
#include <locale>
#include "textgen.h"
TEST(TEST1, TrueOrFalse) {
textgen text = textgen("Test1.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("Hi ; evetyone ; my ; name ; is ; Ilya ; and ; there ; "
"the ; first ; test ; for ; this ; lab ; ", text.getprefix());
}
TEST(TEST2, TrueOrFalse) {
setlocale(LC_ALL, "rus");
textgen text = textgen("Test1.txt");
srand(time(NULL));
text.setprefixlength(3);
text.readfile();
EXPECT_EQ("Всем привет меня ; привет меня зовут ; меня зовут Илья ; "
"зовут Илья и ; Илья и это ; и это первый ; это первый тест ; первый "
"тест по ; тест по этой ; по этой лабораторной ; этой лабораторной "
"Всем ; лабораторной Всем привет ; ", text.getprefix());
}
TEST(TEST3, TrueOrFalse) {
setlocale(LC_ALL, "rus");
textgen text = textgen("Test2.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("Всем - привет ; привет - этот ; этот - текст ; текст - "
"создан ; создан - для ; для - первого второго третьего четвертого ; "
"первого - теста ; теста - для для для Всем ; второго - теста ; "
"третьего - теста ; четвертого - теста ; ", text.getall());
}
TEST(TEST4, TrueOrFalse) {
setlocale(LC_ALL, "rus");
textgen text = textgen("Test1.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("зовут", text.getsuffix(3));
}
TEST(TEST5, TrueOrFalse) {
setlocale(LC_ALL, "rus");
textgen text = textgen("Test2.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
std::cout << text.getsuffix(6, 3);
EXPECT_EQ("третьего", text.getsuffix(6, 3));
}
TEST(TEST6, TrueOrFalse) {
setlocale(LC_ALL, "rus");
textgen text = textgen("Test3.txt");
srand(time(NULL));
text.setprefixlength(5);
text.readfile();
text.generate(100);
EXPECT_EQ(100, text.getresultlength());
}
