using Blog.Data;
using Blog.Models;
using Blog.ViewModels;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace Blog.Controllers;

[ApiController]
public class CategoryController : ControllerBase
{
    [HttpGet("v1/categories")]
    public async Task<IActionResult> GetAsync([FromServices] BlogDataContext context)
    {
        try
        {
            var categories = await context.Categories.ToListAsync();
            return Ok(categories);

        }
        catch
        {
            return StatusCode(500, "05X04 - Falha interna no servidor");
        }
    }

    [HttpGet("v1/categories/{id:int}")]
    public async Task<IActionResult> GetByIdAsync([FromRoute] int id, [FromServices] BlogDataContext context)
    {
        try
        {
            var category = await context.Categories.FirstOrDefaultAsync(x => x.Id == id);

            if (category is null) return NotFound();
            return Ok(category);
        }
        catch
        {
            return StatusCode(500, "05X05 - Falha interna no servidor");
        }
    }

    [HttpPost("v1/categories")]
    public async Task<IActionResult> PostAsync([FromBody] EditorCategoryViewModel model, [FromServices] BlogDataContext context)
    {
        try
        {
            var category = new Category
            {
                Id = 0,
                Name = model.Name,
                Slug = model.Slug.ToLower(),
            };
            await context.AddAsync(category);
            await context.SaveChangesAsync();

            return Created($"v1/categories/{category.Id}", category);
        }
        catch (DbUpdateException ex)
        {
            return StatusCode(500, "05XE9 - Não foi possível incluir a categoria");
        }
        catch
        {
            return StatusCode(500, "05X10 - Falha interna no servidor");
        }
    }

    [HttpPut("v1/categories/{id:int}")]
    public async Task<IActionResult> PutAsync([FromRoute] int id, [FromBody] EditorCategoryViewModel model, [FromServices] BlogDataContext context)
    {
        try
        {
            var category = await context.Categories.FirstOrDefaultAsync(x => x.Id == id);

            if (category is null) return NotFound();

            category.Name = model.Name;
            category.Slug = model.Slug;

            context.Categories.Update(category);
            await context.SaveChangesAsync();

            return Ok();
        }
        catch (DbUpdateException ex)
        {
            return StatusCode(500, "05XE8 - Não foi possível alterar a categoria");
        }
        catch
        {
            return StatusCode(500, "05X11 - Falha interna no servidor");
        }
    }

    [HttpDelete("v1/categories/{id:int}")]
    public async Task<IActionResult> DeleteAsync([FromRoute] int id, [FromServices] BlogDataContext context)
    {
        try
        {
            var category = await context.Categories.FirstOrDefaultAsync(x => x.Id == id);

            if (category is null) return NotFound();

            context.Categories.Remove(category);
            await context.SaveChangesAsync();

            return Ok(category);
        }
        catch (DbUpdateException ex)
        {
            return StatusCode(500, "05XE7 - Não foi possível excluir a categoria");
        }
        catch (Exception ex)
        {
            return StatusCode(500, "05X12 - Falha interna no sergidor");
        }
    }
}
