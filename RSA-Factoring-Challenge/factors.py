import sys

def factorize(number):
    factors = []
    for i in range(2, number // 2 + 1):
        if number % i == 0:
        factors.append((i, number // i))
        return factors

        def main():
        if len(sys.argv) != 2:
            print("Usage: python factors.py <file>")
    return

        filename = sys.argv[1]

    try:
    with open(filename, 'r') as file:
        numbers = file.readlines()

    for num in numbers:
        num = int(num)
        factor_pairs = factorize(num)

    for pair in factor_pairs:
        print(f"{num}={pair[0]}*{pair[1]}")
    except FileNotFoundError:
        print(f"File '{filename}' not found.")
    except ValueError:
        print("Invalid input. File contains non-numeric value(s) or empty line(s).")
    except Exception as e:
        print(f"An error occurred: {e}")

        if __name__ == "__main__":
main()
