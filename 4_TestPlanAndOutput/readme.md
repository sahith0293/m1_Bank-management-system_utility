
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test** | **PASS/FAIL**|  
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|---------------|
|  H_01       |Entry choice |  input is 1| shows to register the account|displays the mobile no,acc no,create pasword|Technical |PASS
|  H_02       |Entry choice|  input is 2| shows the login login with credentials|Dispaly the option after login sucees in new page|Technical   |PASS
|  H_03       |tested multiplication of two matrices|  matrix1, matrix2, n|SUCCESS|SUCCESS|Technical |
|  H_04       |tested determinant of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_05       |tested transpose of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_06       |tested inverse of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_07       |tested power of -1 function| 3|-1|-1|Technical |
|  H_08       |tested power of -1 function| 2|1|1|Technical. |


## Table no: Low level test plan

| **Test ID** | **HLT ID** |**Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01, H_02, H_03|Tested on functions which accept two matrices as input|  matrix1, matrix2, n |SUCCESS|SUCCESS |Technical |
|  L_02       | H_04, H_05, H_06|Tested on functions which accept single matrix as input|  matrix1, n |SUCCESS|SUCCESS |Technical |
|  L_03       | H_07, H_08 |Tested on function which returns an integer value|  3  |-1|-1|Technical |
