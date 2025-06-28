def print_evens(nums):
    for number in nums:
        if number % 2 == 0:
            print(number)
""" For the list `nums`, print out only the even numbers in the list. """
    pass

def sum_odds(nums):
    for number in nums:
        if number % 2 == 1:
            print(number)
    """ For the list `nums`, calculate and return the total sum of all odd numbers. """
    pass

def reverse_string(s):
    s = "hello"
    new_string = s[::-1]
    print(new_string)
    """ Given a string `s`, return a new string that is the reversed version of `s`. 
    
    E.g., 
        reverse_string("hello") -> "olleh"
        reverse_string("Goodbye world") -> "dlrow eybdooG"    
    """
    pass


def dup_last_2(s, n):
    new_string = s[-2:]
    print(new_string * n)
    """ Given a string `s` and an integer `n`, return a new string made of
    `n` copies of the last 2 characters of `s`.

    E.g.,
        dup_last_2('word', 4) -> 'rdrdrdrd'
        dup_last_2('mocha', 3) -> 'hahaha' """    
    pass


my_list = [1, 2, 3, 4, 5 ,6 ,7 ,8 ,9 ,10]

# Test print_evens()
print_evens(my_list)

# Test print_odds()
print(sum_odds(my_list))

assert reverse_string("baseball") == "llabesab", "reverse_string() did not return the correct value"
assert reverse_string("no room to rust") == "tsur ot moor on", "reverse_string() did not return the correct value"

assert dup_last_2("shenanigans", 5) == "ns"*5, "dup_last_2() did not return the correct value"
assert dup_last_2("motorcycle", 10) == "le"*10, "dup_last_2() did not return the correct value"