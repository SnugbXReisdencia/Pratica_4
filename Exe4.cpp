# include <iostream>
# include <limits>
# include <iomanip>
# include <cmath>
# include <locale>
// # include <locale.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235052073852110555964462294895493038196442881097566593344612847564823375555664677814240131495804072884903637573254862735512055267445870071930457618932349229279650198751872127267507981255470958904556357921221033346697499235630254947802490114195212382815309114079073860251522742995818072471625916685451333123948049470791191532673430282441860414263639548000448002670496248201792896476697583183271314251702969234889627668440323260927524960357996469256504936818360900323809293459588970695365349406034021665443755890045632882250545255640564482465151875471196218443965825337543885690941130315095261793780029741207665147939425902989695946995565761218656196733786236256125216320862869222103274889218654364802296780705765615144632046927906821207388377814233562823608963208068222468012248261177185896381409183903673672220888321513755600372798394004152970028783076670944474560134556417254370906979396122571429894671543578468788614445812314593571984922528471605049221242470141214780573455105008019086996033027634787081081754501193071412233908663938339529425786905076431006383519834389341596131854347546495569781038293097164651438407007073604112373599843452251610507027056235266012764848308407611830130527932054274628654036036745328651057065874882256981579367897669742205750596834408697350201410206723585020072452256326513410559240190274216248439140359989535394590944070469120914093870012640711521095;

using namespace std;

int main(){
    // setlocale(LC_ALL, "Portuguese");// Desse modo não funcionou no sistema linux.
    locale::global(locale(""));// Dessse modo não funcionou no sistema windows.
    system("clear");
    
    // A: Sobre o tipo float identifique qual o menor e o maior valor que
    // pode ser representado por uma variável deste tipo. Mostre esta
    // informação na tela.
    // wcout << L"\nExercício A" << endl;// Desse modo não funcionou no sistema linux.
    cout << "\nExercício A" << endl;
    
    float maior = numeric_limits<float>::max();
    float menor = numeric_limits<float>::min();
    cout << "Maior valor de float: " << maior << endl;
    cout << "Menor valor de float: " << menor << endl;

    // B: Crie uma variável pif de tipo float e atribua a ela o valor da
    // constante pi com o maior número de casas decimais que você consiga
    // achar na Internet. Imprima este valor na tela.
    // wcout << L"\nExercício B" << endl;
    cout << "\nExercício B" << endl;
    float pif = PI;
    cout << "O valor de pi e : " << pif << " em float" << endl;

    // C:  Explore as formas de formatar a saída com o comando cout e
    // modifique a quantidade de casas decimais que são apresentadas para
    // 2, 4, 8 e 16.
    // wcout << L"\nExercício C" << endl;

    cout << "O valor de pi e : " << setprecision(2) << pif << " em float" << endl;
    cout << "O valor de pi e : " << setprecision(4) << pif << " em float" << endl;
    cout << "O valor de pi e : " << setprecision(8) << pif << " em float" << endl;
    cout << "O valor de pi e : " << setprecision(16) << pif << " em float" << endl;

    // D: Crie uma variável pid de tipo double e atribua a ela o valor da
    // constante pi com o maior número de casas decimais que você consiga
    // achar na Internet. Imprima este valor na tela.
    // wcout << L"\nExercício D" << endl;
    cout << "\nExercício D" << endl;
    double pid = PI;
    cout << "O valor de pi e : " << pid << " em double" << endl;

    // E: Identifique se existe alguma diferença entre o valor pif e pid quando
    // seus valores são impressos com cout utilizando 2, 4, 8 e 16 casas
    // decimais
    // wcout << L"\nExercício E" << endl;
    cout << "\nExercício E" << endl;
    
    cout << "O valor de pi e : " << setprecision(2) << pid << " em double" << endl;
    cout << "O valor de pi e : " << setprecision(4) << pid << " em double" << endl;
    cout << "O valor de pi e : " << setprecision(8) << pid << " em double" << endl;
    cout << "O valor de pi e : " << setprecision(16) << pid << " em double" << endl;

    /*
        foi encontrado uma diferença entre o valor pif(R: 3.141592741012573) e em pid(R: 3.141592653589793), 
        quando seus valores são impressos com cout utilizando 16 casas decimais.
    */

    // F: No seu sistema existe diferença entre o tipo double e long double?
    // Mostre seu achado com algum exemplo dentro do seu código.
    // wcout << L"\nExercício F" << endl;
    cout << "\nExercício F" << endl;

    long double pild = PI;
    cout << "O valor de pi e : " << setprecision(49) << pid << " em double" << endl;
    cout << "O valor de pi e : " << setprecision(63) << pild << " em long double." << endl;

    /*
        No meu sistema não existe diferenca entre o tipo double e long double, mais era para ter,
        pois quando fiz o teste no pc do gabriela center deu diferenca entre o tipo double e long double,
        em relação a suas casas decimais no setprecision(), que o tipo double era 49 e long double era 63.
    */


    return 0;
}