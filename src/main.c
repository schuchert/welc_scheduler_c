#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

#include "test_utility.h"

int init_suite_example(void) {
	return 0;
}

int clean_suite_example(void) {
	return 0;
}

void testFunctionExample(void) {
	CU_ASSERT(1);
}

void add_suite_linked_list(void);


void register_all_suites() {
	add_suite_linked_list();
}

int main(void) {
	if(CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();
	register_all_suites();
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	TU_perform_exit();
	return 0;
}
