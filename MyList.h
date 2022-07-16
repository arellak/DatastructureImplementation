//
// Created by nimbl on 7/9/2022.
//

#ifndef MYLISTIMPLEMENTATION_MYLIST_H
#define MYLISTIMPLEMENTATION_MYLIST_H


template<class T> class MyList {
public:
    int maxSize;
    int size;
    T* startPoint;

    MyList() {
        maxSize = 4;
        size = 0;
    }

    void add(const T &item) {
        if(size+1 >= maxSize) {
            maxSize *= 2;

            T* tmp = (T*) malloc(sizeof(T) * size);
            for(int i = 0; i < size; i++) {
                memcpy(&tmp[i],&startPoint[i], sizeof(T));
            }

            free(startPoint);
            startPoint = (T*) malloc(sizeof(T) * maxSize);
            for(int i = 0; i < size; i++) {
                memcpy(&startPoint[i],&tmp[i], sizeof(T));
            }
            free(tmp);
        }

        if(size <= 0) {
            size++;
            // startPoint = new T(std::move(item));
            startPoint = (T*) malloc(sizeof(item));
            memcpy(&startPoint[0], &item, sizeof(item));
        } else {
            size++;

            memcpy(&startPoint[size-1], &item, sizeof(item));

//
//            auto tmp = new(malloc(sizeof(T) * size)) T(std::move(item));
//            for (int i = 0; i < size; i++) {
//                if(i == size-1) {
//                    tmp[i] = item;
//                } else {
//                    tmp[i] = startPoint[i];
//                }
//            }
//
//            free(startPoint);
//            startPoint = tmp;
        }
    }

    void remove(int index) {
        if(size-1 <= 0) {
            free(startPoint);
        } else {
            auto tmp = new(malloc(sizeof(T) * size-1)) T();

            for(int i = 0; i < size; i++) {
                if (i == index) continue;
                if (i > index && i < size-1) {
                    tmp[i+1] = startPoint[i + 1];
                } else {
                    tmp[i] = startPoint[i];
                }

                // std::cout << tmp[i] << std::endl;
            }

            startPoint = tmp;
        }

        size--;
    }

    T get(int index) {
        if(index > size-1) {
            exit(-420);
        }

        return startPoint[index];
    }
};


#endif //MYLISTIMPLEMENTATION_MYLIST_H
