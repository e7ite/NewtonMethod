# NewtonMethod
Program which imitates Newton's Method (Idea from Calculus 1). Uses my MathFunctionParser library https://github.com/e7ite/MathFunctionParser

Features:

    -Uses form x_(i + 1) = x(i) - f(x(i)) / fprime(x(i))
    
    -Can take any polynomial and evaluate its closest x-intercept near the user's guess
    
    -Usually guesses until about 3rd repetition of value, then exits program

Current Limitations:
    
    -Currently cannot evaluate any trignometric functions
    
    -Cannot accept any input with parentheses
    
    -Only uses power rule to find derivative of f

![Preview](/preview.gif)

Credits:
    http://www.codinghelmet.com/exercises/expression-evaluator -Recursive Arithmetic Expression Solving Technique
