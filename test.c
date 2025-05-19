# 0 "src/main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/main.c"
# 13 "src/main.c"
# 1 "./util/apis/core.h" 1
# 25 "./util/apis/core.h"
typedef unsigned char t_u8;





typedef unsigned short t_u16;





typedef unsigned int t_u32;





typedef unsigned long long t_u64;





typedef unsigned long long t_size;





typedef char t_i8;





typedef short t_i16;





typedef int t_i32;





typedef long long t_i64;





typedef long long t_isize;





typedef float t_f32;





typedef double t_f64;





typedef char * t_cstr;
# 107 "./util/apis/core.h"
typedef t_cstr *t_carr_cstr;




typedef enum e_result
{
 OK,
 FAIL
} t_result;




typedef enum e_bool
{
 FALSE,
 TRUE
} t_bool;




typedef enum e_flow
{
 BREAK,
 CONTINUE
} t_flow;




typedef struct s_span
{
 t_size start;
 t_size len;
} t_span;




typedef struct s_range
{
 t_size start;
 t_size end;
} t_range;

t_vstr __attribute__((warn_unused_result))
vlit(t_cstr cstr);

t_span __attribute__((warn_unused_result))
span(t_size start, t_size len);

t_range __attribute__((warn_unused_result))
range(t_size start, t_size end);

t_result __attribute__((warn_unused_result))
assert(t_bool condition, t_cstr message);

t_result
debug(t_bool condition, t_cstr message);
# 14 "src/main.c" 2

t_i32 main(t_i32 ac, t_cstr av[], t_carr_cstr envp)
{
 (void)ac;
 (void)av;
 (void)envp;
}
