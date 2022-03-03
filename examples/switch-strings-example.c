#include <stdio.h>


int
main(void) {
  const char *lang = "C++";

#include <switch-strings>
  switch (lang) {
    case ("C") {
      puts("The language extensions is .c, .h");
      break;
    }

    case ("C++") {
      puts("The language extensions is .C, .cpp, .cc, .cxx, .c++, .h, .hpp, .hh, .hxx, .h++");
      break;
    }

    case ("Lua") {
      puts("The language extensions is .lua");
      break;
    }

    case ("Go", "Golang") {
      puts("The language extensions is .go");
      break;
    }

    default {
      puts("Nothing");
    }
  }_
#include <undef-switch-strings.h>

  return 0;
}
