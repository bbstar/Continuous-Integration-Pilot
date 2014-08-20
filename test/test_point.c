#include "unity.h"
#include "point.h"
#include "mock_display.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_MakePoint_Returns_A_New_Point(void)
{
	struct point pt = MakePoint(3,4);
    TEST_ASSERT_EQUAL_INT(3, pt.x);
    TEST_ASSERT_EQUAL_INT(4, pt.y);
}

void test_DrawPoint_Draws_Both_of_its_Coordinates(void)
{
    struct point pt = MakePoint(3,4);
    Draw_Int_Expect(3);
    Draw_Int_Expect(4);
    DrawPoint(pt);
}
