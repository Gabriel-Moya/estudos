using Blog.Data;
using Microsoft.AspNetCore.Mvc;

namespace Blog.Controllers;

[ApiController]
public class CategoryController : ControllerBase
{
    [HttpGet("v1/categories")] // localhost:PORT/v1/categories
    public IActionResult Get([FromServices] BlogDataContext context)
    {
        var categories = context.Categories.ToList();
        return Ok(categories);
    }

    [HttpGet("v2/categories")] // localhost:PORT/v2/categories
    public IActionResult Get2([FromServices] BlogDataContext context)
    {
        var categories = context.Categories.ToList();
        return Ok(categories);
    }
}
