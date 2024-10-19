#include "question1.h"

bool test_config()
{
    return true;
}
string transcribe_dna_into_rna(string dna){
    for(auto i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'T')
        {
            dna[i] = 'U';
        }
    }
    return dna;
}