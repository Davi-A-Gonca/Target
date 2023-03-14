frase = str(input("Escreva alguma coisa (e veja como ela fica ao contrário!): ")).strip()
palavras = frase.split()
fraseJunta = ' '.join(palavras)
fraseAoContrario = ''
for c in range(len(fraseJunta) -1, -1, -1):
    fraseAoContrario += fraseJunta[c]
print(f"O contrário de '{frase}' é '{fraseAoContrario}'!")
