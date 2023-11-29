#!/usr/bin/env python3
is_lower = __import__('7-islower').islower

characters = ['a', 'H', 'A', '3', 'g']

for char in characters:
    case_result = "lower" if is_lower(char) else "upper"
    print("{} is {}".format(char, case_result))
