class Bat : public Mammal {
	public:
		/**@brief Konstruktor.
		 * Mengkonstruksi kelas kelelawar*/
		Bat();
		
		/**@brief Destruktor.
		 * Mengdealokasi parameter pada kelas kelelawar*/
		~Bat();
		
		/**@brief Interaksi.
		 * Berinteraksi dengan hewan kelelawar*/
		void Interact();
		
		/**@brief Feed.
		 * Memberi makan hewan kelelawar*/
		void feed();
		
		/**@brief AnimalDescription.
		 * Menjelaskan secara khusus mengenai hewan*/
		void AnimalDescription();
};
