#Assignment01

tupleList1=[('parent', 'john', 'mary'),
            ('parent', 'john', 'peter'),
            ('parent', 'sue', 'mary'),
            ('parent', 'sue', 'peter'),
            ('parent', 'mary', 'tom'),
            ('parent', 'peter', 'lisa'),
            ('parent', 'peter', 'bob'),
            ('parent', 'john', 'tyler'),
            ('parent', 'sue', 'tyler')]
genderList = [('male','john'),
              ('male','peter'),
              ('male','tom'),
              ('male','bob'),
              ('male','tyler'),
              ('female','sue'),
              ('female','mary'),
              ('female','lisa'),]

ch = int(input("Enter your choice to find relation of \n1.Brother\n2.Sister\n3.Uncle\n4.Aunt\n5.GrandparentsChoice: "))
i,l = 0,0
if ch == 1 or ch == 2:
    X = str(input("Enter the name to find the siblings: "))
    if ch == 1:
        print("Brother: ", end=' ')
    else:
        print("Sister: ", end=' ')
    while(i<=8):
        if ((tupleList1[i][0] == 'parent') & (tupleList1[i][2] == X)) :
            for j in range(9):
                if ((tupleList1[j][0] == 'parent') & (tupleList1[i][1] == tupleList1[j][1]) & (tupleList1[j][2] != X)):
                    for k in range(10):
                        if ch == 1:
                           if ((genderList[k][0] == 'male') & (genderList[k][1] == tupleList1[j][2])):
                               print(tupleList1[j][2], end=' ')
                        else:
                            if ((genderList[k][0] == 'female') & (genderList[k][1] == tupleList1[j][2])):
                               print(tupleList1[j][2], end=' ')
        i = i + 1
elif ch == 3 or ch == 4:
    X = str(input("Enter the name to find someone's uncle/aunt: "))
    if ch == 3:
        print("Uncle: ", end=' ')
    else:
        print("Aunt: ", end=' ')
    while(l<=8):
        if ((tupleList1[l][0] == 'parent') & (tupleList1[l][2] == X)) :
            while(i<=8):
                if ((tupleList1[i][0] == 'parent') & (tupleList1[i][2] == tupleList1[l][1])) :
                    for j in range(9):
                        if ((tupleList1[j][0] == 'parent') & (tupleList1[i][1] == tupleList1[j][1]) & (tupleList1[j][2] != tupleList1[l][1])):
                            for k in range(8):
                                if ch == 3:
                                   if ((genderList[k][0] == 'male') & (genderList[k][1] == tupleList1[j][2])):
                                       print(tupleList1[j][2], end=' ')
                                else:
                                    if ((genderList[k][0] == 'female') & (genderList[k][1] == tupleList1[j][2])):
                                       print(tupleList1[j][2], end=' ')
                i = i + 1
        l = l+1
elif ch == 5:
	# Procedure to find the grandparent of someone
	X=str(input("Enter the name to find someone's grandparent:"))
	print('Grandparent:', end=' ')
	i=0
	while(i<=9):
    		if ((tupleList1[i][0] == 'parent')&( tupleList1[i][2] == X)):
        		for j in range(4):
            		if ((tupleList1[j][0] == 'parent') & ( tupleList1[i][1] == tupleList1[j][2])):
                			print(tupleList1[j][1], end=' ')   
    		i=i+1  

