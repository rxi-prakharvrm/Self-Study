# def isPalindrome(s):
#     n = len(s)
#     left = 0
#     right = n-1

#     while left < right:
#         if s[left] != s[right]:
#             return False
#         left += 1
#         right -= 1
        
#     return True

def isPalindrome(s):
    # Filter out non-alphanumeric characters and convert to lowercase
    cleaned_str = ''.join(filter(str.isalnum, s)).lower()
    
    # Check if the cleaned string is equal to its reverse
    return cleaned_str == cleaned_str[::-1]

print(isPalindrome("abcDcBa"))