#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test 48 cookies")
{
	vector<double> test_48{1.5 , 1 , 2.75};
	REQUIRE(get_cookie_ingredients(48) == test_48);
}
	TEST_CASE("test 96 cookies")
{
	vector<double> test_96{3 , 2 , 5.5};
	REQUIRE(get_cookie_ingredients(96) == test_96);
}
	TEST_CASE("test 24 cookies")
{
	vector<double> test_24{0.75 , 0.5 , 1.375};
	REQUIRE(get_cookie_ingredients(24) == test_24);
}
