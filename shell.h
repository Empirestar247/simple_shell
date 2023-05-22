#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * struct paths - structure for PATH variables
 * @dir: directory to search
 * @next: pointer to the next node
 */

typedef struct paths
{
	char *dir;
	struct paths *next;
} path_t;

int cmp_str(char *st1, char *st2);
char *dup_str(char *s);
char *on_alloc(char *o);
int itois(char *s);
void free_list(path_t *th);
void free_tkn(char **tkn_array);
void command_c(int sid);
int command_d(char *line);
int length_str(char *s);
char *concat_str(char *st1, char *st2);
char *st_concat(char *cat, char *st1, char *st2);
int p_tenths(int x, char *z);
void release_ev(char *j, char *new_j, char **ary);
char *_printers(int number);
int new_dir(char **ary, char **env);
int _environ(char **env);
int shell_exit(char **ary, char *j, char *new_j, int c_num);
int inbt(char **ary, char **env, char *j, char *new_j, int c_num);
void mistake_h(char **argv, char **ary, int cnum, char *j, char *new_j);
char *handpath(char *s, char **env);
char *receive_env(const char *joy, char **env);
path_t *appendix(char *s, path_t *lists);
path_t *dev_llist(char *s);
int _puts(char c);
int com_cmd(char **ary, char **env, char **y, char *j, char *new_j, int cn);
void prompts(void);
char **token_str(char *j);

#endif /*SHELL_H*/
