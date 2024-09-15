import sys

def main() :
    cartas = sys.stdin.readline().split()
    aparicoes = {}
    for i in range(5):
        rank = cartas[i][0]
        if rank in aparicoes:
            aparicoes[rank] += 1
        else:
            aparicoes[rank] = 1
    print(max(aparicoes.values()))
    
if __name__ == "__main__":
    main()