package com.company;

import java.util.Arrays;

public class ArrayList<E> {

    private Object[] elements;

    private int size;

    public ArrayList(){
        elements = new Object[10];
    }

    public ArrayList(int size){
        elements = new Object[size];
    }

    public ArrayList(E[] elements){
        this.elements = elements;
    }

    public E get(int i) {
        if(i > elements.length-1){
            throw new ArrayIndexOutOfBoundsException();
        }
        return (E)elements[i];
    }

    public boolean add(E element) {
        if(size+1 >= elements.length){
            elements = Arrays.copyOf(elements,size*2);
        }
        elements[size++] = element;
        return true;
    }

    public int size() {
        return elements.length;
    }

    public E[] toArray(){
        return (E[]) Arrays.copyOf(elements,size);
    }

}
