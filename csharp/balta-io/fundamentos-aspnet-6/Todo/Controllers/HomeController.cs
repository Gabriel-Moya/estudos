using Microsoft.AspNetCore.Mvc;
using Todo.Data;
using Todo.Models;

namespace Todo.Controllers;

[ApiController]
public class HomeController : ControllerBase
{
    [HttpGet("/")]
    //[Route("/")]
    public List<TodoModel> Get([FromServices] AppDbContext context)
    {
        return context.Todos.ToList();
    }

    [HttpPost("/")]
    public TodoModel Post([FromBody] TodoModel todo, [FromServices] AppDbContext context)
    {
        context.Todos.Add(todo);
        context.SaveChanges();

        return todo;
    }
}
