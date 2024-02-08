#ifndef Product_h
#define Product_h

class Product {
protected:
    std::string* product_name;
    std::string* language;
    std::string* genre;
    std::string* category;
    int* stock;
    double* price;
    std::string* product_code;
public:
    Product(){  //Constructor
        product_name = nullptr;
        language = nullptr;
        genre = nullptr;
        category = nullptr;
        stock = nullptr;
        price = nullptr;
        product_code = nullptr;
    }
    Product(std::string _product_name, std::string _language, std::string _genre, std::string _category, int _stock, double _price, std::string _product_code){ //Constructor with Parameter
        product_name = new std::string(_product_name);
        language = new std::string(_language);
        genre = new std::string(_genre);
        category = new std::string(_category);
        stock = new int(_stock);
        price = new double(_price);
        product_code = new std::string(_product_code);
    }
    Product(const Product& product){
        product_name = new std::string(*product.product_name);
        language = new std::string(*product.language);
        genre = new std::string(*product.genre);
        category = new std::string(*product.category);
        stock = new int(*product.stock);
        price = new double(*product.price);
        product_code = new std::string(*product.product_code);
    }
    virtual ~Product(){ //Destructor
        if (product_name != nullptr)
            delete product_name;
        if (language != nullptr)
            delete language;
        if (genre != nullptr)
            delete genre;
        if (category != nullptr)
            delete category;
        if (stock != nullptr)
            delete stock;
        if (price != nullptr)
            delete price;
        if (product_code != nullptr)
            delete product_code;
    }
    const std::string getProductName()const{return *this->product_name;}
    const std::string getLanguage()const{return *this->language;}
    const std::string getGenre()const{return *this->genre;}
    const std::string getCategory()const{return *this->category;}
    const int getStock()const{return *this->stock;}
    const double getPrice()const{return *this->price;}
    const std::string getProductCode()const{return *this->product_code;}
    
    void setProductName(std::string* _product_name){
        if (product_name != nullptr)
            delete product_name;
        product_name = new std::string(*_product_name);
    }
    void setLanguage(std::string* _language){
        if (language != nullptr)
            delete language;
        language = new std::string(*_language);
    }
    void setGenre(std::string* _genre){
        if (genre != nullptr)
            delete genre;
        genre = new std::string(*_genre);
    }
    void setCategory(std::string* _category){
        if (category != nullptr)
            delete category;
        category = new std::string(*_category);
    }
    void setStock(int* _stock){
        if (stock != nullptr)
            delete stock;
        stock = new int(*_stock);
    }
    void setPrice(double* _price){
        if (price != nullptr)
            delete price;
        price = new double(*_price);
    }
    void setProductCode(std::string* _product_code){
        if (product_code != nullptr)
            delete product_code;
        product_code = new std::string(*_product_code);
    }
    
    void loadProduct(){
        std::string pn, l, g, c, pc;
        int s;
        double p;
        std::cout << "Enter Product Name: ";
        std::cin >> pn;
        setProductName(&pn);
        std::cout << "Enter Language: ";
        std::cin >> l;
        setLanguage(&l);
        std::cout << "Enter Genre: ";
        std::cin >> g;
        setGenre(&g);
        std::cout << "Enter Category: ";
        std::cin >> c;
        setCategory(&c);
        std::cout << "Enter Stock: ";
        std::cin >> s;
        setStock(&s);
        std::cout << "Enter Price: ";
        std::cin >> p;
        setPrice(&p);
        std::cout << "Enter Product Code: ";
        std::cin >> pc;
        setProductCode(&pc);
    }
    
    virtual void display() = 0;
    virtual double calculateDiscount(){return 0.0;}
    
    void checkStock(int _stock){
        setStock(&_stock);
    }
    /*
    bool operator==(Product* prd){
        if (product_name == prd->product_name) {
            return true;
        }
        else
            return false;
    }
    friend bool operator==(Product& prd1, Product& prd2);
    */
};

class Music : public Product {
private:
    std::string* artist;
    std::string* format;
    float* run_time;
public:
    Music(){    //Constructor
        artist = nullptr;
        format = nullptr;
        run_time = nullptr;
    }
    Music(std::string _product_name, std::string _language, std::string _genre, std::string _category, int _stock, double _price, std::string _product_code, std::string _artist, std::string _format, float _run_time):Product(_product_name, _language, _genre, _category, _stock, _price, _product_code){    //Constructor with parameter
        artist = new std::string(_artist);
        format = new std::string(_format);
        run_time = new float(_run_time);
    }
    Music(const Music& music){
        product_name = new std::string(*music.product_name);
        language = new std::string(*music.language);
        genre = new std::string(*music.genre);
        category = new std::string(*music.category);
        stock = new int(*music.stock);
        price = new double(*music.price);
        product_code = new std::string(*music.product_code);
        
        artist = new std::string(*music.artist);
        format = new std::string(*music.format);
        run_time = new float(*music.run_time);
    }
    ~Music(){   //Destructor
        if (artist != nullptr)
            delete artist;
        if (format != nullptr)
            delete format;
        if (run_time != nullptr)
            delete run_time;
    }
    const std::string getArtist()const{return *this->artist;}
    const std::string getFormat()const{return *this->format;}
    const float getRunTime()const{return *this->run_time;}
    
