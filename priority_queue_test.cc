#include "priority_queue.h"
#include <gtest/gtest.h>

// TEST(testCaseName, testName){
//   ... test body ...
// }


TEST(PriorityQueueTest,Trivial){
	templatePriorityQueue<int> test_target;

	//Test 1 - Initalize
	ASSERT_TRUE(test_target.empty()); // empty test

	//Test 2 - Push Datas and Top size
	test_target.push(1);
	test_target.push(4);
	test_target.push(2);
	test_target.push(3);
	test_target.push(8);
	test_target.push(5);
	
	ASSERT_EQ(test_target.size(),6); // Pushed 6 elements
	ASSERT_EQ(test_target.top(),8);  // The highest pushed value is 8
	ASSERT_FALSE(test_target.empty()); // it must not empty

	//Test 3 - pop test

	test_target.pop();
	test_target.pop();
	test_target.pop();
	
	ASSERT_EQ(test_target.top(),3); // The highest pushed value is 3
	ASSERT_EQ(test_target.size(),3); // Poped 3 elements
	ASSERT_FALSE(test_target.empty()); // it must not empty

	test_target.pop();
	test_target.pop();
	test_target.pop();
	
	ASSERT_TRUE(test_target.empty()); // it must empty
	
	//***** Fail Example - If you activate this code, Test will be fail *
	//test_target.pop();
	
	//***** non-Fatal Failure - not terminate this test case when result of empty method is false.
	//EXPECT_TRUE(test_target.empty()); 
	
	//ASSERT_EQ(test_target.size(),0);
        	
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
