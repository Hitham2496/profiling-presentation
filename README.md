# Presentation Material for Profiling Talk at IPPP Computing Club

In this repository is hosted a Python and C++ implementation of a simple procedure to find the complement of a gene nucleotide sequence in biochemistry.

In both the `python` and `cpp` directories is an optimised implementation (in `optimised`) and a less optimised implementation (in `original`), the interactive component of this presentation will require the audience to profile the implementation they prefer.

First clone the repository and move to the directory created:

```
git clone https://github.com/Hitham2496/profiling-presentation.git
cd profiling-presentation
```

## C++

To profile the C++ code, we use [`Valgrind`](https://valgrind.org/), move to the original implementation in `cpp/original` and follow the instructions in the slides.

You may then move to the `cpp/optimised` directory and repeat the profiling process.

Take time to look at the code as well and understand what could be causing performance issues, some of the comments may be helpful

## Python

Similarly we use the in-built `cProfile` and `pstats` packages to profile the Python implementations.

Follow the instructions on the slides in both the `python/original` and `python/optimised` directories and visualise the output with e.g. `snakeviz`.

To install `snakeviz` you may use `pip` e.g.

```
pip install snakeviz (--user)
```
