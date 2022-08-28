using Microsoft.Data.SqlClient;
using System;

namespace BaltaDataAccess
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const string connectionString = "Server=localhost,1433;Database=balta;User ID=sa;Password=senhaS3creta";

            using (var connection = new SqlConnection(connectionString))
            {
                Console.WriteLine("Conexão realizada!");
            }
            Console.WriteLine("Conexão finalizada!");

            Console.WriteLine("Hello World!");
        }
    }
}
