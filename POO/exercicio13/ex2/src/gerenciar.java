public class gerenciar {
  void cadastrarGen(pessoa p) {
    p.cadastrar();
  }

  void exe() {
    aluno a = new aluno();
    professor p = new professor();

    cadastrarGen(a);
    cadastrarGen(p);
  }
}
