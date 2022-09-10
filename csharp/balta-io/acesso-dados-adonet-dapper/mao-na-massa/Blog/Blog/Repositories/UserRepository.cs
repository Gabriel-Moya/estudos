using Blog.Models;
using Dapper.Contrib.Extensions;
using Microsoft.Data.SqlClient;
using System.Collections.Generic;

namespace Blog.Repositories
{
    public class UserRepository
    {
        public IEnumerable<User> Get()
        {
            using (var connection = new SqlConnection(""))
            {
                return connection.GetAll<User>();
            }
        }
    }
}
