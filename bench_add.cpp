#include <benchmark/benchmark.h>

#include "my_add.hpp"

///Bench

static void BM_my_add(benchmark::State& state) {
  for (auto _ : state)
    my_add(40,5);
}

BENCHMARK(BM_my_add);

BENCHMARK_MAIN();