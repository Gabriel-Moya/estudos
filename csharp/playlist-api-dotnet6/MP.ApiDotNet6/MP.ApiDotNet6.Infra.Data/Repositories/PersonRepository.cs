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

public class PersonRepository : IPersonRepository
{
    private readonly ApplicationDbContext _dbContext;

    public PersonRepository(ApplicationDbContext dbContext)
    {
        _dbContext = dbContext;
    }

    public async Task<Person> CreateAsync(Person person)
    {
        _dbContext.Add(person);
        await _dbContext.SaveChangesAsync();
        return person;
    }

    public async Task DeleteAsync(Person person)
    {
        _dbContext?.Remove(person);
        await _dbContext.SaveChangesAsync();
    }

    public async Task EditAsync(Person person)
    {
        _dbContext.Update(person);
        await _dbContext.SaveChangesAsync();
    }

    public async Task<Person> GetByIdAsync(int id)
    {
        return await _dbContext.People.FirstOrDefaultAsync(x => x.Id == id);
    }

    public async Task<ICollection<Person>> GetAllAsync()
    {
        return await _dbContext.People.ToListAsync();
    }
}