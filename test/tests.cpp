// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include "textgen.h"
#include <locale>
#include <ctime>
TEST(TEST1, TrueOrFalse) {
  setlocale(LC_ALL, "rus");
	textgen text = textgen("Test1.txt");
	srand(time(NULL));
	text.setprefixlength(1);
	text.readfile();
	std::cout << text.getall();
	for (int i = 0; i < 300; i++)
	{
		text.generate();
	}
	std::cout << text.getresultlength();
    EXPECT_EQ(States::WAIT, automata.getState());
}

TEST(TEST2, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.check();
    EXPECT_EQ(States::WAIT, automata.getState());
}

TEST(TEST3, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(10);
    automata.coin(10);
    automata.coin(10);
    EXPECT_EQ(States::ACCEPT, automata.getState());
}

TEST(TEST4, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(10);
    automata.coin(10);
    automata.coin(10);
    automata.choiceuser(1);
    EXPECT_EQ(States::CHOSEN, automata.getState());
}


TEST(TEST5, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(10);
    automata.coin(10);
    automata.coin(10);
    automata.choiceuser(1);
    automata.check();
    EXPECT_EQ(States::WAIT, automata.getState());
}

TEST(TEST6, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(100);
    automata.choiceuser(1);
    automata.check();
    EXPECT_EQ(States::MAKING, automata.getState());
}

TEST(TEST7, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(100);
    automata.choiceuser(1);
    automata.check();
    automata.cook();
    EXPECT_EQ(States::READY, automata.getState());
}

TEST(TEST8, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(100);
    automata.choiceuser(1);
    automata.check();
    automata.cook();
    EXPECT_EQ(40, automata.getCash());
}

TEST(TEST9, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(60);
    automata.choiceuser(1000);
    EXPECT_EQ(States::WAIT, automata.getState());
}

TEST(TEST10, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.cook();
    EXPECT_EQ(States::WAIT, automata.getState());
}

TEST(TEST11, TrueOrFalse) {
    Automata automata;
    automata.on();
    automata.coin(60);
    automata.choiceuser(1);
    automata.check();
    automata.cook();
    automata.finish();
    automata.off();
    EXPECT_EQ(States::OFF, automata.getState());
}
