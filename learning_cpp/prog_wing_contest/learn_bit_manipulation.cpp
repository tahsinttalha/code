/*
    ***** Pseudo Code *****

    We have N pens.
    If we want to think of a number from 0 - 2^N (Since we have 2^n possible combinations)
    and decide that the number goes to Group1: 
        if i-th bit (from the right, starting from 0) is 0
    or the number goes to group 2:
        if i-th bit is 1

*/

/*

    ***** Bitwise AND *****
    The bitwise AND operator compares corresponding bits of two numbers.
        If both bits are 1, the resulting bit is 1
        else the resulting bit is 0
    * It operates using the binary representations of the numbers.
    
    How do we use this concept to check bits?
        We can do that using the expression: (1 << i)
        This expression creates a number where only the i-th bit is set to 1 and all other to 0.
            For example: 
                for a four bits number:
                1 << 0 = 0001
                1 << 3 = 1000
    
    Now if we want to check if the i-th bit in the combination of N pens is set to perticular number:
        we use the expression: 
            if "num" is a number from the combination, we can use
                if (num & (1 << i))
            
            * This checks whether the i-th number in num is 1 or not. 
    ** So the (num % (1 << i)) is a very common and efficient way to check if the i-th bit of num is 'on' or 'true'.

*/

/*

    ***** Right Shift (>>) *****
    Right shift operator shifts the bits from a specific position in the right side to the left side. 
        When we use this operator, the rightmost specific digits are discarded and added in the leftside,
        pushing the bits to the right. 

        For example: Let's consider 12 (1100)

        if we use (12 >> 2):
            the two rightmost 0s are discarded = 11
            equal 0s are added to the left = 0011
        And now we have 3.

        shifting bits to k places performs an integer division of 2^k.
            12 / 2^2 = 12 / 4 = 3

    How we can use this concept to check bits?
        we can use the right shift to bring a specific bit to the rightmost position and check if it's 1 or 0.

*/

// We're going to use this concept on e.cpp