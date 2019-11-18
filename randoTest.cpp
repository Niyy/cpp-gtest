/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WITHIN RANDO CLASS:

	bool isDivisibleBy(int,int);
		
	bool isPalindrome(string);

	unsigned int mostPopularDigit(unsigned int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* TEST(<The thing you want to test>, <Name of failure>) TEST is what you want to name all your test functions */
TEST(RandoTest, sanityCheck)
{
	Rando rando;
	ASSERT_TRUE( true );
}


TEST(RandoTest, mostPopulareZero)
{
	Rando rando;

	ASSERT_EQ(rando.mostPopularDigit(0), 0);
}


TEST(RandoTest, mostPopulareTie)
{
	Rando rando;

	ASSERT_EQ(rando.mostPopularDigit(331311), -1);
}

TEST(RandoTest, mostPopulareTenWayTie)
{
	Rando rando;

	ASSERT_EQ(rando.mostPopularDigit(1234567890), -1);
}

TEST(RandoTest, mostPopulareTenWayTie)
{
	Rando rando;

	ASSERT_EQ(rando.mostPopularDigit(31311), 1);
}


TEST(RandoTest, mostPopulareTenWayTie)
{
	Rando rando;

	ASSERT_EQ(rando.mostPopularDigit(222), 2);
}


TEST(RandoTest, mostPopulareTenWayTie)
{
	Rando rando;

	ASSERT_EQ(rando.mostPopularDigit('a'), -1);
}
