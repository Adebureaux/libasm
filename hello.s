
          global    writer
          extern    puts

          section   .text
writer:                                       ; This is called by the C library startup code
          mov       rdi, message            ; First integer (or pointer) argument in rdi
          call      puts                    ; puts(message)
          ret                               ; Return from main back into C library wrapper
message:
          db        "Hola, mundo", 0        ; Note strings must be terminated with 0 in C
