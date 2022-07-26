using MP.ApiDotNet6.Domain.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Domain.Repositories.Interfaces;

public interface IProductRepository
{
    Task<Product> GetByIdAsync(int id);
    Task<ICollection<Product>> GetAllAsync();
    Task<Product> CreateAsync(Product product);
    Task EditAsync(Product product);
    Task DeleteAsync(Product product);
}
