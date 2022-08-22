using System;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Menu();
        }

        static void Menu()
        {
            Console.Clear();

            Console.WriteLine("O que deseja fazer?");
            Console.WriteLine("1 - Somar");
            Console.WriteLine("2 - Subtrair");
            Console.WriteLine("3 - Dividir");
            Console.WriteLine("4 - Multiplicar");
            Console.WriteLine("5 - Elevar ao quadrado");
            Console.WriteLine("6 - Obter raíz quadrada");
            Console.WriteLine("0 - Sair");

            Console.WriteLine("----------");
            Console.WriteLine("Selecione uma opção: ");

            short res = short.Parse(Console.ReadLine());

            switch (res)
            {
                case 1: Somar(); break;
                case 2: Subtrair(); break;
                case 3: Dividir(); break;
                case 4: Multiplicar(); break;
                case 5: ElevarAoQuadrado(); break;
                case 6: ObterRaizQuadrada(); break;
                case 0: Finalizar(); break;
                default: Menu(); break;
            }
        }

        static void Somar()
        {
            Console.Clear();

            Console.WriteLine("Primeiro valor: ");
            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor:");
            float v2 = float.Parse(Console.ReadLine());

            Console.WriteLine("");

            float resultado = v1 + v2;
            // Console.WriteLine("O resultado da Somar é " + resultado);
            Console.WriteLine($"O resultado da Somar é {resultado}");
            // Console.WriteLine($"O resultado da Somar é {v1 + v2}");
            // Console.WriteLine("O resultado da Somar é " + (v1 + v2));
            Console.ReadKey();
            Menu();
        }

        static void Subtrair()
        {
            Console.Clear();

            Console.WriteLine("Primeiro valor:");
            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor:");
            float v2 = float.Parse(Console.ReadLine());

            Console.WriteLine("");

            float resultado = v1 - v2;
            Console.WriteLine($"O resultado da subtração é {resultado}");
            Console.ReadKey();
            Menu();
        }

        static void Dividir()
        {
            Console.Clear();

            Console.WriteLine("Primeiro valor:");
            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor");
            float v2 = float.Parse(Console.ReadLine());

            Console.WriteLine("");

            float resultado = v1 / v2;
            Console.WriteLine($"O resultado da divisão é {resultado}");
            Console.ReadKey();
            Menu();
        }

        static void Multiplicar()
        {
            Console.Clear();

            Console.WriteLine("Primeiro valor: ");
            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor: ");
            float v2 = float.Parse(Console.ReadLine());

            Console.WriteLine("");

            float resultado = v1 * v2;
            Console.WriteLine("O resultado da multiplicação é " + (v1 * v2));
            Console.ReadKey();
            Menu();
        }

        static void ElevarAoQuadrado()
        {
            Console.Clear();

            Console.WriteLine("Digite o número que quer elevar ao quadrado: ");
            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("");

            double resultado = Math.Pow(v1, 2);
            Console.WriteLine($"O resultado da multiplicação é {resultado}");
            Console.ReadKey();
            Menu();

        }

        static void ObterRaizQuadrada()
        {
            Console.Clear();

            Console.WriteLine("Digite o número que deseja obter a raíz quadrada: ");
            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("");

            double resultado = Math.Sqrt(v1);
            Console.WriteLine($"A raíz quadrada de {v1} é: {resultado}");
            Console.ReadKey();
            Menu();

        }

        static void Finalizar()
        {
            Console.Clear();
            Console.WriteLine("Muito obrigado por utilizar nossa calculadora");
            Environment.Exit(0);
        }
    }
}