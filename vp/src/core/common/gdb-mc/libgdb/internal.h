#ifndef GDB_PROTOCOL_FNS
#define GDB_PROTOCOL_FNS

#include <stddef.h>

#include <libgdb/parser2.h>

void *xrealloc(void *, size_t);
void *xmalloc(size_t);
char *xstrdup(char *);

gdb_command_t *gdb_new_cmd(char *, gdb_argument_t);

int calc_csum(const char *);
bool gdb_is_valid(gdb_packet_t *);
char *gdb_unescape(char *);
char *gdb_decode_runlen(char *);

#endif
