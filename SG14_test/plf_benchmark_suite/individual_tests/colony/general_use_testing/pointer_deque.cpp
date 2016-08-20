#include "../../../plf_bench.h"


int main(int argc, char **argv)
{
	output_to_csv_file(argv[0]);
	
	// Test 1%, 5%, 10% erasure/insertion of container content per minute of gameplay (assuming 60fps) for half an hour
	benchmark_range_general_use_percentage2< plf::pointer_deque<small_struct> >(100, 100000, 1.1, 108000, .00028, 1, 1, true);
	benchmark_range_general_use_percentage2< plf::pointer_deque<small_struct> >(100, 100000, 1.1, 108000, .00139, 1, 1, true);
	benchmark_range_general_use_percentage2< plf::pointer_deque<small_struct> >(100, 100000, 1.1, 108000, .00278, 1, 1, true);

	// Test 1%, 5%, 10% erasure/insertion of container content per frame (assuming 60fps) for half an hour
	benchmark_range_general_use_percentage< plf::pointer_deque<small_struct> >(100, 100000, 1.1, 108000, 1, 7, 4, true);
	benchmark_range_general_use_percentage< plf::pointer_deque<small_struct> >(100, 100000, 1.1, 108000, 5, 7, 4, true);
	benchmark_range_general_use_percentage< plf::pointer_deque<small_struct> >(100, 100000, 1.1, 108000, 10, 11, 2, true);

	// Test 1%, 5%, 10% erasure/insertion of container content per minute of gameplay (assuming 60fps) for half an hour, with remove_if erasure pattern
	benchmark_range_general_use_remove_if_percentage2< plf::pointer_deque<small_struct_bool> >(100, 100000, 1.1, 108000, .00028, 1, 1, true);
	benchmark_range_general_use_remove_if_percentage2< plf::pointer_deque<small_struct_bool> >(100, 100000, 1.1, 108000, .00139, 1, 1, true);
	benchmark_range_general_use_remove_if_percentage2< plf::pointer_deque<small_struct_bool> >(100, 100000, 1.1, 108000, .00278, 1, 1, true);

	// Test 1%, 5%, 10% erasure/insertion of container content per frame (assuming 60fps) for half an hour, using remove_if erasure pattern
	benchmark_range_general_use_remove_if_percentage< plf::pointer_deque<small_struct_bool> >(100, 100000, 1.1, 108000, 1, 7, 4, true);
	benchmark_range_general_use_remove_if_percentage< plf::pointer_deque<small_struct_bool> >(100, 100000, 1.1, 108000, 5, 7, 4, true);
	benchmark_range_general_use_remove_if_percentage< plf::pointer_deque<small_struct_bool> >(100, 100000, 1.1, 108000, 10, 11, 2, true);

	return 0;
}
