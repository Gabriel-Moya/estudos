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

            var category = new Category();
            var insertSql = "INSERT INTO [Category] VALUES(NEWID(), title, url, summary, order, featured)";

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
