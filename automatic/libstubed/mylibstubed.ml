
(* Never used external, to force C stub to be linked *)
external dummy: unit -> unit = "dummy"

let () =
  Callback.register "mylib_add" Mylib.add;
  Callback.register "mylib_sub" Mylib.substract
