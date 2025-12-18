x = True
x = [1, 2, 3]
x += [4, 5]
print(f"x array {x}")

# Static (Tpule)
y = (1, 2, 3)
print(f"y array {y}")

z = {1, 2, 3}
print(f"Is 1 in Z array? {'yes' if 1 in z else 'no'}")
print(f"Is 4 in Z array? {'yes' if 4 in z else 'no'}")

# item
a = {1: "apple", 2: "bee", 3: "cat"}
print(f'a array 1 is "{a[1]}"')
print(f'a array 2 is "{a[2]}"')
print(f'a array 3 is "{a[3]}"')
# print(a[4]) <= this will break

# 間隔
b = [1, 2, 3]
for i in range(len(x)):
    x[i] = x[i] * 2

print(f"Array B: {x}")

# ooh pages
c = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]  # you can do this forever ig
print(f"Array C: {c}")
print(f"Array C[0]: {c[0]}")
print(f"Array C[1]: {c[1]}")
c[1][2] = 100  # set array c's data row 2 (1 in python), then modify the second item
