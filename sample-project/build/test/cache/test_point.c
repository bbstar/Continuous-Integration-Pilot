#include "mock_display.h"
#include "point.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_MakePoint_Returns_A_New_Point(void)

{

 struct point pt = MakePoint(3,4);

    UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((pt.x)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((pt.y)), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

}



void test_DrawPoint_Draws_Both_of_its_Coordinates(void)

{

    struct point pt = MakePoint(3,4);

    Draw_Int_CMockExpect(23, 3);

    Draw_Int_CMockExpect(24, 4);

    DrawPoint(pt);

}
