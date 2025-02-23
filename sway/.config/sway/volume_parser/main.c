#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *remove_text(char *str) {
  char *new_str;
  int j;

  if (!str) {
    return (NULL);
  }
  new_str = calloc(6, sizeof(char));
  j = 0;
  for (int i = 0; str[i]; i++) {
    if (isdigit(str[i]) != 0 || str[i] == '.') {
      new_str[j++] = str[i];
    }
  }
  return (new_str);
}

int get_volume_percentage(const char *str) {
  float volume;
  int volume_percentage;

  volume = strtof(str, NULL);
  volume_percentage = volume * 100;
  return (volume_percentage);
}

int main(int argc, char **argv) {
  char *unparsed_string;
  char *parsed_string;

  if (argc != 2) {
    fprintf(stderr, "Error: Usage: volume_parser <string>");
    return (1);
  }
  unparsed_string = argv[1];
  parsed_string = remove_text(unparsed_string);
  printf("%d%%", get_volume_percentage(parsed_string));
  free(parsed_string);
  return (0);
}
