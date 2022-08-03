    class Rectangle {
        private:
            int width, height;

        public:
            Rectangle(int width, int height) {
                this->width = width;
                this->height = height;
            }

            int get_width() const { return this->width; }

            int get_height() const { return this->height; }

            void set_width(int width) {
                if(width <= 0 || width > 1000) return;

                this->width = width;
            }

            void set_height(int height) {
                if(height <= 0 || height > 2000) return;

                this->height = height;
            }

            int area() const { return this->width * this->height; }

            int perimeter() const { return (this->width + this->height) * 2; }

            bool is_square() const {
                if(this->width == this->height) return true;
                else return false;
            }
    };