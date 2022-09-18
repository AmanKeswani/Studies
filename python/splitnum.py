# Write coede to split/print numbers into digits as below

# nums = [321, 410, 987, 1297]

# output : [[3, 2, 1], [4, 1, 0], [9, 8, 7], [1, 2, 9, 7]]

# bonus. add first nuumber in each sub-list (3 + 4 + 9 + 1)

# output : [17, 13, 17, 7]


nums = [321, 410, 987, 1297]

split_list = []
for i in nums:
    split_value_list = []
    while(i>0):
        split_value_list.insert(0, i%10)
        i=int(i/10)


    split_list.append(split_value_list)

    
print(split_list)

addition_list = []

for i in range(split_list):
    adds=[]
    for j in i:
