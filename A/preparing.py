import sys
from textwrap import dedent


def generate_source_code(*args, **kwargs):
    source_code = """\
    int segment_sum(int from, int to) {
        int sum = 0;
        for (int x = from; x < to; ++x) {
            sum += x;
        }
        return sum;
    }"""

    return dedent(source_code)


if __name__ == "__main__":
    with open(sys.argv[1], "w") as f:
        f.write(generate_source_code())
