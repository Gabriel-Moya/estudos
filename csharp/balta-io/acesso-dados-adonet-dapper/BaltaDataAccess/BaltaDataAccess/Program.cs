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
                
            }
        }
    }
}
