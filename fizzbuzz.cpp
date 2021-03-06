// fizzbuzz.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
/* stdafx does not allow io by default.  Edited it to allow IO and strings. */
//
/* Comment style, using bracketed comments for a potentially multi line paragraph
regardless of whether it is actually multi line.  Using line comments between
paragraphs and for terse standard comments. */
//
/* Comment style, using paragraphs and punctuation for non terse comments. */
//
int main()
{
	for (int i{ 1 }; i <= 100; i++) {
		char str[21]{ "" };
		/* String size 11 would suffice, but a buffer overflow would ensue if the range went past 104
		String size 21 cannot have a buffer overfllow */
		int len{ 0 };
		if (i % 3 == 0) {
			strcpy_s(str, "Fizz ");
			len += 5;
		}
		if (i % 5 == 0) {
			strcpy_s(str + len, sizeof(str-len),"Buzz ");
			len += 5;
		}
		if (i % 7 == 0) {
			strcpy_s(str + len, sizeof(str - len), "Beep ");
			len += 5;
		}
		if (i % 11 == 0) {
			strcpy_s(str + len, sizeof(str - len), "Boop ");
		}
		if (str[0]) std::cout << str;
		else std::cout << i;
		std::cout << "\n";
	}
	const std::string hello{ "hello" };
	const std::string world{ "world" };
	std::cout << hello + " " + world << std::endl;  /* std::endl outputs a \n
													and also flushes the buffer */
													/* Which is why \n inside loop, but std::endl at completion of program */
													//
													/* This flush is probably redundant, because the environment is going to
													perform a get character  on program completion, which will force a flush
													but inside the loop, a flush would definitely be redundant and possibly
													harmful. */
													//
	//clear buffer, wait for input to close program
	std::cin.clear(); std::cin.ignore(INT_MAX, '\n');
	//std::cin.get();
	return 0;
}

