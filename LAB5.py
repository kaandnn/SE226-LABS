import random
import string



def get_replacement_dict():
    replacement_dict = {}

    print("Choose 5 characters (lowercase only) and assign 3 replacement options each:")

    while len(replacement_dict) < 5:
        letter = input(f"Enter a lowercase character ({len(replacement_dict) + 1}/5): ").strip().lower()


        if letter not in string.ascii_lowercase or letter in replacement_dict:
            print("Invalid input or already chosen. Try again.")
            continue

        replacements = set()
        while len(replacements) < 3:
            replacement = input(f"Enter a replacement for '{letter}': ").strip()
            if len(replacement) == 1 and replacement not in replacements:
                replacements.add(replacement)
            else:
                print("Invalid or duplicate replacement. Try again.")

        replacement_dict[letter] = replacements

    return replacement_dict



def generate_random_passwords(count=10, length=12):
    return [''.join(random.choices(string.ascii_lowercase, k=length)) for _ in range(count)]


def transform_password(password, replacement_dict):
    replaced_chars = set()  
    new_password = [] 
    for char in password:
        if char in replacement_dict:
            new_char = random.choice(list(replacement_dict[char]))  
            new_password.append(new_char)  
            replaced_chars.add(char)  
        else:
            new_password.append(char)  

    
    new_password_string = ""
    for char in new_password:
        new_password_string += char

    return new_password_string, len(replaced_chars)



def categorize_passwords(passwords, replacement_dict):
    categorized_passwords = {"strong": [], "weak": []}

    for password in passwords:
        transformed, unique_replaced_count = transform_password(password, replacement_dict)
        if unique_replaced_count > 4:  
            categorized_passwords["strong"].append(transformed)
        else:
            categorized_passwords["weak"].append(transformed)

    return categorized_passwords



def main():
    replacement_dict = get_replacement_dict()
    passwords = generate_random_passwords()
    categorized_passwords = categorize_passwords(passwords, replacement_dict)


    print("\nGenerated Passwords:")

    print("\nSTRONG PASSWORDS:")
    for pwd in categorized_passwords["strong"]:
        print(pwd)

    print("\nWEAK PASSWORDS:")
    for pwd in categorized_passwords["weak"]:
        print(pwd)


if __name__ == "__main__":
    main()
