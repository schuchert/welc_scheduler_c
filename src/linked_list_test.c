#include <stdlib.h>
#include "test_utility.h"

#include "linked_list.h"

static linked_list *list;

static void init_list(void) {
	list = linked_list_create();
}

static void clean_list(void) {
	linked_list_destroy(list);
}

static void test_linked_list_create_destroy(void)  {
	init_list();

	CU_ASSERT(list != NULL);

	clean_list();
}

static void test_linked_list_initial_size(void) {
	init_list();

	CU_ASSERT_EQUAL(0, linked_list_size(list));

	clean_list();
}

static void test_adding_increments_list_size(void) {
	init_list();

	linked_list_add(list, "hello");
	CU_ASSERT_EQUAL(1, linked_list_size(list));

	clean_list();
}

static void test_iterate_across_list(void) {
	init_list();

	linked_list_add(list, "hello");
	linked_list_add(list, "world");
	list_iterator *iter = linked_list_begin(list);
	CU_ASSERT(linked_list_has_next(iter));
	CU_ASSERT_STRING_EQUAL("hello", linked_list_next(iter));
	CU_ASSERT_STRING_EQUAL("world", linked_list_next(iter));
	CU_ASSERT(linked_list_has_next(iter) == 0);

	clean_list();
}

void add_suite_linked_list(void) {
	CU_pSuite suite
		= CU_add_suite("linked_list", 0, 0);
	if(NULL == suite)
		TU_perform_exit();
	CU_ADD_TEST(suite, test_linked_list_create_destroy);
	CU_ADD_TEST(suite, test_linked_list_initial_size);
	CU_ADD_TEST(suite, test_adding_increments_list_size);
	CU_ADD_TEST(suite, test_iterate_across_list);
}
