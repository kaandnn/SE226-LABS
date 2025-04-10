from string_package import (
    reverse_string,
    capitalize_words,
    remove_punctuation,
    count_characters,
    count_words,
    average_word_length
)

def main():
    sentence = input("Enter a sentence: ")

    print("\nReversed:", reverse_string(sentence))
    print("Capitalized:", capitalize_words(sentence))

    cleaned = remove_punctuation(sentence)
    print("\nWithout punctuation:", cleaned)

    print("Character count:", count_characters(cleaned))
    print("Word count:", count_words(cleaned))
    print("Average word length:", average_word_length(cleaned))

if __name__ == "__main__":
    main()