
/*
 * Create classes Rectangle and RectangleArea
 */

    class Rectangle {
public:
    virtual void display() const {
        cout << width << ' ' << height << endl;
    }
    
protected:
    int width;
    int height;
};

class RectangleArea : public Rectangle {
public:
    void display() const override {
        cout << (width * height) << endl;
    }
    
    void read_input() {
        cin >> width >> height;
    }
};


