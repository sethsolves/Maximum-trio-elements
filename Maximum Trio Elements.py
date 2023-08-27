list1 = []
list_element = int(input("Please enter the first element:"))
list1.append(list_element)

while list_element != 0:
    list_element = int(input("Please enter the other elements (0 to stop):") )
    list1.append(list_element)
list2 = []
for element in list1:
    if element not in list2:
        list2.append(element)

n = len(list2)
for i in range(n):
    for j in range(0, n - i - 1):
        if list2[j] < list2[j + 1]:
            list2[j], list2[j + 1] = list2[j + 1], list2[j]

print(list2[0])
print(list2[1])
print(list2[2])
