/* strlen: return leangth of a string by address arithmetic */
size_t strlen(char* s) {
    char* p = s;
    while (*p != '\0')
        ++p;
    return p - s;
}