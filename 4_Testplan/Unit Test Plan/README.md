# UNIT TEST PLAN:


| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Status**|**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|---|
|  L_01       |Evaluates valid input function for Hexagon|  Side=0 |False|False|PASS|Scenario based |
|  L_02       |Evaluates valid input function for Hexagon|  Side=-3 |True|True|PASS|Scenario based |
|  L_03       |Evaluates valid input function for Hexagon|  Side=3 |True|True|PASS|Scenario based |
|  L_04       |Evaluates perimeter and area functions of hexagon for valid inputs|  Side=3 |Perimeter=18,Area=23.382|Perimeter=18,Area=23.382|PASS|Requirement based |
|  L_05       |Evaluates perimeter and area functions of hexagon for valid inputs|  Side=-3 |Perimeter=18,Area=23.382|Perimeter=18,Area=23.382|PASS|Requirement based |
|  L_06       |Evaluates valid input function for Octagon|  Side=0 |False|False|PASS|Scenario based |
|  L_07       |Evaluates valid input function for Octagon|  Side=-3 |True|True|PASS|Scenario based |
|  L_08       |Evaluates valid input function for Octagon|  Side=3 |True|True|PASS|Scenario based |
|  L_09       |Evaluates perimeter and area functions of octagon for valid inputs|  Side=3 |Perimeter=24,Area=43.4556|Perimeter=24,Area=43.4556|PASS|Requirement based |
|  L_10       |Evaluates perimeter and area functions of octagon for valid inputs|  Side=-3 |Perimeter=24,Area=43.4556|Perimeter=24,Area=43.4556|PASS|Requirement based |
|  L_11       |Evaluates valid input function for Pentagon|  Side=0 |False|False|PASS|Scenario based |
|  L_12       |Evaluates valid input function for Pentagon|  Side=-5 |True|True|PASS|Scenario based |
|  L_13       |Evaluates valid input function for Pentagon|  Side=5 |True|True|PASS|Scenario based |
|  L_14       |Evaluates perimeter and area functions of pentagon for valid inputs|  Side=5 |Perimeter=25,Area=43.011925|Perimeter=25,Area=43.011925|PASS|Requirement based |
|  L_15       |Evaluates perimeter and area functions of pentagon for valid inputs|  Side=-5 |Perimeter=25,Area=43.011925|Perimeter=25,Area=43.011925|PASS|Requirement based |
|  L_16       |Evaluates valid input function for Hemisphere|  Side=0 |False|False|PASS|Scenario based |
|  L_17       |Evaluates valid input function for Hemisphere|  Side=-5 |True|True|PASS|Scenario based |
|  L_18       |Evaluates valid input function for Hemisphere|  Side=5 |True|True|PASS|Scenario based |
|  L_19       |Evaluates perimeter and area functions of hemisphere for valid inputs|  Side=6 |Volume=452.11887,LSA=226.28572,TSA=339.42856|Volume=452.11887,LSA=226.28572,TSA=339.42856|PASS|Requirement based |
|  L_20       |Evaluates perimeter and area functions of hemisphere for valid inputs|  Side=-6 |Volume=452.11887,LSA=226.28572,TSA=339.42856|Volume=452.11887,LSA=226.28572,TSA=339.42856|PASS|Requirement based |
| L_21 |Evaluates perimeter and area functions of square for valid inputs| Side=3 |Perimeter=12,Area=9|Perimeter=12,Area=9|PASS|Requirement based |
| L_21 |Evaluates perimeter and area functions of square for valid inputs| Side=-3 |Perimeter=12,Area=9|Perimeter=12,Area=9|PASS|Requirement based |
| L_23 |Evaluates valid input function for square| Side=0 |False|False|PASS|Scenario based | | L_24 |Evaluates valid input function for square| Side=-3 |True|True|PASS|Scenario based | | L_25 |Evaluates valid input function for square| Side=3 |True|True|PASS|Scenario based | | L_26 |Evaluates valid input function for rhombus| d1=0,d2=0 |False|False|PASS|Scenario based | | L_27 |Evaluates valid input function for rhombus| d1=-3,d2=-4 |True|True|PASS|Scenario based | | L_28 |Evaluates valid input function for rhombus| d1=3,d2=4 |True|True|PASS|Scenario based | | L_29 |Evaluates perimeter and area functions of rhombus for valid inputs| d1=3,d2=4 |Perimeter=10,Area=6|Perimeter=10,Area=6|PASS|Requirement based |
| L_30 |Evaluates perimeter and area functions of rhombus for valid inputs| d1=-3,d2=-4 |Perimeter=10,Area=6|Perimeter=10,Area=6|PASS|Requirement based |
|  L_31       |Evaluates valid input function for Circle|  radius=0 |False|False|PASS|Scenario based |
|  L_32      |Evaluates valid input function for Circle|  radius=3 |True|True|PASS|Scenario based |
|  L_33       |Evaluates perimeter and area functions of Circle for valid inputs|  radius=3 |Perimeter=18.85,Area=28.27|Perimeter=18.85,Area=28.27|PASS|Requirement based |
|  L_34       |Evaluates valid input function for Ellipse|  a=4 ,b=0  |False|False|PASS|Scenario based |
|  L_35       |Evaluates valid input function for Ellipse|  a=0 ,b=2  |False|False|PASS|Scenario based |
|  L_36      |Evaluates valid input function for Ellipse|  a=4 ,b=2  |True|True|PASS|Scenario based |
|  L_37       |Evaluate perimeter and area functions of Ellipse for valid inputs|  a=4 ,b=2 |Perimeter=19.38,Area=25.13|Perimeter=19.38,Area=25.13|PASS|Requirement based |
|  L_38       |Evaluates valid input function for Enneagon|  side = 5.0  |True|True|PASS|Scenario based |
|  L_39       |Evaluates valid input function for Enneagon|  side = 0  |False|False|PASS|Scenario based |
|  L_40      |Evaluates valid input function for Enneagon|  side = -5.0  |True|True|PASS|Scenario based |
|  L_41       |Evaluate perimeter and area functions of Enneagon for valid inputs| side = 3.0 |Perimeter=27,Area=8.04591|Perimeter=27,Area=8.04591|PASS|Requirement based |
