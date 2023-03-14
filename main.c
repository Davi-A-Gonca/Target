#include <stdio.h>

double calculoPercentual(double faturamento_mensal, double faturamento_total){
    double porcentagem_total = 100, porcentagem_estado = 0;
    porcentagem_estado = (faturamento_mensal * porcentagem_total) / faturamento_total;
    return porcentagem_estado;
}

int main() {
    double SP = 67836.43,
        RJ = 36678.66,
        MG = 29229.88,
        ES = 27165.48,
        Outros = 19849.53,
        tot = SP + RJ + MG + ES + Outros,
        spPercentual = calculoPercentual(SP, tot),
        rjPercentual = calculoPercentual(RJ, tot),
        mgPercentual = calculoPercentual(MG,tot),
        esPercentual = calculoPercentual(ES,tot),
        outrosPercentual = calculoPercentual(Outros,tot);
    printf("Os Percentuais do faturamento mensal de cada estado: \n");
    printf("SP: %.2lf -> %.2lf%c\n", SP, spPercentual, '%');
    printf("RJ: %.2lf -> %.2lf%c\n", RJ, rjPercentual, '%');
    printf("MG: %.2lf -> %.2lf%c\n", MG, esPercentual, '%');
    printf("ES: %.2lf -> %.2lf%c\n", ES, mgPercentual, '%');
    printf("Outros: %.2lf -> %.2lf%c\n", Outros, outrosPercentual, '%');
    printf("Total: %.2lf -> %.2lf%c\n", tot, 100.00, '%');

    return 0;
}
