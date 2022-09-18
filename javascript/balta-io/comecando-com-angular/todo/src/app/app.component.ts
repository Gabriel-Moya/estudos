import { Component } from '@angular/core';
import { Todo } from 'src/models/todo.model';

@Component({
  selector: 'app-root', // <app-root>
  templateUrl: './app.component.html',
  //template: '<p>Meu template</p>',
  styleUrls: ['./app.component.css'],
})
export class AppComponent {
  public todos: Todo[] = [];
  public title: String = 'Minhas tarefas';

  constructor() {
    this.todos.push(new Todo(1, 'Ir à luta de judô', false));
    this.todos.push(new Todo(2, 'Ir ao mercado', false));
    this.todos.push(new Todo(3, 'Cortar o cabelo', true));
  }

  alteraTexto() {
    this.title = 'Novo título';
  }

  remove(todo: Todo) {
    const index = this.todos.indexOf(todo);
    if(index !== -1) {
      this.todos.splice(index, 1);
    }
  }

  markAsDone() {}

  markAsUndone() {}
}
