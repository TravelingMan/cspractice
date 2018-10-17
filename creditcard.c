/*
Credit Card Verification
------------------------

Determine, via checksum, if a credit card number is valid and from what company
it's from (e.g. VISA, MasterCard).

Task:
- Prompt and validate CC number
- Analyze checksum of the number
    - Starting from second-to-last digit, multiply every digit by 2
    - Add those products' digits together (not the numbers, the digits! So instead of n + 14, it should be n + 1 + 4)
    - Add the sum to the sum of digits that were not multiplied by 2 together
    - If the last digit is 0, the checksum is valid
- Display company ID and checksum validity
    - Amex: 15 digits, starts with 34, 37
    - MasterCard: 16 digits, starts with 51, 52, 53, 54, 55
    - Visa: 13 and 16 digits, starts with 4
    - Requires keeping track of first two digits of the CC number along with the length of the CC number

**/