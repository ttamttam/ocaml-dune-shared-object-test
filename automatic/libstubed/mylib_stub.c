#include <assert.h>
#include <caml/callback.h>
#include <caml/memory.h>

#include "myclib.h"

static int mylib_init_done = 0;

value dummy(value u){
  CAMLparam1(u);
  CAMLreturn(Val_unit);
}

int init_done(){
  return mylib_init_done;
}

void init_mylib(){
  char_os *vide[1];
  vide[0] = NULL;
  if (!mylib_init_done){
    caml_startup(vide);
    mylib_init_done = 1;
  }
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
