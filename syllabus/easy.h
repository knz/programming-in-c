
typedef char *string;
#define addr_of(X) (&(X))
#define ref(X) addr_of(X)
#define deref(X)   (*(X))

typedef char *ref_to_char;
typedef int *ref_to_int;
typedef unsigned *ref_to_unsigned_int;
typedef long *ref_to_long;
typedef unsigned long *ref_to_unsigned_long;
typedef string *ref_to_string;
#define ref_to(T) T*
