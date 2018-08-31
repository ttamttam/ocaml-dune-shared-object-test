#include <assert.h>
#include <caml/callback.h>
#include <caml/memory.h>

#include "myclib.h"

__attribute__((__constructor__))
void init_mylib(void){
  char_os *vide[1] = { NULL };
  caml_startup(vide);
}

int do_add(int a, int b){
  static value *cbk = NULL;
  if (!cbk)
    cbk= caml_named_value("mylib_add");
  assert(cbk);
  return Int_val(caml_callback2(*cbk, Val_int(a), Val_int(b)));
}

int do_substract(int a, int b){
  static value *cbk = NULL;
  if (!cbk)
    cbk= caml_named_value("mylib_sub");
  assert(cbk);
  return Int_val(caml_callback2(*cbk, Val_int(a), Val_int(b)));
}
