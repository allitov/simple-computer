#define MYBIGCHARS_H
#endif //MYBIGCHARS_H

int bc_bigcharwrite(int fd, int *big, int count);
int bc_bigcharread(int fd, int *big, int need_count, int *count);
