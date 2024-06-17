#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <array>
#include <random>
#include <time.h>
#include <Windows.h>

/**
 *  @brief struct __itemList__ berisi list soal dan pilihan jawaban yang akan ditampilkan pada program quizz.
 *  Soal-soal berada pada vector question_bank dan pilihan jawaban dari masing-masing soal disimpan di dalam vector
 *  vector masing-masing soal.
 */

typedef struct __itemListPerformed__ {

    //  Vector untuk menyimpan soal-soal yang ditampilkan pada program
    private : 
        std::vector <std::string> question_bank = {
            "Dibawah ini merupakan tipe data bilangan bulat?",  // 1
            "Bahasa C++ diperkenalkan pertama kali pada tahun?",    // 2
            "Perintah cin pada program C++ digunakan untuk?",   // 3
            "Suatu objek dalam pemrograman yang menyimpan nilai atau data yang dapat berubah-ubah disebut?",  // 4
            "Variabel yang hanya dapat digunakan di dalam fungsi yang dideklarasikan disebut sebagai?", // 5
            "Karakteristik bahasa yang umum digunakan pada penulisan algoritma secara Pseudocode adalah menyerupai?",   // 6
            "C++ bersifat Case Sensitive yang artinya adalah?", // 7
            "Berikut syntax yang benar untuk menghasilkan output \"Hello World\" di C++?", // 8
            "Bagaimana cara membuat komentar di C++?",  // 9
            "Setiap perintah di dalam C++ selalu diakhiri dengan tanda?",   // 10
            "Bahasa C++ adalah?",   // 11
            "Di bawah ini yang merupakan tipe data dalam C++?", // 12
            "Apa fungsi dari tipe data char?",  // 13
            "Index array dimulai dari?", // 14
            "File Header mana yang memungkinkan kita bekerja dengan fungsi input dan output?",  // 15
            "Berapa banyak nilai yang dapat dikembalikan oleh fungsi C++", // 16
            "Kata kunci apa yang digunakan untuk menghentikan perulangan?", // 17
            "Apa kegunaan dari tanda kurawal ({}) pada pemrograman C++?",   // 18
            "Berikut ini yang termasuk fungsi perulangan, kecuali?",    // 19
            "Berikut adalah cara yang benar untuk mendeklarasikan array di C++?",   // 20
            "Kegunaan dari perintah Clrscr adalah?",    // 21
            "Perbedaan fungsi dan prosedur adalah?",    // 22
            "++ dan -- merupakan operator?",    // 23
            "Ciri-ciri dari prosedur adalah sebagai berikut, kecuali?", // 24
            "Siapa pembuat C++?", // 25
    };

    private : 
        std::vector <std::string> option_1stQuestion = { 
            "Int", 
            "String", 
            "Cin", 
            "char",
        };

        std::vector <std::string> option_2ndQuestion = {
            "1983", 
            "1980", 
            "1973", 
            "1970",
        };

        std::vector <std::string> option_3thQuestion = {
            "Menginput suatu nilai dari suatu piranti masukan (keyboard)", 
            "Mengulang proses looping pada program", 
            "Menampilkan data pada layar", 
            "Mendeklarasikan variabel",
        };

        std::vector <std::string> option_4thQuestion = {
            "Tipe data", 
            "Variable", 
            "Main", 
            "Konstanta",
        };

        std::vector <std::string> option_5thQuestion = {
            "Variabel global", 
            "Variabel lokal", 
            "A dan B benar", 
            "Semuanya salah",
        };

        std::vector <std::string> option_6thQuestion = {
            "Sembarang bahasa asal terstruktur", 
            "Bahasa puitis", 
            "Bahasa pemrograman", 
            "Bahasa mesin",
        };

        std::vector <std::string> option_7thQuestion = {
            "Tanda baca", 
            "Spasi dan jarak", 
            "Angka besar dan kecil", 
            "Huruf kapital dan huruf kecil",
        };

        std::vector <std::string> option_8thQuestion = {
            "System.out.print(\"Hello World\");", 
            "print << \"Hello World\";", 
            "echo \"Hello World\";", 
            "cout << \"Hello World\";",
        };

        std::vector <std::string> option_9thQuestion = {
            "<ini komentar>",
            "// ini komentar",
            "\\\\ ini komentar",
            "#ini komentar",
        };

        std::vector <std::string> option_10thQuestion = {
            "}",
            ":",
            ";",
            "]",
        };

        std::vector <std::string> option_11thQuestion = {
            "Sebuah bahasa pemrograman tingkat tinggi",
            "Sebuah bahasa pemrograman tingkat atas",
            "Sebuah bahasa pemrograman tingkat menengah",
            "Sebuah bahasa pemrograman tingkat rendah",
        };

        std::vector <std::string> option_12thQuestion = {
            "int, float, char, double, const",
            "float, int, double, cost",
            "int, float, char, double",
            "const, main, void, double",
        };

        std::vector <std::string> option_13thQuestion = {
            "Menulis karakter",
            "Menulis nilai huruf",
            "Memberikan efek",
            "Memberikan warna",
        };

        std::vector <std::string> option_14thQuestion = {
            "Satu",
            "Nol",
            "Dua",
            "Bukan salah satu dari seluruh pilihan",
        };

        std::vector <std::string> option_15thQuestion = {
            "#include <inputstr>",
            "#include <iosstring>",
            "#include <iostream>",
            "#include <stream>",
        };

        std::vector <std::string> option_16thQuestion = {
            "1",
            "0",
            "Tak berhingga",
            "Tidak ada opsi yang benar",
        };

        std::vector <std::string> option_17thQuestion = {
            "break",
            "stop",
            "exit",
            "return",
        };

        std::vector <std::string> option_18thQuestion = {
            "Mengeksekusi program",
            "Membatasi wilayah fungsi, prosedur, class, dan lainnya",
            "Mengkompilasi program",
            "Menghentikan seluruh proses pada program",
        };

        std::vector <std::string> option_19thQuestion = {
            "if",
            "do while",
            "for",
            "while do",
        };

        std::vector <std::string> option_20thQuestion = {
            "int nilai{10}",
            "int nilai[10];",
            "int nilai = new int[10];",
            "int nilai;",
        };

        std::vector <std::string> option_21stQuestion = {
            "Menampilkan output",
            "Membersihkan layar",
            "Menahan tampilan output",
            "Menampilkan karakter tertentu",
        };

        std::vector <std::string> option_22ndQuestion = {
            "Fungsi memiliki parameter sedangkan prosedur tidak",
            "Fungsi memberikan nilai balikan sementara prosedur tidak",
            "Fungsi dapat dipanggil di dalam fungsi main sementara prosedur tidak",
            "Fungsi melakukan deklarasi dalam fungsi yang lain sedangkan prosedur tidak",
        };

        std::vector <std::string> option_23thQuestion = {
            "Operator aritmatika",
            "Operator increment dan decrement",
            "Operator majemuk",
            "Operator logika",
        };

        std::vector <std::string> option_24thQuestion = {
            "Tidak adanya keyword return",
            "Tidak adanya tipe data dalam deklarasi fungsi",
            "Tidak dapat langsung ditampilkan hasilnya dan tidak memiliki nilai kembalian fungsi",
            "Menggunakan keyboard",
        };

        std::vector <std::string> option_25thQuestion = {
            "Dennis Ritchie",
            "Bjarne Stroustrup",
            "James Gosling",
            "Guido Van Rossum",
        };

    private :
        std::vector <std::vector <std::string>> option_bank = {
            option_1stQuestion, 
            option_2ndQuestion,
            option_3thQuestion,
            option_4thQuestion,
            option_5thQuestion,
            option_6thQuestion,
            option_7thQuestion,
            option_8thQuestion,
            option_9thQuestion,
            option_10thQuestion,
            option_11thQuestion,
            option_12thQuestion,
            option_13thQuestion,
            option_14thQuestion,
            option_15thQuestion,
            option_16thQuestion,
            option_17thQuestion,
            option_18thQuestion,
            option_19thQuestion,
            option_20thQuestion,
            option_21stQuestion,
            option_22ndQuestion,
            option_23thQuestion,
            option_24thQuestion,
            option_25thQuestion,
        };

    private :
        std::vector <std::string> keyAnswer_bank = {
            "Int",  // 1
            "1983", // 2
            "Menginput suatu nilai dari suatu piranti masukan (keyboard)",  // 3
            "Variable", // 4
            "Variabel lokal",   // 5
            "Bahasa pemrograman",   // 6
            "Huruf kapital dan huruf kecil",    // 7
            "cout << \"Hello World\";", // 8
            "// ini komentar",   // 9
            ";",    // 10
            "Sebuah bahasa pemrograman tingkat tinggi", // 11
            "int, float, char, double", // 12
            "Menulis karakter", // 13
            "Nol",  //  14
            "#include <iostream>",  // 15
            "1",    // 16
            "break",    // 17
            "Membatasi wilayah fungsi, prosedur, class, dan lainnya",   // 18
            "if",   //  19
            "int nilai[10];",   // 20
            "Membersihkan layar",   // 21
            "Fungsi memberikan nilai balikan sementara prosedur tidak", // 22
            "Operator increment dan decrement", // 23
            "Tidak adanya keyword return",  // 24
            "Bjarne Stroustrup",    // 25
        };

    //  prosedur untuk masalah scoring
    private : std::array <int, 10> score_record = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    private : int getScore() {
        int score = 0;
        for (int i = 0; i < 10; i++) {
            score += this->score_record[i];
        }
        return score;
    }
    
    //  prosedur index_questionToPrint() adalah prosedur untuk menentukan soal-soal yang akan ditampilkan pada program
    //  kepada user. Akan dipilih 10 dari 25 soal yang tersedia.
    private : std::array <int, 10> indexList_toShow;
    private : std::array <int , 4> indexOption_toShow;
    private : void performShuffle() {
        std::srand(time(NULL));
        std::array <int,25> questionList = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
        std::random_shuffle(questionList.begin(), questionList.end()); // 5 6 8 10 13 18...
        std::array <int,4> optionList = {0,1,2,3};
        std::random_shuffle(optionList.begin(), optionList.end()); // 3 1 0 2
    
        for (int i = 0; i < 10; i++) {
            this->indexList_toShow[i] = questionList[i];
        }

        for (int j = 0; j < 4; j++) {
            this->indexOption_toShow[j] = optionList[j];
        }  
    }
    
    //  prosedur untuk menampilkan list pilihan jawaban beserta soal yang sesuai berdasarkan index yang yang disimpan di dalam
    //  array list_toShow.
    
    private : void answerAndQuestion_print() {
        std::array <std::string, 10> answer_record; 
        int index = 0; // pointer
        std::string trueCharacter; //  Menyimpan nilai dari karakter opsi apabila menampilkan jawaban yang benar
        std::string userInput;
        while (true) {
            char character = 'A';
            std::cout << this->question_bank[this->indexList_toShow[index]] << std::endl;
            for (int i = 0; i < 4; i++) {
                std::string temporaryOption = this->option_bank[this->indexList_toShow[index]][this->indexOption_toShow[i]];
                std::cout << "[" << character << "]\t";
                std::cout << temporaryOption;

                if (temporaryOption == this->keyAnswer_bank[this->indexList_toShow[index]]) {
                    trueCharacter = character;
                }

                std::cout << std::endl;
                character++;
            }

            //  Menampilkan jawaban yang sebelumnya diinputkan oleh user
            std::cout << std::endl;
            std::cout << "Jawaban Anda: " << answer_record[index] << std::endl;

            //  Menangani penginputan oleh user
            std::cout << std::endl;
            std::cout << "Input Jawaban: ";
            std::cin >> userInput;
            std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);

            //  Pembatas supaya user hanya menginputkan karakter dari a sampai b
            if (userInput == "A" || userInput == "B" || userInput == "C" || userInput == "D") {
                answer_record[index] = userInput;
                if (userInput == trueCharacter) {
                    this->score_record[index] += 10;
                } else {
                    this->score_record[index] = 0;
                }

                if(index == 9) {
                    std::cout << "Periksa kembali jawaban anda. Ketik END untuk mengakhiri kuis!" << std::endl;
                    system("pause");
                } else {
                    index++;
                }
            } else if (userInput == "BACK") {
                if (index == 0) {
                    std::cout << "\aAnda mencapai batas!" << std::endl;
                    system("pause");
                } else {
                    index--;
                }
            } else if (userInput == "NEXT") {
                if (index == 9) {
                    std::cout << "\aAnda mencapai batas!" << std::endl;
                    system("pause");
                } else {
                    index++;
                }
            } else if (userInput == "END") {
                system("cls");
                std::cout << "####### PEROLEHAN NILAI #######" << std::endl;
                std::cout << "Kalkulasi perolehan nilai ";
                int threeSecondBlink = 1;

                while (threeSecondBlink <= 3) {
                    std::cout << ". ";
                    Sleep(1000); 
                    threeSecondBlink++;
                }

                std::cout << std::endl;

                std::cout << "Nilai yang diperoleh: " << getScore()  << " %" << std::endl;
                system("pause");
                break;
            } 
    
            system("cls");
        }
    }

    public : void shuffleAndPerform() {
        performShuffle(); // ngacak
        answerAndQuestion_print(); // nampilin
    }
    
};

