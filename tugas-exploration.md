> # Tugas Eksplorasi : Binary Representation

- ### **OPERATOR & (AND)** 
    - Operasi ini menghasilkan nilai yang sama dengan membandingkan setiap bit dari operan yang diberikan satu per satu.
    
    - apabila kedua nilai bit dari setiap operan bernilai 1 maka menghasilkan bit bernilai satu, selain itu menghasilkan nilai 0

        - **Contoh :**
        
            13 = 01101 *(dalam biner)*
        
            17 = 10001 *(dalam biner)*

            *13 & 17 (menghasilkan nilai 13 & 17 = 1)*

                1 = 00001 (dalam biner)


- ### **OPERATOR | (OR)**
    - Operasi ini akan membandingkan bit per bit dari kedua bilangan yang diberikan. 

    - apbila salah satu bit bernilai 1 maka menghasilkan bit 1, jika kedua bit tidak ada yang bernilai 1, maka menghasilkan bit 0

        - **Contoh :**

            *13 | 17 (menghasilkan nilai 13 | 17 = 29)*
            
                (29 = 11101 dalam biner)

- ### **OPERATOR ^ (XOR)**
    - operasi untuk menentukan bit mana saja yang berbeda antara dua bilangan yang berbeda

    - apabila bit kedua bit bernilai berbeda, maka menghasilkan bit 1, sebaliknya jika kedua bit bernilai sama maka menghasilkan bit 0

        - **Contoh :**

            13 ^ 17 (menghasilkan nilai 13 ^ 17 = 28)

                (28 = 11100 dalam biner)

- ### **OPERATOR ~ (NOT)**
    - Operator untuk mengubah nilai setiap bit dari operandnya. 
    - Operasi ini menghasilkan kebalikan nilai dari tiap bitnya

        - **Contoh :**

            ~13 (menghasilkan nilai ~13 = -14)

                (-14 = 10010 dalam biner)

- ### **OPERATOR << (LEFT SHIFT)**
    - Operator untuk mengalikan nilai numerik dengan 2 pangkat yang sesuai dengan jumlah bit yang digeser.
    - operator ini bekerja dengan menambahkan sejumlah (sesuai dengan besaran bilangan yang dimasukkan) bit diakhir bit operan sehingga jumlah bit bertambah dan menghasilkan nilai baru

        - **Contoh :**

            13 << 2 (menghasilkan nilai 13 << 2 = 52)

                (52 = 0110100 dalam biner)

- ### **OPERATOR >> (RIGHT SHIFT)**
    - operator ini digunakan untuk memindahkan      bit-bit dari sebuah nilai ke kanan.

    - operator ini bekerja dengan menghilangkan sejumlah (sesuai dengan besaran bilangan yang dimasukkan) bit bagian akhir, sehingga jumlah bit berkurang dan menghasilkan nilai baru

        - **Contoh :**

            13 >> 2 (menghasilkan nilai 13 >> 2 = 3)

                (3 = 11 dalam biner)











