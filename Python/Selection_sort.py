def selection_sort(List1):
   for i in range(len(list1)-1):
      min_indx=i
      for j in range(i+1,len(list1)):
         if list1[min_indx]>list1[j]:
            min_indx=j
      temp=list1[min_indx]
      list1[min_indx]=list1[i]
      list1[i]=temp
   return list1      

list1=[]
while True:
    a=int(input(" Enter Element in list/ do you want to quit press(0) "))
    if a==0:
       break
    list1.append(a) 
print("Selection Sort")     
print(f"list entered by user is:{list1}")
print(f"Sorted list is:{selection_sort(list1)}")