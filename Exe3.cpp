# include <iostream>
# include <limits>
# include <locale.h>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    // A: Sobre o tipo int identifique qual o menor e o maior valor que pode
    // ser representado por uma variável deste tipo. Mostre esta informação
    // na tela.
    int maior = numeric_limits<int>::max();
    int menor = numeric_limits<int>::min();
    wcout << L"\nExercício A" << endl;
    cout << "\nMaior valor de int: " << maior << endl;
    cout << "Menor valor de int: " << menor << endl;

    // B: Crie uma variável uli, de tipo unsigned long int, atribua a ela
    // o maior valor que pode ser armazenado neste tipo de dado
    // (identifique qual o menor e o maior valor que pode ser representado);
    wcout << L"\nExercício B" << endl;
    unsigned long int uli = numeric_limits<unsigned long int>::max();
    cout << "\nMaior valor de unsigned long int: " << uli << endl;
    
    uli = numeric_limits<unsigned long int>::min();
    cout << "Menor valor de unsigned long int: " << uli << endl;

    // C: Crie uma variável li, de tipo long int, atribua a ela o valor da
    // variável uli e depois atribua novamente a uli o valor armazenado
    // em li. O que acontece e por que? Mostre o resultado na tela e
    // coloque suas considerações num comentário no código.
    wcout << L"\nExercício C" << endl;
    uli = numeric_limits<unsigned long int>::max();

    long int li = uli;
    cout << "\nvalor de uli: " << uli << endl;
    cout << "valor de li Depois de Receber uli: " << li << endl;
    uli = li;
    cout << "valor de uli Depois de Receber li: " << uli << endl;

    /* long int é um tipo de dados com sinal,
    o que significa que pode armazenar valores positivos e negativos. 
    No entanto, o valor máximo de unsigned long int é maior do que o valor máximo de long int.
    Quando atribui o valor máximo de uli a li, ocorre um overflow.
    O valor resultante em li é -1, porque o overflow faz com que o valor seja "Comprensado"
    para o menor valor negativo possível.
    Quando atribui o valor de li novamente a uli. 
    Como uli é unsigned long int, ele não tem sinal
    e pode armazenar apenas valores positivos.
    Portanto, o valor de -1 em li é "Descomprensado" para o maior valor possível que uli pode armazenar. 
    Segundo pesquisas, esse efeito ocorre devido a diferença na representação de numeros positivos e negativos
    em diferentes tipos de variaveis em c++.*/

    // D: Atribua a li o maior valor que pode ser armazenado num long
    // int (identifique qual o menor e o maior valor que pode ser
    // representado);
    wcout << L"\nExercício D" << endl;
    li = numeric_limits<long int>::max();
    cout << "\nMaior valor de long int: " << li << endl;
    li = numeric_limits<long int>::min();
    cout << "Menor valor de long int: " << li << endl;

    // E: Crie uma variável ui, de tipo unsigned int, atribua a ela o valor
    // da variável li e depois atribua novamente a li o valor armazenado
    // em ui. O que acontece e por que? Mostre o resultado na tela e
    // coloque suas considerações num comentário no código.
    wcout << L"\nExercício E" << endl;
    li = numeric_limits<long int>::min();
    unsigned int ui = li;
    cout << "\nvalor de li: " << li << endl;
    cout << "valor de ui Depois de Receber li: " << ui << endl;
    li = ui;
    cout << "valor de li Depois de Receber ui: " << li << endl;

    /* Não ouve alteração no resultado, pois a variável ui é unsigned int
       e isso permite armazenar valores positivos maiores que o valor máximo de int.
       No entanto, não é possivel armazenar valores negativos. caso a variável ui receba
       o valor de li sendo o valor minimo de long int, ocorre um overflow devido ao sinal do valor,
       que é negativo. Que no meu caso deu o valor 2147483648, alterando apenas o sinal que era negativo. 
    */
    
    // F: Atribua a ui o maior valor que pode ser armazenado num
    // unsigned int (identifique qual o menor e o maior valor que pode
    // ser representado);
    wcout << L"\nExercício F" << endl;
    ui = numeric_limits<unsigned int>::max();
    cout << "\nMaior valor de unsigned int: " << ui << endl;
    ui = numeric_limits<unsigned int>::min();
    cout << "Menor valor de unsigned int: " << ui << endl;

    
    return 0;
}