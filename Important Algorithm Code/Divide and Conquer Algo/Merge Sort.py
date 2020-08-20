def merge_sort(values):

    if(len(values) > 1):
        mid = len(values)//2
        left = values[:mid]
        right = values[mid:]

        left = merge_sort(left)
        right = merge_sort(right)

        values = list()

        while len(left) > 0 and len(right) > 0:
            if left[0] < right[0]:
                values.append(left[0])
                left.pop(0)
            else:
                values.append(right[0])
                right.pop(0)
        for i in left:
            values.append(i)
        for i in right:
            values.append(i)
    return values

    # Input list
a = [12, 11, 13, 5, 6, 7, 7, 6, 5, 3, 2, 12]

print(*a)

a = merge_sort(a)

# Print output
print("Sorted:", *a)
