#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <map>
#include <iomanip>
#include <unordered_set>
#include <vector>

using namespace std;

void Calculate_FREQUENCY(unordered_set<string> &C_W, map<string, int> &FREQUENCY) {
    string WORD;
    char ch;
    string READER;
    ifstream PROCESS_FILE("testfile.txt");

    // Check if file exists
    if (!PROCESS_FILE) {
        cerr << "Error: Unable to open testfile.txt" << endl;
        return;
    }

    //Read file character by character to avoid redundant memory usage.
    while (PROCESS_FILE.get(ch)) {
            if (isalpha(ch)) {
                WORD += tolower(ch);
            } else {
                // Ignore common words
                if (!WORD.empty() && C_W.find(WORD) == C_W.end()) {
                    FREQUENCY[WORD]++;
                }
                // Reset word
                WORD.clear();
            }
    }
    // Closing the file since it is no longer needed. This process clears unwanted space.
    PROCESS_FILE.close(); 

     // Process last word in line
    if (!WORD.empty() && C_W.find(WORD) == C_W.end()) {
        FREQUENCY[WORD]++;
    }
    
}

int main() {
    // Set of common words to ignore
    unordered_set<string> C_W = { 
        "the", "is", "an", "a", "and", "this", "that", "it", "of", "on",
        "he", "she", "they", "them", "her", "him", "his", "was", "were", "are",
        "to", "for", "with", "as", "at", "by", "from", "about", "but", "not",
        "be", "have", "has", "had", "do", "does", "did", "can", "could", "will",
        "would", "shall", "should", "may", "might", "must"
    };

    map<string, int> FREQUENCY;
    Calculate_FREQUENCY(C_W, FREQUENCY);

    vector<pair<string, int>> MAX_OCCURRENCE(FREQUENCY.begin(), FREQUENCY.end());

    // Sort words by frequency (descending)
    sort(MAX_OCCURRENCE.begin(), MAX_OCCURRENCE.end(), [](const auto &a, const auto &b) {
        return a.second > b.second;
    });

    // Print top 10 words (excluding common words)
    int i = 1;
    cout << "\n---Top 10 Most Frequent Words---\n\n";

    cout << left << setw(5) << "Sno" 
     << setw(15) << "Word" 
     << setw(10) << "Frequency" << endl;
    cout << string(35, '-') << endl; // Horizontal separator

    for (const auto &it : MAX_OCCURRENCE) {
        if (i > 10) break;
        cout << left << setw(5) << i 
            << setw(15) << it.first 
            << setw(10) << it.second << endl;
        i++;
    }

    return 0;
}
