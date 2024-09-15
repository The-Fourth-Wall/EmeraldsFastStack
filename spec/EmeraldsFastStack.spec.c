#include "../libs/cSpec/export/cSpec.h"
#include "stack_base.module.spec.h"

int main(void) {
  cspec_run_suite("all", { T_stack_base(); });
}
