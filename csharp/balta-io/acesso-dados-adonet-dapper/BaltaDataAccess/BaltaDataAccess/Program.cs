using BaltaDataAccess.Models;
using Dapper;
using Microsoft.Data.SqlClient;
using System;

namespace BaltaDataAccess
{
    public class Program
    {
        static void Main(string[] args)
        {
            const string connectionString = "Server=localhost,1433;Database=balta;User ID=sa;Password=senhaS3creta;TrustServerCertificate=True";

            var category = new Category();
            category.Id = Guid.NewGuid();
            category.Title = "Amazon AWS";
            category.Url = "amazon";
            category.Description = "Categoria destinada a serviços da AWS";
            category.Order = 8;
            category.Summary = "AWS Cloud";
            category.Featured = false;

            // Previnindo SQL Injection

            var insertSql = @"INSERT INTO
                                [Category]
                            VALUES(
                                NEWID(),
                                title,
                                url,
                                summary,
                                order,
                                featured)";

            using (var connection = new SqlConnection(connectionString))
            {
                var categories = connection.Query<Category>("SELECT [ID], [Title] FROM [Category]");
                foreach (var item in categories)
                {
                    Console.WriteLine($"{item.Id} - {item.Title}");
                }
            }
        }
    }
}
