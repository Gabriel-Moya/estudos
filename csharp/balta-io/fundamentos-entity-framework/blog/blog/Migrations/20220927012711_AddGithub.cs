using System;
using Microsoft.EntityFrameworkCore.Migrations;

namespace blog.Migrations
{
    public partial class AddGithub : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "Github",
                table: "User",
                type: "nvarchar(max)",
                nullable: true);

            migrationBuilder.AlterColumn<DateTime>(
                name: "LastUpdateDate",
                table: "Post",
                type: "SMALLDATETIME",
                nullable: false,
                defaultValue: new DateTime(2022, 9, 27, 1, 27, 11, 241, DateTimeKind.Utc).AddTicks(4913),
                oldClrType: typeof(DateTime),
                oldType: "SMALLDATETIME",
                oldDefaultValue: new DateTime(2022, 9, 27, 1, 10, 1, 970, DateTimeKind.Utc).AddTicks(3069));
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "Github",
                table: "User");

            migrationBuilder.AlterColumn<DateTime>(
                name: "LastUpdateDate",
                table: "Post",
                type: "SMALLDATETIME",
                nullable: false,
                defaultValue: new DateTime(2022, 9, 27, 1, 10, 1, 970, DateTimeKind.Utc).AddTicks(3069),
                oldClrType: typeof(DateTime),
                oldType: "SMALLDATETIME",
                oldDefaultValue: new DateTime(2022, 9, 27, 1, 27, 11, 241, DateTimeKind.Utc).AddTicks(4913));
        }
    }
}