typedef struct __display__ {

    //  Prosedur untuk menampilkan display pada saat permainan kuis dimulai. Adapun yang ditampilkan adalah soal+pilihan dengan
    //  Timer yang diatur sebanyak 20 menit = 1200 detik
    //  Integrasi timer dengan perform menggunakan multithreading.
    private : void startGame() {
        __itemListPerformed__ *perform = new __itemListPerformed__;
        perform->shuffleAndPerform();
        system("cls");
        printTitle();
        delete perform;
    }

    //  Prosedur untuk menampilkan display judul
    public : void printTitle() {
        std::cout << "  _____			       ____" << std::endl;
        std::cout << " / ___ \\        _ 	      / ___|" << std::endl;
        std::cout << "| |   | | _   _(_)____ ____  | | ___  __ _ _ __ ___   ___" << std::endl;
        std::cout << "| |  \\ \\|| | | | |__ //__ /  | ||_  |/ _` | `_ ` _ \\ / _ \\" << std::endl;
        std::cout << "| |___\\ \\| |_| | |/ /_ / /__ | |__| | (_| | | | | | |  __/" << std::endl;
        std::cout << " \\_____\\_\\_____|_|____/____/  \\_____|\\__,_|_| |_| |_|\\___|" << std::endl;
        std::cout << "..........................................................." << std::endl;
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
        std::cout << std::endl;

        std::cout << "Aplikasi quizz seputar pemrograman yang dirancang oleh grup" << std::endl;
        std::cout << "1 Teknik Komputer kelas 2A Universitas Pendidikan Indonesia" << std::endl;
        std::cout << "dalam rangka memenuhi tugas besar pada mata kuliah" << std::endl;
        std::cout << "Pemrograman Lanjut." << std::endl;
        std::cout << std::endl;

        std::cout << "Creator: " << std::endl;
        std::cout << "    -  2102986_Afif Nasrullah Subagja" << std::endl;
        std::cout << "    -  2102635_Johan Kristianto" << std::endl;
        std::cout << "    -  2100486_Muhammad Abdul Aziz" << std::endl;
        std::cout << "    -  2104062_Rega Madila Tresnahadi" << std::endl;
        std::cout << "    -  2106286_Wikan Gandang Palgunadi" << std::endl;
        std::cout << std::endl;
        std::cout << "-----------------------------------------------------------" << std::endl;
        std::cout << std::endl;

        printMenu();
    }

    //  Prosedur untuk menampilkan display menu dan menampilkan display selanjutnya berdasarkan inputan user
    private : void printMenu() {
        std::cout << "[1]\tMulai Kuis" << std::endl;
        std::cout << "[2]\tPanduan Program" << std::endl;
        std::cout << "[3]\tKeluar" << std::endl;
        std::cout << std::endl; 

        //  Menangani penginputan oleh user
        std::string userInput;
        std::cout << "input: ";
        std::getline(std::cin, userInput);

        if (userInput == "1") {
            system("cls"); 
            startGame();
        } else if (userInput == "3") {
            system("exit");
        } else if (userInput == "2") {
            system("cls");
            printTutorial();
        } else {
            system("cls");
            printTitle();
        }
    }

    private : void printTutorial() {
        std::cout << "-----------------------------------------------------------" << std::endl;
        std::cout << "(+)\tUntuk memulai kuis, masukan angka 1 pada input sehingga" << std::endl;
        std::cout << "   \takan muncul soal pertama beserta opsi pilihannya.\n" << std::endl;
        system("pause");
        std::cout << "\n";
        std::cout << "(+)\tJawablah soal yang diberikan dengan memasukkan karakter" << std::endl;
        std::cout << "   \tdari opsi jawaban yang dipilih. Karakter yang dimasukkan" << std::endl;
        std::cout << "   \ttidak perlu memperhatikan huruf kecil dan besarnya," << std::endl;
        std::cout << "   \tcontoh: C atau c.\n" << std::endl;
        system("pause");
        std::cout << "\n";
        std::cout << "(+)\tUntuk beralih ke soal selanjutnya masukan perintah next." << std::endl;
        std::cout << "   \tUntuk kembali ke soal sebelumnya masukkan perintah back." << std::endl;
        std::cout << "   \tApabila kuis ingin diakhiri masukkan perintah end untuk" << std::endl;
        std::cout << "   \tmemunculkan nilai yang diperoleh berdasarkan jawaban" << std::endl;
        std::cout << "   \tbenar (1 jawaban benar bernilai 10 point)\n" << std::endl;
        std::cout << "-----------------------------------------------------------" << std::endl;
        system("pause");
        system("cls");
        printTitle();
    }
};

int main(int argc, char const *argv[]) {
    __display__ *start = new __display__;
    start->printTitle();
    delete start;
    return 0;
}