    void setArtist(std::string* _artist){
        if (artist != nullptr)
            delete artist;
        artist = new std::string(*_artist);
    }
    void setFormat(std::string* _format){
        if (format != nullptr)
            delete format;
        format = new std::string(*_format);
    }
    void setRunTime(float* _run_time){
        if (run_time != nullptr)
            delete run_time;
        run_time = new float(*_run_time);
    }
    
    void loadProduct(){
        Product::loadProduct();
        std::string a, f;
        float rt;
        std::cout << "Enter Artist: ";
        std::cin >> a;
        setArtist(&a);
        std::cout << "Enter Format: ";
        std::cin >> f;
        setFormat(&f);
        std::cout << "Enter Run Time: ";
        std::cin >> rt;
        setRunTime(&rt);
    }
    
    void display(){
        std::cout << std::endl;
        std::cout << "Product Name: " << getProductName() << std::endl;
        std::cout << "Language: " << getLanguage() << std::endl;
        std::cout << "Genre: " << getGenre() << std::endl;
        std::cout << "Category: " << getCategory() << std::endl;
        std::cout << "Stock: " << getStock() << std::endl;
        std::cout << "Price: " << getPrice() << std::endl;
        std::cout << "Product Code: " << getProductCode() << std::endl;
        std::cout << "Artist: " << getArtist() << std::endl;
        std::cout << "Format: " << getFormat() << std::endl;
        std::cout << "Run Time: " << getRunTime() << std::endl;
        std::cout << std::endl;
    }
    
    double calculateDiscount(){return getPrice() * 0.85;}
};

class Book : public Product {
private:
    std::string* publisher;
    std::string* ISBN;
public:
    Book(){ //Constructor
        publisher = nullptr;
        ISBN = nullptr;
    }
    Book(std::string _product_name, std::string _language, std::string _genre, std::string _category, int _stock, double _price, std::string _product_code, std::string _publisher, std::string _ISBN):Product(_product_name, _language, _genre, _category, _stock, _price, _product_code){ //Constructor with parameter
        publisher = new std::string(_publisher);
        ISBN = new std::string(_ISBN);
    }
    Book(const Book& book){
        product_name = new std::string(*book.product_name);
        language = new std::string(*book.language);
        genre = new std::string(*book.genre);
        category = new std::string(*book.category);
        stock = new int(*book.stock);
        price = new double(*book.price);
        product_code = new std::string(*book.product_code);
        
        publisher = new std::string(*book.publisher);
        ISBN = new std::string(*book.ISBN);
    }
    ~Book(){    //Destructor
        if (publisher != nullptr)
            delete publisher;
        if (ISBN != nullptr)
            delete ISBN;
    }
    const std::string getPublisher()const{return *this->publisher;}
    const std::string getISBN()const{return *this->ISBN;}
    
    void setPublisher(std::string* _publisher){
        if (publisher != nullptr)
            delete publisher;
        publisher = new std::string(*_publisher);
    }
    void setISBN(std::string* _ISBN){
        if (ISBN != nullptr)
            delete ISBN;
        ISBN = new std::string(*_ISBN);
    }
    
    void loadProduct(){
        std::string p, i;
        std::cout << "Enter Publisher: ";
        std::cin >> p;
        setPublisher(&p);
        std::cout << "Enter ISBN: ";
        std::cin >> i;
        setISBN(&i);
    }
    
    void display(){
        std::cout << std::endl;
        std::cout << "Product Name: " << getProductName() << std::endl;
        std::cout << "Language: " << getLanguage() << std::endl;
        std::cout << "Genre: " << getGenre() << std::endl;
        std::cout << "Category: " << getCategory() << std::endl;
        std::cout << "Stock: " << getStock() << std::endl;
        std::cout << "Price: " << getPrice() << std::endl;
        std::cout << "Product Code: " << getProductCode() << std::endl;
        std::cout << "Publisher: " << getPublisher() << std::endl;
        std::cout << "ISBN: " << getISBN() << std::endl;
        std::cout << std::endl;
    }
    
