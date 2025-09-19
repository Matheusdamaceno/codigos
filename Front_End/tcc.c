bool leituraFrente;

int main(int argc, char const *argv[])
{
  if (leituraFrente == LOW)
  {
    andarFrente();
  }
  else
  {
    if (leituraDireita == LOW)
    {
      virarDireita();
    }
    else if (leituraEsquerda == LOW)
    {
      virarEsquerda();
    }
    else
    {
      andarTras();
      delay(500);
      parar();
    }
  }
  return 0;
}
