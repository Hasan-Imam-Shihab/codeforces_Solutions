#input of number of elements
n = int(input());

for i in range(n):
    #insert words string
    word = input();
    #Find Length
    length=len(word);
    if length>10:
        #Create new word
        print(word[0]+str(length-2)+word[length-1]);
    else:
        print(word);


