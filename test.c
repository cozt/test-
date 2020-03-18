#include <ctype.h>
#include <stdio.h>
void count() {
printf("Enter lines of text here: .../n");
int c, nc = 0, nt = 0, nbackslash = 0, nl=0;
while ((c = fgetc(stderr)) != EOF) {
if (c == '\n') { ++nl;
} else if (c == '\t') { ++nt;
} else if (c == '\\') { nbackslash += 1;
} else if (isspace(c)) { ++nc; }
printf("lines: %d\n", nl);
printf("tabs: %d\n", nt);
printf("backslashes: %d\n", nbackslash);
printf("alphanumeric: %d\n", nc);
}
}
int main(int argc, const char* argv[]) {
count();
return 0;
}
// 1) char *strchr(const char *s, char *c)
// 2) size_t strspn(const char *s, const char *t)
// 3) exit(0);
// 4) fopen("midterm.txt", "r");

/*char* strcpy(char* s, const char* t) {
  char* p = s;
  while ((*s++ = *t++) != '\0') { }

  return p;
}*/

/* char* strncat(char* s, const char* t, size_t n) {
  char* p = s;

  while (*s != '\0') { ++s; }
  while (n-- > 0 && *t != '\0') {
    *s++ = *t++;
  }

  *s = '\0';
  return p;
}*/

/* int strcmp(const char* s, const char* t) {
  while (*s != '\0' && *t != '\0' && *s == *t) {
    ++s;
    ++t;
  }
  return *s - *t;
}*/
