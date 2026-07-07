"""
Floyd's Triangle
------------------
Logic: We keep a single running counter starting at 1.
For row i (1 to num_rows), we print i numbers, incrementing
the counter after every number printed. This naturally produces
consecutive natural numbers arranged in a right-angled triangle.
"""


def print_floyds_triangle(num_rows):
    counter = 1

    for i in range(1, num_rows + 1):
        row_str = ""
        for j in range(1, i + 1):
            row_str += f"{counter:4d}"
            counter += 1
        print(row_str)


def main():
    num_rows = int(input("Enter number of rows: "))

    if num_rows <= 0:
        print("Number of rows must be positive.")
        return

    print_floyds_triangle(num_rows)


if __name__ == "__main__":
    main()
