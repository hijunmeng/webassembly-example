(module
 (table 0 anyfunc)
 (memory $0 1)
 (export "memory" (memory $0))
 (export "main" (func $main))
 (export "sum" (func $sum))
 (export "getString" (func $getString))
 (func $main (; 0 ;) (result i32)
  (i32.const 42)
 )
 (func $sum (; 1 ;) (param $0 i32) (param $1 i32) (result i32)
  (i32.add
   (get_local $1)
   (get_local $0)
  )
 )
 (func $getString (; 2 ;) (param $0 i32) (result i32)
  (get_local $0)
 )
)