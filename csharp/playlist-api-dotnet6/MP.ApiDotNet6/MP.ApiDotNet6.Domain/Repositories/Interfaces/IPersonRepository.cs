using MP.ApiDotNet6.Domain.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Domain.Repositories.Interfaces;

public interface IPersonRepository
{
    Task<Person> GetByIdAsync(int id);
    Task<ICollection<Person>> GetAllAsync();
    Task<Person> CreateAsync(Person person);
    Task EditAsync(Person person);
    Task DeleteAsync(Person person);
}
