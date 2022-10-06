def is_anagram_string(str1, str2):
    ht = dict()

    if len(str1) != len(str2):
        return False

    for i in str1:
        if i in ht:
            ht[i] += 1
        else:
            ht[i] = 1
    for i in str2:
        if i in ht:
            ht[i] -= 1
        else:
            ht[i] = 1
    for i in ht:
        if ht[i] != 0:
            return False
    return True


s1 = input()
s2 = input()
s1 = s1.replace(" ", "").lower()
s2 = s2.replace(" ", "").lower()

print(is_anagram_string(s1, s2))
