# Eclidian algorithm to calculate GCD

In this example, we want to calculate the Greatest Common Divider between two numbers. For this we use the following algorithm.

## Euclidian algorithm to find the GCD, GCD(X,Y)

X > Y and Y !=0.

1 - Divide X/Y, if the reminder (R1) is 0, the GCD is Y

2 - If R1 != 0, divide Y/R1, if the reminder (R2) is 0, the GCD is R1

3 - If R2 != 0, divide R1/R2, if the reminder (R3) is 0, the GCD is R2

4 - If Rn != 0, divide (Rn-1)/(Rn), if the reminder (Rn+1) is 0, the GCD is Rn
