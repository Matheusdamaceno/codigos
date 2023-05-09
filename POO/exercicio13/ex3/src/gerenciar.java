public class gerenciar {
  void cadastrarGen() {
    aluno a = new aluno();
    professor p = new professor();

    a.cadastrar();
    p.cadastrar();
  }

  void exe() {
    cadastrarGen();
  }
}
