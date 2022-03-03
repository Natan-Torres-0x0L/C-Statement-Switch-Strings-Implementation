#define switch(string) { char matched; char *stringA = (char *)string, *stringB, *stringC; do {
#define case(...) matched = 0; { const char *stringsL[] = { __VA_ARGS__, (char *)0 }; const char **strings = stringsL; for (; *strings; strings++) { stringB = stringA, stringC = (char *)*strings; while (*stringB && *stringC && *stringB == *stringC) stringB++, stringC++; if (!*stringB && !*stringC) { matched = 1; break; } } } if (matched)
#define default
#define _ } while (0); }
