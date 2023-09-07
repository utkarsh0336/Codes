import nltk
myfile = open('IRfile.txt')
text = myfile.read()
# text = text.split()

data = nltk.word_tokenize(text)
print(data)

for word in text:
    if word == '.' or word == ',':
        data.remove(word)

for word in text:
    print(f"Count of {word} is {data.count(word)}")

