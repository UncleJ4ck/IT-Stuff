#include "../inc/morse.h"


namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    std::string input;
    std::string filepath;
    bool encode = true;
    bool is_file = false;

    po::options_description desc("Program Usage");
    desc.add_options()
        ("help,h", "M0r5er (A tool to encode / decode morse code)\nUsage : ./m0r5er -e <ASCII_CODE> || ./m0r5er -d <MORSE_CODE>")
        ("encode,e", po::value<std::string>(&input), "Encode your ASCII message to a Morse code")
        ("decode,d", po::value<std::string>(&input), "Decode your Morse code to an ASCII message")
        ("file,f", po::value<std::string>(&filepath), "File path of the input")
        ("encode-file,E", "Encode the file content from ASCII to Morse")
        ("decode-file,D", "Decode the file content from Morse to ASCII");

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        std::cout << desc << std::endl;
        return 0;
    }

    if (vm.count("encode-file")) {
        is_file = true;
    } else if (vm.count("decode-file")) {
        is_file = true;
        encode = false;
    } else if (vm.count("encode")) {
        input = vm["encode"].as<std::string>();
    } else if (vm.count("decode")) {
        input = vm["decode"].as<std::string>();
        encode = false;
    } else {
        std::cout << "Error: Invalid option. Must be '-e' or '-d'." << std::endl;
        return 1;
    }

    if (vm.count("file")) {
        filepath = vm["file"].as<std::string>();
    }

    MorseCode morse;

    if (is_file) {
        if (filepath.empty()) {
            std::cout << "Error: Please provide a file path." << std::endl;
            return 1;
        }
        if (encode) {
            morse.encode_file(filepath);
        } else {
            morse.decode_file(filepath);
        }
    } else {
        if (encode) {
            std::cout << morse.encode(input) << std::endl;
        } else {
            std::cout << morse.decode(input) << std::endl;
        }
    }

    return 0;
}