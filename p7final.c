struct _complex
{
float real,imaginary;
}; 
typedef struct _complex Complex();
struct Complex input _complex()
{
 struct complex a;
  scanf("%f%f",&a.real,&a.imaginary);
  return a;
}
Complex add(Complex a, Complex b)
{
  struct complex;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a, Complex b, Complex c)
{
    printf("(%d + %di)+(%d + %di) is (%d + %di)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  int a,b,c;
  printf("enter first complex number a+bi in the form 'a b'\n");
 a=input_complex(); 
  printf("enter second complex number a+bi in the form 'a b'\n");
   b=input_complex();
  c=add_complex;
  output(a,b,c);
  return 0;
}