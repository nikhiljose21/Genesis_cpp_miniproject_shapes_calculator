# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Evaluates the parameters for regular polygon |Side value = 0|FAIL|FAIL|Boundary based|
|  H_02       |Evaluates the parameters for regular polygon  | Side value for the regular polygons |SUCCESS|SUCCESS|Scenario based|
|  H_03       |Evaluates the parameters for irregular polygons and curves | Either of the Input values are provided as 0|FAIL|FAIL|Boundary based|
|  H_04       |Evaluates the parameters for irregular polygons and curves | Input values are provided|SUCCESS|SUCCESS|Scenario based|
|  H_05       |Evaluates the parameters for three dimensional solids| Either of the Input values are provided as 0|FAIL|FAIL|Boundary based|
|  H_06       |Evaluates the parameters for three dimensional solids | Input values are provided|SUCCESS|SUCCESS|Scenario based|
|  H_07       |Evaluates the parameters for other three dimensional solids| Either of the Input values are provided as 0|FAIL|FAIL|Boundary based|
|  H_08       |Evaluates the parameters for other three dimensional solids | Input values are provided|SUCCESS|SUCCESS|Scenario based|


## Table no: Low level test plan

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
