## Table : High Level test plan

|**Test ID**|**Designation**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|H\_01|Electric bill calculation at urban areas|Choice|SUCCESS|SUCCESS|
|H\_02|Electric bill calculation at rural areas|Choice|SUCCESS|SUCCESS|
|H\_03|Units consumed per year|Choice|SUCCESS|SUCCESS|
|H\_04|Calculates total industrial loads|Choice|SUCCESS|SUCCESS|


## Table : Low Level test plan


|Test ID|HL\_ID|Designation|Exp i/P|Exp O/P|Actual O/P|
| :- | :- | :- | :- | :- | :- |
|L\_01|H\_01|Electric bill calculation at Urban areas if(units<30)|25 units|71.5 ₹|71.5 ₹|
|L\_02|H\_01|Electric bill calculation at Urban areas if(units>30 && units <100)|60|235|235|
|L\_03|H\_01|Electric bill calculation at Urban areas if(units>101 && units <200)|175|937.5|937.5|
|L\_04|H\_01|Electric bill calculation at Urban areas if(units<200)|230|1,679|1,679|
|L\_05|H\_02|Electric bill calculation at Urban areas if(units<30)|12|<p>37.8</p><p></p>|<p>37.8</p><p></p>|
|L\_06|H\_02|Electric bill calculation at Urban areas if(units>30 && units <100)|69|294.8|294.8|
|L\_07|H\_02|Electric bill calculation at Urban areas if(units>101 && units <200)|124|797.3|797.3|
|L\_08|H\_02|Electric bill calculation at Urban areas if(units<200)|300|2,339.2|2,339.2|

