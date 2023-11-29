#!/usr/bin/python3

def to_upper(character):
    if 97 <= ord(character) <= 122:
        return chr(ord(character) - 32)
    else:
        return character


def uppercase(string):
    string_new = ""
    for character in string:
        string_new += to_upper(character)
    print("{:s}".format(string_new))


if __name__ == "__main__":
    # Example usage
    uppercase("Hello, World!")
