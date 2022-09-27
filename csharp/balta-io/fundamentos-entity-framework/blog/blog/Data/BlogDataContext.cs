using blog.Data.Mappings;
using blog.Models;
using Microsoft.EntityFrameworkCore;

namespace blog.Data
{
    public class BlogDataContext : DbContext
    {
        public DbSet<Category> Categories { get; set; }
        public DbSet<Post> Posts { get; set; }
        public DbSet<User> Users { get; set; }
        public DbSet<PostWithTagsCount> PostWithTagsCount { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder options)
        {
            options.UseSqlServer("Server=localhost,1433;Database=Blog;User ID=sa;Password=senhaS3creta");
        }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.ApplyConfiguration(new CategoryMap());
            modelBuilder.ApplyConfiguration(new UserMap());
            modelBuilder.ApplyConfiguration(new PostMap());
            modelBuilder.Entity<PostWithTagsCount>(x =>
            {
                x.ToSqlQuery(@"
                    SELECT
                        [Title] AS [Name],
                        SELECT COUNT([Id]) FROM [Tags] WHERE [PostId] = [Id]
                            AS [Count]
                        FROM
                            [Post]");
            });
        }
    }
}
