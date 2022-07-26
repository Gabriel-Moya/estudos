using Microsoft.EntityFrameworkCore;
using MP.ApiDotNet6.Domain.Entities;
using MP.ApiDotNet6.Domain.Repositories.Interfaces;
using MP.ApiDotNet6.Infra.Data.Context;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Infra.Data.Repositories;

public class ProductRepository : IProductRepository
{
    private readonly ApplicationDbContext _dbContext;

    public ProductRepository(ApplicationDbContext dbContext)
    {
        _dbContext = dbContext;
    }

    public async Task<Product> CreateAsync(Product product)
    {
        _dbContext.Add(product);
        await _dbContext.SaveChangesAsync();
        return product;
    }

    public async Task DeleteAsync(Product product)
    {
        _dbContext.Remove(product);
        await _dbContext.SaveChangesAsync();
    }

    public async Task EditAsync(Product product)
    {
        _dbContext.Update(product);
        await _dbContext.SaveChangesAsync();
    }
    public async Task<Product> GetByIdAsync(int id)
    {
        return await _dbContext.Product.FirstOrDefaultAsync(x => x.Id == id);
    }

    public async Task<ICollection<Product>> GetAllAsync()
    {
        return await _dbContext.Product.ToListAsync();
    }

}