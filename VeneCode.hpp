/*
    ----- [Ita] -----

        Benvenuti in VeneCode!
        by Francesco Colla, Luca Fantin, Riccardo Modolo e Matteo Zanella

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
        
        Per una lettura più semplice, metodi che hanno lo stesso nome in varie situazioni, sono stati riscritti per ogni ambito.

    ----- [Eng] -----

        Welcome to VeneCode!
        by Francesco Colla, Luca Fantin, Riccardo Modolo e Matteo Zanella

        We use the feature #define to make C++ easier for Veneti

        We redefined variables, keywords, operators and functions from various namespaces and libraries:

        Namespaces:
            -std
        
        Libraries:
            -cmath
            -iostream
            -fstream
            -map
            -string
            -vector
        
        To make it easier to browse them, methods that has the same name throught different classes has been re-wrote for every situation.

*/

#ifndef VENECODE_HPP
#define VENECODE_HPP

//Parole chiave (Keywords)
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

//Tipi fondamentali (Foundamental Types)
#pragma region Types
    #define condision bool
    #define letera char
    #define virgoeona double
    #define virgoetta float
    #define intiero int
    #define intiero_exagerato long
    #define vodo void
#pragma endregion

//Valori molto usati (Often used values)
#pragma region Types_Values
    #define niente 0
    #define cassada_intiera -1
    #define na_cassada false
    #define na_tega nullptr
    #define vero true
#pragma endregion

//Operatori logici (Logic Operators)
#pragma region Logic_Operators
    #define xe ==
    #define el_contrario !
    #define no_xe !=
    #define xe_al_manco >=
    #define xe_al_piu <=
    #define xe_manco_de <
    #define xe_piu_de >
#pragma endregion

//Operatori aritmetici (Arithmetic Operators)
#pragma region Arithmetic_Operators
    #define che_xe =
    #define piu +
    #define manco -
    #define par *
    #define su /
    #define resto_de %
    #define daghene +=
    #define cavaghe -=
    #define daghene_par *=
    #define daghene_su /=
    #define daghene_uno ++
    #define cavaghe_uno --
#pragma endregion

//Namespaces
#pragma region Namespaces

    #define piassa namespace

    // std
    #pragma region std
        #define san_marco std
        #define fa_coppia make_pair
        #define grandessa_de sizeof
        #define dame_intiero stoi
    #pragma endregion

#pragma endregion

//Librerie (Libraries)
#pragma region Libraries

    // <cmath>
    #pragma region cmath
        #define potensa pow
        #define radisa_squadra sqrt
        #define radisa_cuba cbrt
        #define esponensiae exp
    #pragma endregion

    // <iostream>
    #pragma region iostream
        #define dime cin
        #define digo cout
        #define va_capo endl
    #pragma endregion

    // <fstream>
    #pragma region fstream
        #define ociai ifstream
        #define biro ofstream
        #define versi open
        #define sara close
        #define varda_a_riga getline
    #pragma endregion

    // <map>
    #pragma region map
        #define mapa map
        #define che_sta at
        #define inissio begin
        #define svoda clear
        #define ghe_xe contains
        #define conta count
        #define ghe_xe_cualcosa empty
        #define fine end
        #define desfa erase
        #define trovame find
        #define primo first
        #define grandessa_massima max_size
        #define secondo second
        #define butaghe insert
        #define grandessa size
        #define scambia swap
    #pragma endregion

    // <string>
    #pragma region string
        #define bastemia string
        #define varda_e_diferense compare
        #define trovame find
        #define lunghessa length
        #define scurta substr
        #define barata replace
    #pragma endregion

    // <vector>
    #pragma region vector
        #define trenin vector
        #define daghe assing
        #define che_sta at
        #define dame_da_drio back
        #define inissio begin
        #define spassio_disponibile capacity
        #define svoda clear
        #define ghe_xe_cualcosa empty
        #define fine end
        #define desfa erase
        #define dame_davanti front
        #define butaghe insert
        #define grandessa_massima max_size
        #define cava_da_drio pop_back
        #define butaghe_da_drio push_back
        #define cambia_grandessa resize
        #define grandessa size
        #define scambia swap
    #pragma endregion

#pragma endregion

//Altro (Other)
#pragma region Others
    #define fondamentae main
#pragma endregion

#endif