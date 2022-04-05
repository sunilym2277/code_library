
x=input().split("\n")
l1=input().split(" ")
y=input().split("\n")
l2=input().split(" ")

list_difference = []
for item in l1:
  if item not in l2:
    list_difference.append(item)
    
for item in l2:
  if item not in l1:
    list_difference.append(item)
print(len(list_difference))
