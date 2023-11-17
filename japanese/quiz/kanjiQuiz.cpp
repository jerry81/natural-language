#include <wchar.h>
#include <wctype.h>

#include <codecvt>  // For codecvt_utf8 if you're working with UTF-8 encoding
#include <fstream>
#include <iostream>
#include <locale>
#include <string>
#include <vector>

using namespace std;
struct Entry {
  string kanji = "";
  string pronuncation = "";
  string translation = "";
};
std::wstring trim(const std::wstring& str) {
  auto wsfront = std::find_if_not(str.begin(), str.end(),
                                  [](wint_t c) { return iswspace(c); });

  auto wsback = std::find_if_not(str.rbegin(), str.rend(), [](wint_t c) {
                  return iswspace(c);
                }).base();

  return (wsback <= wsfront ? L"" : std::wstring(wsfront, wsback));
}

std::vector<std::wstring> split(const std::wstring& str,
                                const std::wstring& delimiter) {
  std::vector<std::wstring> ret;

  size_t pos_start = 0;
  size_t pos_end = str.find(delimiter);

  while (pos_end != std::wstring::npos) {
    std::wstring part = trim(str.substr(pos_start, pos_end - pos_start));
    ret.push_back(part);
    pos_start = pos_end + delimiter.length();
    pos_end = str.find(delimiter, pos_start);
  }

  // To handle the last part after the last delimiter
  std::wstring lastPart = trim(str.substr(pos_start));
  if (!lastPart.empty()) {
    ret.push_back(lastPart);
  }

  return ret;
}
int main() {
  vector<Entry> entries;
  // Open the file
  // std::ifstream inputFile("../kanji.md");
  std::wifstream inputFile("../kanji.md");
  // Check if the file is open
  if (!inputFile.is_open()) {
    std::cerr << "Error opening the file." << std::endl;
    return 1;
  }

  // Read the file line by line
  std::wstring line;
  while (std::getline(inputFile, line)) {
    // vector<wstring> spl = split(line, L"→");
    // std::vector<std::wstring> spl = split(line, L"→");
    //     for (const auto& part : spl) {
    //         std::wcout << "Part: " << part << std::endl;
    //     }

    std::vector<std::wstring> spl = split(line, L"→");
    for (const auto& part : spl) {
      std::wcout << "Part: " << part << " [Hex:";
      for (wchar_t c : part) {
        std::wcout << " " << std::hex << static_cast<int>(c);
      }
      std::wcout << "]" << std::endl;
    }

    if (spl.size() < 2) continue;
    wstring k = spl[0];
    wstring h = spl[1];
    wcout << "k is " << k << "\n";
    wcout << "h is " << h << "\n";

    if (spl.size() > 2) {
      wstring t = spl[2];
      wcout << "t is " << t << "\n";
    }
  }

  // Close the file
  inputFile.close();

  return 0;
}
