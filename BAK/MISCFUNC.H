#ifndef __TK__MISCFUNC__
#define __TK__MISCFUNC__
void change_name(int num);
char *k_2_c(int key);
int get_key(int x,int y);
void clear_shit(int y);

void set_keys();
void alusta_players1();
void alusta_players2();
void two_to_one();
void define_bullet_types();
void define_effects();
void explo(int x,int y,int size,Player *P,int index);
void list_files(int *no,vile *filelist,char *wildcard,int type);
void set_keyb_rate();

#endif

