I am testing if calling a function before a for loop to preproces the data is faster then callin if in the for loop.
This test shows that it is much faster to call it in the for loop. Where suprising. 
But yeah, with the pre procesing we have two for loops that runs the same length, but without it we only have one for loop.


Other things that needs more testing:
    1. In a std::vector, [i] is faster then .at(i)
    2. for-each vs for
    3. On a std::vector, initilize it as empty and then do pushBack(...) vs initilize it at right size and do .at(i)/[]
    4. Having a for-each with a pointer to the value vs using [i] in a for

Answer with this test:
    1. [i] is faster
    2. for is faster
    3. Initilize right size and do [] is faster
    4. [i] in normal for-loop is faster

Test done in folder:
    1. "atVSbrackets"
    2. "forEachVSfor"
    3. "pushBackVSbrackets"
    4. "pointerInForEach"