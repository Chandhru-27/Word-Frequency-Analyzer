# Word-Frequency-Analyzer
This simple C++ File Reader &amp; Word Frequency Analyzer reads a text file, processes its content, and identifies the top 10 most frequent words while filtering common words. It uses file handling, maps, and sorting algorithms for efficient text analysis. 🚀

---

# **File Reader & Word Frequency Analyzer**  

## 📌 **Project Overview**  
This **C++ program** reads a text file (`testfile.txt`), processes its content, and determines the **top 10 most frequently occurring words** (excluding common words). It efficiently handles file reading, text parsing, and word frequency analysis.  

## 🚀 **Features**  
✔ Reads content from `testfile.txt`  
✔ Ignores common words (e.g., *the, is, and, of, to*)  
✔ Counts word occurrences efficiently  
✔ Displays the **top 10 most frequent words** in a structured format  
✔ Uses **file handling, maps, vectors, and sorting algorithms**  

## 📂 **How It Works**  
1️⃣ The program reads `testfile.txt` character by character to optimize memory usage.  
2️⃣ It extracts words, converting them to lowercase.  
3️⃣ Common words are **filtered out** to ensure meaningful frequency analysis.  
4️⃣ The word occurrences are stored in a **map (dictionary-like structure)**.  
5️⃣ The words are sorted based on frequency, and the **top 10 results** are displayed.  

## 🛠 **Technologies Used**  
🔹 C++ (Standard Library: `<fstream>`, `<map>`, `<vector>`, `<algorithm>`)  
🔹 File Handling  
🔹 Data Structures (Maps, Vectors, Sets)  
🔹 Sorting Algorithms  

## 📌 **Usage**  
1. Place your text file (`testfile.txt`) in the same directory as the program.  
2. Compile and run the C++ file:  
   ```sh
   g++ FileReader.Cpp -o FileReader
   ./FileReader
   ```  
3. View the **top 10 most frequent words** in the output.  

## 📌 **Example Output**  
```
---Top 10 Most Frequent Words---

Sno   Word           Frequency  
-----------------------------------
1     c++            3  
2     programming    2  
3     system         2  
4     function       2  
5     development    2  
6     resources      1  
7     complex        1  
8     flexibility    1  
9     modular        1  
10    software       1  
```  

## 📌 **Future Enhancements**  
✔ Allow users to specify the input file name dynamically.  
✔ Enable **custom stop-word filtering** for more control over analysis.  
✔ Implement **GUI-based visualization** of word frequency.  

---

## Author
Chandhru Loganathan
