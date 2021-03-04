Complex operator +(const Complex &a,const Complex &b)
{
    return{a.a+b.a , a.b+b.b};
}
ostream& operator<<(ostream& dout,const Complex &c){
  return(dout<<c.a<<"+"<<"i"<<c.b);

}
//This is not the whole code , but just operator overloading part.
//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
