/*
    Benvenuti in VeneCode!

    Sfruttiamo lo strumento #define per rendere più accessibile il linguaggio c++ ai Veneti.

    Sono state ridefinite variabili, parole chiavi, operatori e funzioni da vari namespaces e librerie:

    Namespaces:
        -std
    
    Librerie:
        -cmath
        -iostream
        -fstream
        -map
        -string
        -vector
*/

//Parole chiave
#pragma region KeyWords
    #define fermate break
    #define situasion case
    #define ciapa catch
    #define fameja class
    #define testardo const
    #define a_casso default
    #define cancea delete
    #define feto do
    #define altrimenti else
    #define vien_fora exit
    #define par_ogni for
    #define se if
    #define novo new
    #define cassi_miei private
    #define cassi_nostri protected
    #define cassi_de_tutti public
    #define ridame return
    #define impianta static
    #define coso struct
    #define decidate switch
    #define sto this
    #define provaghe try
    #define definissi_tipo typedef
    #define usaghe using
    #define intanto_che while
#pragma endregion

//Tipi fondamentali
#pragma region Types
    #define condision bool
    #define letera char
    #define virgoeona double
    #define virgoetta float
    #define intiero int
    #define intiero_exagerato long
    #define vodo void
#pragma endregion

//Valori molto usati
#pragma region Types_Values
    #define niente 0
    #define cassada_intiera -1
    #define na_cassada false
    #define na_tega nullptr
    #define vero true
#pragma endregion

//Operatori logici
#pragma region Logic_Operators
    #define xe ==
    #define no_xe !=
    #define xe_al_manco >=
    #define xe_al_piu <=
    #define xe_manco_de <
    #define xe_piu_de >
#pragma endregion

//Operatori aritmetici
#pragma region Arithmetic_Operators
    #define piu +
    #define manco -
    #define par *
    #define su /
    #define che_xe =
    #define daghene +=
    #define cavaghe -=
    #define daghene_uno ++
    #define cavaghe_uno --
#pragma endregion

//Namespaces
#pragma region Namespaces

    #define piassa namespace

    #pragma region std
        #define san_marco std
        #define fa_coppia make_pair
        #define grandessa_de sizeof
        #define dame_intero stoi
    #pragma endregion

#pragma endregion

//Librerie
#pragma region Libraries

    #pragma region cmath
        #define potensa pow
        #define radisa_squadra sqrt
        #define radisa_cuba cbrt
        #define esponensiae exp
    #pragma endregion

    #pragma region iostream
        #define dime cin
        #define digo cout
        #define va_capo endl
    #pragma endregion

    #pragma region fstream
        #define ociai ifstream
        #define biro ofstream
        #define versi open
        #define sara close
        #define varda_a_riga getline
    #pragma endregion

    #pragma region map
        #define mapa map
        #define ghe_xe contains
        #define desfa erase
        #define primo first
        #define secondo second
        #define butaghe insert
        #define grandessa size
    #pragma endregion

    #pragma region string
        #define bastemia string
        #define varda_e_diferense compare
        #define trovame find
        #define lunghessa length
        #define scurta substr
        #define barata replace
    #pragma endregion

    #pragma region vector
        #define trenin vector
        #define butaghe_in_culo push_back
        #define butaghe_davanti push_front
        #define grandessa size
    #pragma endregion

#pragma endregion

//Altro
#pragma region Others
    #define fondamentae main
#pragma endregion