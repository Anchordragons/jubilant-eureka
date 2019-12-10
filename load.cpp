//-----------------------load.c

#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <windows.h>
void LoadRun(const char * const s, const char* text ) 
{
void * lib;
void (*fun)(void);
lib = LoadLibrary(s);
if (!lib) 
 {
  printf("cannot open library '%s'\n", s);
  return;
 }
fun = (void (*)(void))GetProcAddress((HINSTANCE)lib, text);
 if (fun == NULL) 
  {
   printf("cannot load function func\n");
  } 
  else 
    {
     fun();
    }
FreeLibrary((HINSTANCE)lib);
}