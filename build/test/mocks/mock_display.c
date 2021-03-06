/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_display.h"

typedef struct _CMOCK_Draw_Int_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  int Expected_cmock_arg1;

} CMOCK_Draw_Int_CALL_INSTANCE;

static struct mock_displayInstance
{
  int Draw_Int_IgnoreBool;
  CMOCK_Draw_Int_CALLBACK Draw_Int_CallbackFunctionPointer;
  int Draw_Int_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Draw_Int_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_display_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.Draw_Int_IgnoreBool)
    Mock.Draw_Int_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Draw_Int_CallInstance, cmock_line, "Function 'Draw_Int' called less times than expected.");
  if (Mock.Draw_Int_CallbackFunctionPointer != NULL)
    Mock.Draw_Int_CallInstance = CMOCK_GUTS_NONE;
}

void mock_display_Init(void)
{
  mock_display_Destroy();
}

void mock_display_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.Draw_Int_CallbackFunctionPointer = NULL;
  Mock.Draw_Int_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void Draw_Int(int cmock_arg1)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Draw_Int_CALL_INSTANCE* cmock_call_instance = (CMOCK_Draw_Int_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Draw_Int_CallInstance);
  Mock.Draw_Int_CallInstance = CMock_Guts_MemNext(Mock.Draw_Int_CallInstance);
  if (Mock.Draw_Int_IgnoreBool)
  {
    return;
  }
  if (Mock.Draw_Int_CallbackFunctionPointer != NULL)
  {
    Mock.Draw_Int_CallbackFunctionPointer(cmock_arg1, Mock.Draw_Int_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'Draw_Int' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Draw_Int' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Draw_Int' called later than expected.");
  {
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, cmock_line, "Function 'Draw_Int' called with unexpected value for argument 'cmock_arg1'.");
  }
}

void CMockExpectParameters_Draw_Int(CMOCK_Draw_Int_CALL_INSTANCE* cmock_call_instance, int cmock_arg1)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
}

void Draw_Int_CMockIgnore(void)
{
  Mock.Draw_Int_IgnoreBool = (int)1;
}

void Draw_Int_CMockExpect(UNITY_LINE_TYPE cmock_line, int cmock_arg1)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Draw_Int_CALL_INSTANCE));
  CMOCK_Draw_Int_CALL_INSTANCE* cmock_call_instance = (CMOCK_Draw_Int_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Draw_Int_CallInstance = CMock_Guts_MemChain(Mock.Draw_Int_CallInstance, cmock_guts_index);
  Mock.Draw_Int_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_Draw_Int(cmock_call_instance, cmock_arg1);
}

void Draw_Int_StubWithCallback(CMOCK_Draw_Int_CALLBACK Callback)
{
  Mock.Draw_Int_CallbackFunctionPointer = Callback;
}

