// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <locale.h>
#include <ctime>
#include <iostream>
#include "textgen.h"
TEST(TEST1, TrueOrFalse) {
textgen text = textgen("Test1.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("Hi ; evetyone ; my ; name ; is ; Ilya ; and ; there ; "
"the ; first ; test ; for ; this ; lab ; ", text.getprefix());
}
