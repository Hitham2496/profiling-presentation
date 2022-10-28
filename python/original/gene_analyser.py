import cProfile
import pstats

def replace_a_and_t(seq):
    """
    Replaces A and T in a nucleotide sequence seq
    """

    # Make another unnecessary copy
    replaced_seq = ""
    # Using range(len()) when not needed
    for j in range(len(seq)):
        if seq[j] == "T":
            replaced_seq += "A"
        elif seq[j] == "A":
            replaced_seq += "T"
        else:
            replaced_seq += seq[j]

    seq = replaced_seq
    return seq

def replace_c_and_g(seq):
    """
    Replaces C and G in a nucleotide sequence seq
    """

    # Make another unnecessary copy
    replaced_seq = ""
    # Using range(len()) when not needed
    for j in range(len(seq)):
        if seq[j] == "C":
            replaced_seq += "G"
        elif seq[j] == "G":
            replaced_seq += "C"
        else:
            replaced_seq += seq[j]

    seq = replaced_seq
    return seq

def complement(seq):
    """
    Calculates the complement of a nucleotide sequence
    seq, provided as a string.
    """
    if not(isinstance(seq, str)):
        raise(TypeError("Nucleotide sequence must be a string"))

    # Make a copy of the input in a convoluted way
    seq_tmp = ""
    for base in seq:
        seq_tmp += base

    # Divide work amongst multiple functions
    replaced_a_t = replace_a_and_t(seq_tmp)
    replaced_c_g = replace_c_and_g(replaced_a_t)

    # Make another copy (let's say this one is for readability...)
    comp_seq = replaced_c_g

    return comp_seq

def main():

    genes = ["TACCAGATTAGCCATGAGGATGGATCCGATA",
             "ATCACCGTTGATGCCTTGATTAAGCAACCGT",
             "GCCACGAATCTCTTAGGCGGTTAAGACTATA",
             "GCGGTATGGATAGCCATACCCATGAGGATCT"]

    complements = []
    # Write one for loop to set the complements ...
    for j in range(len(genes)):
        seq_comp = complement(seq)
        complements.append(seq_comp)

    # .. and another to write them - again using range(len))
    for j in range(len(genes)):
        print("Sequence:\t", seq[j])
        print("Complement:\t", complements[j])
  


if __name__=="""__main__""":
    with cProfile.Profile() as pr:
        main()

    # Produce statistics for profiler.
    stats = pstats.Stats(pr)
    # Sort statistics in order of most time spent.
    stats.sort_stats(pstats.SortKey.TIME)
    # Dump the statistics to a file for visualisation.
    stats.dump_stats(filename="profiling_data.prof")
