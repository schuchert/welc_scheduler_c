#include "test_utility.h"

#include <CUnit/Basic.h>
#include <stdlib.h>

void TU_perform_exit(void) {
	CU_cleanup_registry();
	exit(CU_get_error());
}
