#include "cpptest.h"

CPPTEST_CONTEXT("../../../src/validate.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../../src/validate.c");

EXTERN_C_LINKAGE void TestSuite_validate_c_f8743fef_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_validate_c_f8743fef_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_validate_c_f8743fef);
CPPTEST_TEST_DS(TestSuite_validate_c_f8743fef_test_validateInputFormula, CPPTEST_DS("validateInputFormula"));
CPPTEST_TEST_DS(TestSuite_validate_c_f8743fef_test_checkValidFormula, CPPTEST_DS("checkValidFormula"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_validate_c_f8743fef_test_validateInputFormula(void);
void TestSuite_validate_c_f8743fef_test_checkValidFormula(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_validate_c_f8743fef);

void TestSuite_validate_c_f8743fef_setUp(void);
void TestSuite_validate_c_f8743fef_setUp(void)
{
}

void TestSuite_validate_c_f8743fef_tearDown(void);
void TestSuite_validate_c_f8743fef_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_validateInputFormula */
/* CPPTEST_TEST_CASE_CONTEXT _Bool validateInputFormula(char *) */
void TestSuite_validate_c_f8743fef_test_validateInputFormula()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>validateInputFormula</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_formula</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]formula")</value>
            </step>
        </step>
        <step id="CodeStep" version="1">
            <code><![CDATA[for (int i =0; i < MESS_NUM; i++) {]]></code>
            <code><![CDATA[    inputErrorMess[i] = '\0';]]></code>
            <code><![CDATA[}]]></code>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>bool _return</return>
            <name>validateInputFormula</name>
            <params>_formula</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_BOOL_EQUAL</type>
                <P1>CPPTEST_DS_GET_BOOL("[OUT]decision")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_CSTR_EQUAL</type>
                <P1>CPPTEST_DS_GET_CSTR("errorMessage")</P1>
                <P2>inputErrorMess</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _formula = CPPTEST_DS_GET_CSTR("[IN]formula");
for (int i =0; i < MESS_NUM; i++) {
    inputErrorMess[i] = '\0';
}
bool _return = validateInputFormula(_formula);
CPPTEST_ASSERT_BOOL_EQUAL(CPPTEST_DS_GET_BOOL("[OUT]decision"), _return);
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("errorMessage"), inputErrorMess);
}
/* CPPTEST_TEST_CASE_END test_validateInputFormula */

/* CPPTEST_TEST_CASE_BEGIN test_checkValidFormula */
/* CPPTEST_TEST_CASE_CONTEXT _Bool checkValidFormula(char *) */
void TestSuite_validate_c_f8743fef_test_checkValidFormula()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>checkValidFormula</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_formula</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]formula")</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>bool _return</return>
            <name>checkValidFormula</name>
            <params>_formula</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_BOOL_EQUAL</type>
                <P1>CPPTEST_DS_GET_BOOL("[OUT]decision")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _formula = CPPTEST_DS_GET_CSTR("[IN]formula");
bool _return = checkValidFormula(_formula);
CPPTEST_ASSERT_BOOL_EQUAL(CPPTEST_DS_GET_BOOL("[OUT]decision"), _return);
}
/* CPPTEST_TEST_CASE_END test_checkValidFormula */
