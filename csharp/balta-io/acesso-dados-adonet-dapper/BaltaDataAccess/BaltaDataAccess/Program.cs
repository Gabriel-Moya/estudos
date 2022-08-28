using BaltaDataAccess.Models;
using Dapper;
using Microsoft.Data.SqlClient;
using System;
using System.Collections.Generic;
using System.Data;

namespace BaltaDataAccess
{
    public class Program
    {
        static void Main(string[] args)
        {
            const string connectionString = "Server=localhost,1433;Database=balta;User ID=sa;Password=senhaS3creta;TrustServerCertificate=True";

            using (var connection = new SqlConnection(connectionString))
            {
                var categories = connection.Query<Category>("SELECT [ID], [Title] FROM [Category]");
                foreach (var category in categories)
                {
                    Console.WriteLine($"{category.Id} - {category.Title}");
                }
            }
        }
    }
}
