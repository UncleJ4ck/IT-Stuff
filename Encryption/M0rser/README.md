# M0rser

This project is an implementation of a morse code encoder/decoder.

## How it works  

The MorseCode class contains functions for encoding and decoding text messages and files. The class has the following public functions:
```
    std::string encode(std::string message): This function takes in a plaintext message as input and returns the morse code equivalent.

    std::string decode(std::string morse_code): This function takes in a morse code message as input and returns the plaintext equivalent.

    void encode_file(std::string filepath): This function takes in a filepath as input and reads the contents of the file, it then encodes each line of the file and prints the morse code equivalent to the console.

    void decode_file(std::string filepath): This function takes in a filepath as input and reads the contents of the file, it then decodes each line of the file and prints the plaintext equivalent to the console.
```
The ```main()``` function uses Boost's program_options library to parse command-line arguments. The user can specify whether to encode or decode a message, provide the text message or filepath, and choose whether to encode or decode the contents of a file. The filepath must be provided when the user wants to encode/decode the contents of a file.

The program also uses a maps in STL library, ascii_to_morse, that stores the mapping of ASCII characters to their morse code equivalents. Another map, morse_to_ascii is also built in the constructor of the MorseCode class, which is used to decode morse code messages.

The program can be compiled by running make command, and then run by providing the appropriate command-line arguments.

## Installation
```
git clone https://github.com/UncleJ4ck/IT-Stuff
cd Encryption/M0rser
make all
```

## Usage

To encode the message "HELLO" to morse code:

     ./m0r5er -e HELLO

To decode the morse code message ".... . .-.. .-.. ---" to ASCII:

     ./m0r5er -d ".... . .-.. .-.. ---"

To encode the contents of a file to morse code:

      ./m0r5er -E -f test.txt

To decode the contents of a file from morse code to ASCII:

      ./m0r5er -D -f test.txt
