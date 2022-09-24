using blog.Models;
using Microsoft.EntityFrameworkCore;

namespace blog.Data
{
    public class BlogDataContext : DbContext
    {
        public DbSet<Category> Categories { get; set; }
        public DbSet<Post> Posts { get; set; }
    }
}
