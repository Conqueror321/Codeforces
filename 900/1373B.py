t = int(input())

for _ in range(t):
    s = input()
    flag = False
    while True:
        for i in range(len(s) - 1):
            if s[i] != s[i + 1]:
                flag = not flag
                s = s[:i] + s[i + 2:]
                break
        else:
            break
    print("DA" if flag else "NET")