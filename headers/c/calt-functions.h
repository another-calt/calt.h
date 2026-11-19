

#define println(out) _Generic((out), \
    int: printf("%d\n",    (int)(x)), \
    double, float: printf("%f\n",    (double)(x)), \
    char*: printf("%s\n",    (char*)(x)),  \
    default: printf("[unknown print type]"))