    double calculateDiscount(){return getPrice() * 0.88;}
};

class Movie : public Product {
private:
    std::string* directors;
    std::string* starring;
    std::string* subtitles;
    std::string* audio_language;
public:
    Movie(){    //Constructor
        directors = nullptr;
        starring = nullptr;
        subtitles = nullptr;
        audio_language = nullptr;
    }
    Movie(std::string _product_name, std::string _language, std::string _genre, std::string _category, int _stock, double _price, std::string _product_code, std::string _directors1, std::string _directors2, std::string _starring1, std::string _starring2, std::string _starring3, std::string _subtitles, std::string _audio_language):Product(_product_name, _language, _genre, _category, _stock, _price, _product_code){    //Contructor with parameter
        std::string dk = _directors1 + " " + _directors2;
        directors = new std::string(dk);
        std::string sk = _starring1 + " " + _starring2 + " " + _starring3;
        starring = new std::string(sk);
        subtitles = new std::string(_subtitles);
        audio_language = new std::string(_audio_language);
    }
    Movie(const Movie& movie){
        product_name = new std::string(*movie.product_name);
        language = new std::string(*movie.language);
        genre = new std::string(*movie.genre);
        category = new std::string(*movie.category);
        stock = new int(*movie.stock);
        price = new double(*movie.price);
        product_code = new std::string(*movie.product_code);
        
        directors = new std::string(*movie.directors);
        starring = new std::string(*movie.starring);
        subtitles = new std::string(*movie.subtitles);
        audio_language = new std::string(*movie.audio_language);
    }
    ~Movie(){
        if (directors != nullptr)
            delete directors;
        if (starring != nullptr)
            delete starring;
        if (subtitles != nullptr)
            delete subtitles;
        if (audio_language != nullptr)
            delete audio_language;
    }
    const std::string getDirectors()const{return *this->directors;}
    const std::string getStarring()const{return *this->starring;}
    const std::string getSubtitles()const{return *this->subtitles;}
    const std::string getAudioLanguage()const{return *this->audio_language;}
    
    void setDirectors(std::string* _directors1, std::string* _directors2){
        if (!directors->empty())
            delete directors;
        std::string dk = *_directors1 + " " + *_directors2;
        directors = new std::string(dk);
    }
    void setStarring(std::string* _starring1, std::string* _starring2, std::string* _starring3){
        if (!starring->empty())
            delete starring;
        std::string sk = *_starring1 + " " + *_starring2 + " " + *_starring3;
        starring = new std::string(sk);
    }
    void setSubtitles(std::string* _subtitles){
        if (subtitles != nullptr)
            delete subtitles;
        subtitles = new std::string(*_subtitles);
    }
    void setAudioLanguage(std::string* _audio_language){
        if (audio_language != nullptr)
            delete audio_language;
        audio_language = new std::string(*_audio_language);
    }
    
    void loadProduct(){
        Product::loadProduct();
        std::string d1, d2, s1, s2, s3, sub, al;
        
        std::cout << "Enter First Directors: ";
        std::cin >> d1;
        std::cout << "Enter Second Directors: ";
        std::cin >> d2;
        setDirectors(&d1, &d2);
        std::cout << "Enter First Starring: ";
        std::cin >> s1;
        std::cout << "Enter Second Starring: ";
        std::cin >> s2;
        std::cout << "Enter Third Starring: ";
        std::cin >> s3;
        setStarring(&s1, &s2, &s3);
        std::cout << "Enter Subtitles: ";
        std::cin >> sub;
        setSubtitles(&sub);
        std::cout << "Enter Audio Language: ";
        std::cin >> al;
        setAudioLanguage(&al);
    }
    
    void display(){
        std::cout << std::endl;
        std::cout << "Product Name: " << getProductName() << std::endl;
        std::cout << "Language: " << getLanguage() << std::endl;
        std::cout << "Genre: " << getGenre() << std::endl;
        std::cout << "Category: " << getCategory() << std::endl;
        std::cout << "Stock: " << getStock() << std::endl;
        std::cout << "Price: " << getPrice() << std::endl;
        std::cout << "Product Code: " << getProductCode() << std::endl;
        std::cout << "Directors: " << getDirectors() << std::endl;
        std::cout << "Starring: " << getStarring() << std::endl;
        std::cout << "Subtitles: " << getSubtitles() << std::endl;
        std::cout << "Audio Language: " << getAudioLanguage() << std::endl;
        std::cout << std::endl;
    }
    
    double calculateDiscount(){return getPrice() * 0.95;}
};

#endif
