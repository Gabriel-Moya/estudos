using Microsoft.Data.SqlClient;
using System;
using System.Data;

namespace BaltaDataAccess
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const string connectionString = "Server=localhost,1433;Database=balta;User ID=sa;Password=senhaS3creta;TrustServerCertificate=True";

            using (var connection = new SqlConnection(connectionString))
            {
                Console.WriteLine("Conexão realizada!");
                connection.Open();
                
                using (var command = new SqlCommand())
                {
                    command.Connection = connection;
                    command.CommandType = CommandType.Text;
                    command.CommandText = "SELECT [Id], [Title] FROM [Category]";

                    var reader = command.ExecuteReader();
                    while (reader.Read())
                    {
                        Console.WriteLine($"{reader.GetGuid(0)} - {reader.GetString(1)}");
                    }
                }
            }
            Console.WriteLine("Conexão finalizada!");
        }
    }
}
