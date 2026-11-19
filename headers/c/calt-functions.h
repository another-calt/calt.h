

#define println(out) _Generic((out), \
    int: printf("%d\n", (out)), \
    float: printf("%f\n", (out)), \
    double: printf("%f\n", (out)), \
    char: printf("%c\n", (out)),  \
    char*: printf("%s\n", (out)),  \
    const char*: printf("%s\n", (out)),  \
    default: printf("[unknown print type]"))


