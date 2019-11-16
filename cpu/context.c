#include "cpu.h"

void context_create(void *ctx, void *fn, void *reap){
	context_t *c=(context_t*)ctx;
	c->cpsr=CPSR_MODE_SYS;
  	c->lr=(uint)reap;
  	c->pc=(uint)fn;
}
