#include "cpptest.h"

CPPTEST_CONTEXT("../../../src/polishnotation.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../../src/polishnotation.c");

EXTERN_C_LINKAGE void TestSuite_polishnotation_c_1dbfebd0_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_polishnotation_c_1dbfebd0_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_polishnotation_c_1dbfebd0);
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_toPolishNotation, CPPTEST_DS("toPolishNotation"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_calcPolishNotation, CPPTEST_DS("calcPolishNotation"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_calcFormula, CPPTEST_DS("calcFormula"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_calcPriority, CPPTEST_DS("calcPriority"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_pushChar, CPPTEST_DS("pushChar"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_popChar, CPPTEST_DS("popChar"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_pushDouble, CPPTEST_DS("pushDouble"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_pushOperator, CPPTEST_DS("pushOperator"));
CPPTEST_TEST_DS(TestSuite_polishnotation_c_1dbfebd0_test_popDouble, CPPTEST_DS("popDouble"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_polishnotation_c_1dbfebd0_test_toPolishNotation(void);
void TestSuite_polishnotation_c_1dbfebd0_test_calcPolishNotation(void);
void TestSuite_polishnotation_c_1dbfebd0_test_calcFormula(void);
void TestSuite_polishnotation_c_1dbfebd0_test_calcPriority(void);
void TestSuite_polishnotation_c_1dbfebd0_test_pushChar(void);
void TestSuite_polishnotation_c_1dbfebd0_test_popChar(void);
void TestSuite_polishnotation_c_1dbfebd0_test_pushDouble(void);
void TestSuite_polishnotation_c_1dbfebd0_test_pushOperator(void);
void TestSuite_polishnotation_c_1dbfebd0_test_popDouble(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_polishnotation_c_1dbfebd0);

void TestSuite_polishnotation_c_1dbfebd0_setUp(void);
void TestSuite_polishnotation_c_1dbfebd0_setUp(void)
{
}

void TestSuite_polishnotation_c_1dbfebd0_tearDown(void);
void TestSuite_polishnotation_c_1dbfebd0_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_toPolishNotation */
/* CPPTEST_TEST_CASE_CONTEXT void toPolishNotation(char *) */
void TestSuite_polishnotation_c_1dbfebd0_test_toPolishNotation()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <row>
                <val>[IN]formula</val>
                <val>[OUT]polishFormula</val>
            </row>
            <row>
                <val>1+2</val>
                <val>1</val>
            </row>
            <row>
                <val>11+11</val>
                <val>1</val>
            </row>
            <ext>true</ext>
            <extname>toPolishNotation</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_formula</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]formula")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>sp</name>
                <type/>
                <value>0</value>
            </step>
            <step id="VariableStep" version="1">
                <name>spTemp</name>
                <type/>
                <value>0</value>
            </step>
        </step>
        <step id="CodeStep" version="1">
            <code><![CDATA[for (int i =0; i < ARRAY_NUM; i++) {]]></code>
            <code><![CDATA[    array[i] = '\0';]]></code>
            <code><![CDATA[    arrayTemp[i] = '\0';]]></code>
            <code><![CDATA[}]]></code>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>toPolishNotation</name>
            <params>_formula</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_CSTR_EQUAL</type>
                <P1>CPPTEST_DS_GET_CSTR("[OUT]polishFormula")</P1>
                <P2>array</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _formula = CPPTEST_DS_GET_CSTR("[IN]formula");
sp = 0;
spTemp = 0;
for (int i =0; i < ARRAY_NUM; i++) {
    array[i] = '\0';
    arrayTemp[i] = '\0';
}
toPolishNotation(_formula);
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[OUT]polishFormula"), array);
}
/* CPPTEST_TEST_CASE_END test_toPolishNotation */

/* CPPTEST_TEST_CASE_BEGIN test_calcPolishNotation */
/* CPPTEST_TEST_CASE_CONTEXT double calcPolishNotation(char *) */
void TestSuite_polishnotation_c_1dbfebd0_test_calcPolishNotation()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>calcPolishNotation</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_polishFormula</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]polishFormula")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>calcsp</name>
                <type/>
                <value>0</value>
            </step>
        </step>
        <step id="CodeStep" version="1">
            <code><![CDATA[for (int i =0; i < ARRAY_NUM; i++) {]]></code>
            <code><![CDATA[    calcArray[i] = '\0';]]></code>
            <code><![CDATA[}]]></code>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>int _return</return>
            <name>calcPolishNotation</name>
            <params>_polishFormula</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("[OUT]calcResult")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _polishFormula = CPPTEST_DS_GET_CSTR("[IN]polishFormula");
calcsp = 0;
for (int i =0; i < ARRAY_NUM; i++) {
    calcArray[i] = '\0';
}
int _return = calcPolishNotation(_polishFormula);
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]calcResult"), _return);
}
/* CPPTEST_TEST_CASE_END test_calcPolishNotation */

/* CPPTEST_TEST_CASE_BEGIN test_calcFormula */
/* CPPTEST_TEST_CASE_CONTEXT double calcFormula(char, double, double) */
void TestSuite_polishnotation_c_1dbfebd0_test_calcFormula()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>calcFormula</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_op</name>
                <type>char</type>
                <value>CPPTEST_DS_GET_CHAR("[IN]operator")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_figA</name>
                <type>double</type>
                <value>CPPTEST_DS_GET_FLOAT("[IN]figureA")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_figB</name>
                <type>double</type>
                <value>CPPTEST_DS_GET_FLOAT("[IN]figureB")</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>double _return</return>
            <name>calcFormula</name>
            <params>_op, _figA, _figB</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_DOUBLES_EQUAL</type>
                <P1>CPPTEST_DS_GET_FLOAT("[OUT]calcResult")</P1>
                <P2>_return</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char _op = CPPTEST_DS_GET_CHAR("[IN]operator");
double _figA = CPPTEST_DS_GET_FLOAT("[IN]figureA");
double _figB = CPPTEST_DS_GET_FLOAT("[IN]figureB");
double _return = calcFormula(_op, _figA, _figB);
CPPTEST_ASSERT_DOUBLES_EQUAL(CPPTEST_DS_GET_FLOAT("[OUT]calcResult"), _return, 0.01);
}
/* CPPTEST_TEST_CASE_END test_calcFormula */


/* CPPTEST_TEST_CASE_BEGIN test_calcPriority */
/* CPPTEST_TEST_CASE_CONTEXT int calcPriority(char) */
void TestSuite_polishnotation_c_1dbfebd0_test_calcPriority()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>calcPriority</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_op</name>
                <type>char</type>
                <value>CPPTEST_DS_GET_CHAR("[IN]operator")</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>int _return</return>
            <name>calcPriority</name>
            <params>_op</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("[OUT]priority")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char _op = CPPTEST_DS_GET_CHAR("[IN]operator");
int _return = calcPriority(_op);
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]priority"), _return);
}
/* CPPTEST_TEST_CASE_END test_calcPriority */

