(* fonction recursive *)
let rec fibonacci_recursive n =
  match n with
  | 0 -> 0
  | 1 -> 1
  | _ -> fibonacci_recursive (n - 1) + fibonacci_recursive (n - 2)

(* fonction iterative *)
let fibonacci_iterative n =
  let a = ref 0 in
  let b = ref 1 in
  for i = 0 to n - 1 do
    let c = !a + !b in
    a := !b;
    b := c
  done;
