#ifndef DIET_H
#define DIET_H

/** @class DietType
  * kelas untuk menyimpan banyaknya porsi makanan yang dibutuhkan
  */
class DietType{
  public:
    /** @brief Constructor.
      * Menciptakan DietType kosong yang memiliki portion 0
      */
    DietType();
    /** @brief Constructor with parameter.
      * Menciptakan DietType dengan portion sebnyak p
      * @param p banyaknya porsi makanan yang dibutuhkan per hewan
      */
    DietType(int p);
        
    /** @brief Feed.
      * Memberi makan hewan berdasarkan makanannya 
      * @param feed Nilai beratnya makanan yang diberikan kepada hewan*/
    virtual void Feeds (int feed)=0;
    
    /** @brief getCode.
      * Mengembalikan satu char yang merupakan kode pembeda
      */
    char GetCode();
    
    /** @brief getPortion.
      * Mengembalikan porsi hewan relatif terhadap berat badan
      */
    int GetPortion();
      
  
  protected:
    int umum=60;
    int portion;
    char code;
};

#endif