/* CPPTEST_TEST_CASE_BEGIN test_pushChar */
/* CPPTEST_TEST_CASE_CONTEXT void pushChar(char *, char, int *) */
void TestSuite_polishnotation_c_1dbfebd0_test_pushChar()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>pushChar</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_stack</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]stack")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_data</name>
                <type>char</type>
                <value>CPPTEST_DS_GET_CHAR("[IN]data")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_sp</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("[IN]sp")</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>pushChar</name>
            <params>_stack, _data, &amp;_sp</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_CSTR_EQUAL</type>
                <P1>CPPTEST_DS_GET_CSTR("[OUT]result")</P1>
                <P2>_stack</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _stack = CPPTEST_DS_GET_CSTR("[IN]stack");
char _data = CPPTEST_DS_GET_CHAR("[IN]data");
int _sp = CPPTEST_DS_GET_INTEGER("[IN]sp");
pushChar(_stack, _data, &_sp);
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[OUT]result"), _stack);
}
/* CPPTEST_TEST_CASE_END test_pushChar */

/* CPPTEST_TEST_CASE_BEGIN test_popChar */
/* CPPTEST_TEST_CASE_CONTEXT char popChar(char *, int *) */
void TestSuite_polishnotation_c_1dbfebd0_test_popChar()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>popChar</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_stack</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("stack")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_sp</name>
                <type>char</type>
                <value>CPPTEST_DS_GET_INTEGER("sp")</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>char _return</return>
            <name>popChar</name>
            <params>_stack, &amp;_sp</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_EQUAL</type>
                <P1>CPPTEST_DS_GET_CHAR("[OUT]result")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _stack = CPPTEST_DS_GET_CSTR("stack");
char _sp = CPPTEST_DS_GET_INTEGER("sp");
char _return = popChar(_stack, &_sp);
CPPTEST_ASSERT_EQUAL(CPPTEST_DS_GET_CHAR("[OUT]result"), _return);
}
/* CPPTEST_TEST_CASE_END test_popChar */

