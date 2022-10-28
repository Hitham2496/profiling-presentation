import cProfile
import pstats

def complement(seq):
    """
    Calculates the complement of a nucleotide sequence
    seq, provided as a string.
    """
    if not(isinstance(seq, str)):
        raise(TypeError("Nucleotide sequence must be a string"))

    complement_bases = {"A": "T", "C": "G", "G": "C", "T": "A"}
    return "".join(complement_bases[base] for base in seq) 

def main():

    genes = ["TACCAGATTAGCCATGAGGATGGATCCGATA",
             "ATCACCGTTGATGCCTTGATTAAGCAACCGT",
             "GCCACGAATCTCTTAGGCGGTTAAGACTATA",
             "GCGGTATGGATAGCCATACCCATGAGGATCT"]

    for seq in genes:
        print("Sequence:\t", seq)
        comp_seq = complement(seq)
        print("Complement:\t", comp_seq)


if __name__ == """__main__""":
    with cProfile.Profile() as pr:
        main()

    # Produce statistics for profiler.
    stats = pstats.Stats(pr)
    # Sort statistics in order of most time spent.
    stats.sort_stats(pstats.SortKey.TIME)
    # Dump the statistics to a file for visualisation.
    stats.dump_stats(filename="profiling_data.prof")
