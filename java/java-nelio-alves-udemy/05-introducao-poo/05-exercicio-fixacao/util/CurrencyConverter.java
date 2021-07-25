package util;

public class CurrencyConverter {

    public static final double IOF = 0.06;

    public static double amountReal(double dollarPrice, double dollarsBought) {
        return (dollarsBought + dollarsBought * IOF) * dollarPrice;
    }

}
