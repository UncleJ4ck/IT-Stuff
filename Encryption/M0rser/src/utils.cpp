#include "../inc/morse.h"

MorseCode::MorseCode() {
    // build the reversed map
    for (auto code: ascii_to_morse) {
        morse_to_ascii[code.second] = code.first;
    }
}

std::string MorseCode::encode(std::string message) {
    // Convert message to uppercase
    std::transform(message.begin(), message.end(), message.begin(), ::toupper);

    std::string morse_code;
    for (char c : message) {
        morse_code += ascii_to_morse[c];
        morse_code += ' ';
    }
    return morse_code;
}

std::string MorseCode::decode(std::string morse_code) {
    std::stringstream morse_stream(morse_code);
    std::string morse_word;
    std::string message;

    while (morse_stream >> morse_word) {
        message += morse_to_ascii[morse_word];
    }
    return message;
}

void MorseCode::encode_file(std::string filepath) {
    std::ifstream input_file(filepath);
    std::string line;

    if (!input_file) {
        std::cout << "Error: could not open input file." << std::endl;
        return;
    }

    while (std::getline(input_file, line)) {
        std::cout << encode(line) << std::endl;
    }

    input_file.close();
}

void MorseCode::decode_file(std::string filepath) {
    std::ifstream input_file(filepath);
    std::string line;

    if (!input_file) {
        std::cout << "Error: could not open input file." << std::endl;
        return;
    }

    while (std::getline(input_file, line)) {
        std::cout << decode(line) << std::endl;
    }

    input_file.close();
}
