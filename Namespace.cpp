/*
* In addition to functions , classes, enumerations
*C++ offer namespaces as a mechanism for expressing that 
*some declarations belong together and their names shouldn't
* clash with other names
*
*
**/
// for example, experimenting with a self-defined complex number type

namespace My_code 
{
    class complex {/*...........*/};
    complex sqrt(complex);
    //....
    int main();
}
int My_code::main()
{
    complex z {1,2};
    auto z2 = sqrt(z);
    std::cout<<'{' <<z2.real()<<','<<z2.imag()<<"}\n";
    //...
};
int main() 
{
    return My_code::main();
}

/*
* By putting my code into the namespace My_code, we make sure that our names do not conflict
* with the standard library names in the namespace std. The precaution is wise, because the 
*standard library does not provide support for complex arithmetic
*The simplest way to access a name in another namespace is to qualify it with the namespace name
*(e.g std::out, My_code::main ....), The real main is defined the global namespace, that is
* not local to a defined namespace , class, or function . To gain access to names in the standard
*library namespace , we can use a using-directive
* using namespace std;
*
* Namespace are primarily used to organize larger program components, such as 
*libraries 
* They simplify the composition of a program out of seperately developed parts

*/