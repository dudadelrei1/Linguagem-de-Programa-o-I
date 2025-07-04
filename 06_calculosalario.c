#include <stdio.h>

int main()
{
    //Reservas mensais para pagamento de direitos e multas EMPRESA
    float salariogeral = 0, geral13 = 0, ferias = 0, FGTS = 0, INSSgeral = 0, valerefeicaogeral = 0, saudegeral, gastomensal = 0; 
    float horasextrasgeral = 0, adicionalnoturnogeral = 0, insalubridadegeral = 0, demissao = 0, despesatotal = 0, gastos = 0 ; 
      
    //Impostos e taxas EMPRESA
    float COFINS = 0, CSLL = 0, IRPJ = 0, PIS = 0, ISS = 0, DAS = 0; 
    
    //Variáveis EMPRESA
    int funcionarios = 0, contribuicao = 0, faturamento = 0, fatmes =0 ; char demitido, lucropresumido;  
    
    //Informações importantes EMPRESA
    printf("\n\tQuantos funcionários tem a empresa? ");
    scanf("%d", &funcionarios); 
    
    printf("\tQual o faturamento anual da empresa? ");
    scanf("%d", &faturamento);
    
    if(faturamento < 7800000){
        printf("\tUtiliza o regime do lucro presumido? Digite S para sim ou N para não: ");
        scanf(" %c", &lucropresumido);
        while (lucropresumido != 'S' && lucropresumido != 'N') {
        printf("\tEntrada inválida! Digite apenas S ou N: ");
        scanf(" %c", &lucropresumido);}
        printf("\tQual o faturamento mensal da empresa? ");
        scanf("%d", &fatmes); 
    }else{
        printf("\tQual o faturamento mensal da empresa? ");
        scanf("%d", &fatmes); 
    }
    
    printf("\n\t----------------------------------------------------------------------------------------------------------------------");
    
    for(int i=0; i<funcionarios; i++){
    //Salario final POR TRABALHADOR 
    float salarioliquido = 0;
    
    //Adicionais POR TRABALHADOR 
    float salario = 0, horasextras = 0, adicionalnoturno = 0, adicionalinsalubridade = 0;
    
    //Descontos POR TRABALHADOR 
    float INSS = 0, IRPF = 0, valetransporte = 0, valerefeicao = 0, planosaude = 0;
    
    //Variáveis POR TRABALHADOR 
    char dependente, transporte, extra, diasuteis, noite, insalubridade, refeicao, saude;
    int pessoas = 0, hora = 0, cargahoraria = 0, grau = 0, valor1 = 0, valor2 = 0;
    
    printf("\n\t\t Folha de pagamento do funcionário %d\n\n", i+1);
    
    //Sálario POR TRABALHADOR 
    printf("\tSalário base: ");
    scanf("%f", &salario);
    
    //Benefícios
    //Hora-extra POR TRABALHADOR 
    printf("\tQual a carga horária mensal de trabalho(sem considerar hora-extra)? ");
    scanf(" %d", &cargahoraria);
    
    printf("\tObteve hora-extra? Digite S para sim ou N para não: ");
    scanf(" %c", &extra);
    
    while (extra != 'S' && extra != 'N') {
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &extra);}
    
    if(extra == 'S'){
      printf("\tQuantas horas? ");
      scanf(" %d", &hora);
      printf("\tForam realizadas em dias úteis? Digite S para sim ou N para não: ");
      scanf(" %c", &diasuteis);
      
      while (diasuteis != 'S' && diasuteis != 'N') {
      printf("\tEntrada inválida! Digite apenas S ou N: ");
      scanf(" %c", &diasuteis);}
      
      if(diasuteis == 'S'){
        horasextras = hora*(salario/cargahoraria)*0.5;}
      else if (diasuteis == 'N'){
        horasextras = hora*(salario/cargahoraria);}
      else{printf("Valor inválido! Reinicie o programa");}}
    
    
    //Adicional noturno POR TRABALHADOR 
    printf("\tTrabalha durante a noite? Digite S para sim ou N para não: ");
    scanf(" %c",&noite);
     
    while (noite != 'S' && noite != 'N') {
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &noite);}
    if(noite == 'S'){
         adicionalnoturno = salario*0.2;}
     
    //Insalubridade POR TRABALHADOR 
    printf("\tTrabalha em condições de insalubridade? Digite S para sim ou N para não: ");
    scanf(" %c", &insalubridade);
    
    while (insalubridade != 'S' && insalubridade != 'N') {
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &insalubridade);}
    
    if(insalubridade == 'S'){
        printf("\tQual o grau de insalubridade? Digite 1 para mínimo, 2 para médio ou 3 para máximo: ");
        scanf(" %d", &grau);
        if(grau == 1){
            adicionalinsalubridade = salario*0.1;
        } else if(grau == 2){
            adicionalinsalubridade = salario*0.2;
        }else if(grau == 3){
            adicionalinsalubridade = salario*0.4; 
        }
    }
    
    //Descontos
    //INSS POR TRABALHADOR 
    if(salario <= 1518.01){
        INSS = salario*0.075;
    } else if(salario <= 2793.89){
        INSS = salario*0.09;
    } else if(salario <= 4190.83){
        INSS = salario*0.12;
    } else if(salario <= 8157.41){
        INSS = salario*0.14;
    } else{
        INSS = 8157.41*0.14;
    }
    
    //Dependentes POR TRABALHADOR 
    printf("\tPossui dependentes? Digite S para sim ou N para não: ");
    scanf(" %c", &dependente);
    
    while (dependente != 'S' && dependente != 'N') {
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &dependente);}
    
    if(dependente == 'S'){
        printf("\tQuantos? ");
        scanf("%d", &pessoas);
    } else if(dependente == 'N'){
        pessoas = 0;
    }
    
    //IRPF POR TRABALHADOR 
    if((salario - INSS) < 2112.01){
        IRPF = 0.0;
    } else if((salario - INSS) <= 2826.66){
        IRPF = (salario-INSS)*0.075 - 158.40 - pessoas*189.59;
    } else if((salario - INSS) <= 3751.06){
        IRPF = (salario-INSS)*0.15 - 370.40 - pessoas*189.59;
    } else if((salario - INSS) <= 4664.68){
        IRPF = (salario-INSS)*0.225 - 651.73 - pessoas*189.59;
    }else{
        IRPF = (salario-INSS)*0.275 - 884.96 - pessoas*189.59;
    }
    
    if(IRPF < 0){
        IRPF = 0; 
    } else {IRPF = IRPF;}
    
    //vale-transporte POR TRABALHADOR 
    printf("\tPossui vale-transporte? Digite S para sim ou N para não: ");
    scanf(" %c", &transporte);
    
    while (transporte != 'S' && transporte != 'N') {
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &transporte);}
    
    if(transporte == 'S'){
        valetransporte = 0.06*salario;
    }else if(transporte == 'N'){
        valetransporte = 0; 
    }
    
    //Vale refeição POR TRABALHADOR 
    printf("\tA empresa fornece vale-refeição? Digite S para sim ou N para não: ");
    scanf(" %c", &refeicao);
    
    while(refeicao != 'S' && refeicao != 'N'){
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &refeicao);
    }
    
    if(refeicao == 'S'){
        printf("\tQual o valor bruto do vale-refeição? ");
        scanf("%d", &valor1);
      valerefeicao = valor1*0.2;   
    }
    
    //Plano de saúde POR TRABALHADOR 
    printf("\tA empresa fornece plano de saúde? Digite S para sim ou N para não: ");
    scanf(" %c", &saude);
    
    while(saude != 'S' && saude != 'N'){
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &saude);
    }
    
    if(saude == 'S'){
        printf("\tQual o valor bruto do plano de saúde? ");
        scanf("%d", &valor2);
       planosaude = valor2*0.3;   
    }
    
    //Apresentação de cada valor adicional e desconto POR TRABALHADOR 
    printf("\n\tSálario base: %.2f", salario);
    printf("\n\tAdicional hora-extra: %.2f", horasextras);
    printf("\n\tAdicional noturno: %.2f", adicionalnoturno);
    printf("\n\tAdicional insalubridade: %.2f", adicionalinsalubridade);
    printf("\n\tINSS: %.2f", INSS);
    printf("\n\tIRPF: %.2f", IRPF);
    printf("\n\tValetransporte: %.2f", valetransporte);
    printf("\n\tVale-refeição: %.2f", valerefeicao);
    
    //Salário líquido POR TRABALHADOR 
    salarioliquido = salario + (horasextras + adicionalnoturno + adicionalinsalubridade) - (INSS + IRPF + valetransporte + valerefeicao);
    if(salarioliquido < 1509.01){
        printf("\n\n\tSalário líquido: R$1509,00\n");
    }else{
    printf("\n\n\tSalário líquido: R$%.2f\n", salarioliquido);}
    
    printf("\n\t-------------------------------------------------------------------------------------------------------------");
    
    //Demissão sem justa causa POR TRABALHADOR 
    printf("\n\tA empresa pretende demitir esse funcionário sem justa causa? Digite S para sim ou N para não: ");
    scanf(" %c", &demitido); 
    if(demitido == 'S'){
        printf("\n\tQuantos meses o funcionário contribuiu?"); 
        scanf(" %d", &contribuicao);
    }
    
    while(demitido != 'S' && demitido != 'N'){
    printf("\tEntrada inválida! Digite apenas S ou N: ");
    scanf(" %c", &demitido);
    }
    
    printf("\n\t-------------------------------------------------------------------------------------------------------------");
    
    //Cálculo das despesas da empresa (pagamento funcionários)
    salariogeral+= salario; 
    INSSgeral += (salario + horasextras + adicionalnoturno + adicionalinsalubridade)*0.2;
    valerefeicaogeral += valor1*0.8;
    horasextrasgeral += horasextras; 
    FGTS += (salario + horasextras + adicionalnoturno + adicionalinsalubridade)*0.08;
    adicionalnoturnogeral += adicionalnoturno; 
    insalubridadegeral += adicionalinsalubridade; 
    saudegeral += valor2*0.7; 
    if(demitido == 'S'){demissao += FGTS*04;}
    }
    ferias = (salariogeral*4/3 + INSSgeral + FGTS)/12;
    geral13 = (salariogeral+INSSgeral+FGTS)/12;
    
    //Gastos extras 
    printf("\n\tQual o valor mensal da empresa gasto com outras despesas? ");
    scanf("%f", &gastos);
    
    //Despesa total sem e com impostos
    despesatotal = salariogeral + INSSgeral + valerefeicaogeral + horasextrasgeral + FGTS + adicionalnoturnogeral + insalubridadegeral + saudegeral + demissao + ferias + gastos;
    gastomensal = despesatotal + DAS + COFINS + CSLL + IRPJ + PIS + ISS; //Com impostos
    
    //Cálculo das despesas de impostos e taxas 
    if(faturamento <= 4800000 && lucropresumido == 'N'){
        if(faturamento <= 180000){
            DAS = faturamento*0.04;
        } else if(faturamento <= 360000){
            DAS = faturamento*0.073; 
        } else if(faturamento <= 720000){
            DAS = faturamento*0.095;
        }else if(faturamento <= 1800000){
            DAS = faturamento*0.1070;
        }else if(faturamento <= 3600000){
            DAS = faturamento*0.1430;
        }else{
            DAS = faturamento*0.19;
        }
        
    } else if(lucropresumido == 'S'){
        COFINS = fatmes*0.03;
        CSLL = fatmes*0.072;
        IRPJ = fatmes*0.08;
        PIS = fatmes*0.0065; 
        ISS = fatmes*0.05;
        
    } else {
        float lucro = faturamento - despesatotal; 
        if(lucro > 0){
        COFINS = lucro*7.6;
        CSLL = lucro*0.09;
        IRPJ = lucro*0.15; 
        PIS = lucro*0.0165;
        ISS = fatmes*0.05; 
        }
    }
    
    //Valores a serem pagos pela empresa 
    printf("\n\n\t\tFolha de pagamento - Empresa");
    printf("\n\tValor mensal gasto com salário dos funcionários: R$%.2f", salariogeral);
        if(DAS == 0){
    printf("\n\tValor mensal gasto com INSS patronal: R$%.2f", INSSgeral);}
    printf("\n\tValor mensal gasto com vale-refeição: R$%.2f", valerefeicaogeral);
    printf("\n\tValor mensal gasto com horas extras: R$%.2f", horasextrasgeral);
    printf("\n\tValor mensal gasto com FGTS: R$%.2f", FGTS);
    printf("\n\tValor mensal gasto com adicional noturno: R$%.2f", adicionalnoturnogeral);
    printf("\n\tValor mensal gasto com adicional de insalubridade: R$%.2f", insalubridadegeral);
    printf("\n\tValor mensal gasto com plano de saúde: R$%.2f", saudegeral);
    printf("\n\tReserva para demissão de funcionário sem justa-causa: R$%.2f", demissao);
    printf("\n\tReserva mensal para pagamento das férias: R$%.2f", ferias);
    printf("\n\tReserva mensal para pagamento do 13º salário: R$%.2f", geral13);
        if(DAS != 0){
    printf("\n\tValor mensal gasto com DAS: R$%.2f", DAS/12);}
        else{
    printf("\n\tValor mensal gasto com COFINS: R$%.2f", COFINS);
    printf("\n\tValor mensal gasto com CSLL: R$%.2f", CSLL);
    printf("\n\tValor mensal gasto com IRPJ: R$%.2f", IRPJ);
    printf("\n\tValor mensal gasto com PIS: R$%.2f", PIS);
    printf("\n\tValor mensal gasto com ISS: R$%.2f", ISS);
    }
    printf("\n\n\tTotal a pagar no mês: %.2f", gastomensal); 

    return 0;
}