/* CPPTEST_TEST_CASE_BEGIN test_pushDouble */
/* CPPTEST_TEST_CASE_CONTEXT void pushDouble(double *, double, int *) */
void TestSuite_polishnotation_c_1dbfebd0_test_pushDouble()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>pushDouble</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_stack</name>
                <type>double</type>
                <value>CPPTEST_DS_GET_FLOAT("[IN]stack")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_data</name>
                <type>double</type>
                <value>CPPTEST_DS_GET_FLOAT("[IN]data")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_sp</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("[IN]sp")</value>
            </step>
        </step>
        <step id="CodeStep" version="1">
            <code><![CDATA[double stack[256] = {_stack};]]></code>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>pushDouble</name>
            <params>stack, _data, &amp;_sp</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_DOUBLES_EQUAL</type>
                <P1>CPPTEST_DS_GET_FLOAT("[OUT]result")</P1>
                <P2>stack[_sp-1]</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
double _stack = CPPTEST_DS_GET_FLOAT("[IN]stack");
double _data = CPPTEST_DS_GET_FLOAT("[IN]data");
int _sp = CPPTEST_DS_GET_INTEGER("[IN]sp");
double stack[256] = {_stack};
pushDouble(stack, _data, &_sp);
CPPTEST_ASSERT_DOUBLES_EQUAL(CPPTEST_DS_GET_FLOAT("[OUT]result"), stack[_sp-1], 0.01);
}
/* CPPTEST_TEST_CASE_END test_pushDouble */

/* CPPTEST_TEST_CASE_BEGIN test_pushOperator */
/* CPPTEST_TEST_CASE_CONTEXT void pushOperator(char) */
void TestSuite_polishnotation_c_1dbfebd0_test_pushOperator()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>pushOperator</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_op</name>
                <type>char</type>
                <value>CPPTEST_DS_GET_CHAR("[IN]operator")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>ap</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("arrayTemp")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>spt</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("spTemp")</value>
            </step>
        </step>
        <step id="CodeStep" version="1">
            <code><![CDATA[sp = 0;]]></code>
            <code><![CDATA[spTemp = 0;]]></code>
            <code><![CDATA[for (int i =0; i < ARRAY_NUM; i++) {]]></code>
            <code><![CDATA[    array[i] = '\0';]]></code>
            <code><![CDATA[    arrayTemp[i] = '\0';]]></code>
            <code><![CDATA[}]]></code>
            <code><![CDATA[int j = 0;]]></code>
            <code><![CDATA[while(*ap != '\0') {]]></code>
            <code><![CDATA[	arrayTemp[j] = *ap;]]></code>
            <code><![CDATA[	*ap++;]]></code>
            <code><![CDATA[	j++;]]></code>
            <code><![CDATA[}]]></code>
            <code><![CDATA[spTemp = spt;]]></code>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>pushOperator</name>
            <params>_op</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_CSTR_EQUAL</type>
                <P1>CPPTEST_DS_GET_CSTR("[OUT]arrayResult")</P1>
                <P2>array</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char _op = CPPTEST_DS_GET_CHAR("[IN]operator");
char * ap = CPPTEST_DS_GET_CSTR("arrayTemp");
int spt = CPPTEST_DS_GET_INTEGER("spTemp");
sp = 0;
spTemp = 0;
for (int i =0; i < ARRAY_NUM; i++) {
    array[i] = '\0';
    arrayTemp[i] = '\0';
}
int j = 0;
while(*ap != '\0') {
	arrayTemp[j] = *ap;
	*ap++;
	j++;
}
spTemp = spt;
pushOperator(_op);
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[OUT]arrayResult"), array);
}
/* CPPTEST_TEST_CASE_END test_pushOperator */

/* CPPTEST_TEST_CASE_BEGIN test_popDouble */
/* CPPTEST_TEST_CASE_CONTEXT double popDouble(double *, int *) */
void TestSuite_polishnotation_c_1dbfebd0_test_popDouble()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>popDouble</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_stack1</name>
                <type>double</type>
                <value>CPPTEST_DS_GET_FLOAT("stack[0]")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_stack2</name>
                <type>double</type>
                <value>CPPTEST_DS_GET_FLOAT("stack[1]")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_sp</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("sp")</value>
            </step>
        </step>
        <step id="CodeStep" version="1">
            <code><![CDATA[double stack[256] = {_stack1, _stack2};]]></code>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>double _return</return>
            <name>popDouble</name>
            <params>stack, &amp;_sp</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_FLOAT_EQUAL_DELTA</type>
                <P1>stack[_sp]</P1>
                <P2>_return</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
double _stack1 = CPPTEST_DS_GET_FLOAT("stack[0]");
double _stack2 = CPPTEST_DS_GET_FLOAT("stack[1]");
int _sp = CPPTEST_DS_GET_INTEGER("sp");
double stack[256] = {_stack1, _stack2};
double _return = popDouble(stack, &_sp);
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(stack[_sp], _return, 0.01);
}
/* CPPTEST_TEST_CASE_END test_popDouble */
