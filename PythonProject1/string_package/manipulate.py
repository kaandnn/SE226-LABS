import string

def reverse_string(s) :
    return s[::-1]
def capitalize_words(s):
    return s.title()
def remove_punctuation(s):
    return ''.join(char for char in s if char not in string.punctuation)