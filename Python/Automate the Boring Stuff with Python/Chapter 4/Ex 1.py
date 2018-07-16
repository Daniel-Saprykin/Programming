
def cont(spam):

    conkat = ''
    size = len(spam)
    for i in range(size):
        conkat +=  spam[i -1] + ', '

    conkat += 'and ' + spam[size -1]
    return  conkat

spam = ['apples', 'bananas', 'tofu', 'cats']


foo = cont(spam)

print(foo)
